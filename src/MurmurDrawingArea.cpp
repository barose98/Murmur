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

#include "MurmurDrawingArea.h"

MurmurDrawingArea::MurmurDrawingArea() {
}

MurmurDrawingArea::MurmurDrawingArea(const MurmurDrawingArea& orig) {
}

MurmurDrawingArea::~MurmurDrawingArea() {
}

void MurmurDrawingArea::initialize() {
    std::cout << "initialize" << std::endl;
    this->set_visible(true);
    this->set_can_focus(true);
    sigc::slot<bool> this_slot = sigc::mem_fun<bool>(*this, &MurmurDrawingArea::timedRedraw);
    sigc::connection conn = Glib::signal_timeout().connect(this_slot, REDRAW_INTERVAL);
}

bool MurmurDrawingArea::on_draw(const Cairo::RefPtr<Cairo::Context> &context) {
//    std::cout << "draw" << std::endl;

}

bool MurmurDrawingArea::timedRedraw() {
//    std::cout << "timed" << std::endl;
    this->queue_draw();
    return true;
}