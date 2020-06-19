/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MurmurDrawingArea.cpp
 * Author: roseba
 * 
 * Created on June 17, 2020, 9:46 AM
 */

#include <iomanip>

#include "MurmurDrawingArea.h"


MurmurDrawingArea::MurmurDrawingArea() {
}

MurmurDrawingArea::MurmurDrawingArea(const MurmurDrawingArea& orig) {
}

MurmurDrawingArea::~MurmurDrawingArea() {
}

void MurmurDrawingArea::initialize(int numBoids) {
    std::cout << "initialize" << std::endl;
    this->set_visible(true);
    this->set_can_focus(true);
    
    for (int i = 0; i < numBoids; ++i) {
        std::string id = padID(i);
        Boid boid(id);
        boids.emplace_back<Boid>(std::move(boid));
    }
    sigc::slot<bool> this_slot = sigc::mem_fun<bool>(*this, &MurmurDrawingArea::timedRedraw);
    sigc::connection conn = Glib::signal_timeout().connect(this_slot, REDRAW_INTERVAL);
}

bool MurmurDrawingArea::on_draw(const Cairo::RefPtr<Cairo::Context> &context) {
//    std::cout << "draw" << std::endl;
    return true;
}

bool MurmurDrawingArea::timedRedraw() {
    //    std::cout << "timed" << std::endl;
    this->queue_draw();
    return true;
}

std::string MurmurDrawingArea::padID(int i) {
    std::stringstream ss;
    ss << std::setfill<char>('0') << std::setw(4) << i;
    return ss.str();
}
void MurmurDrawingArea::on_size_allocate(Gtk::Allocation& allocation){
     std::cout <<  "resize "<<boids.size()  <<std::endl;
        for (Boid boid : this->boids) {
//        std::cout << boid.GetId() << std::endl;
        boid.setMax(allocation);
    }
}