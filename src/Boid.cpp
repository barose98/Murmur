/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Boid.cpp
 * Author: roseba
 * 
 * Created on June 5, 2020, 8:36 PM
 */

#include "Boid.h"



Boid::Boid( std::string id) 
:Id(id)
{
//     std::cout << "con " << this->Id << std::endl;
}
Boid::Boid(const Boid&& orig) {
    this->Id=orig.GetId();
    this->max=orig.max;
}
Boid::Boid(const Boid& orig) {
    this->Id=orig.GetId();
    this->max=orig.max;
}
Boid& Boid::operator=(const Boid& right){
        // Check for self-assignment!
        if (this == &right) // Same object?
            return *this; // Yes, so skip assignment, and just return *this.
        // Deallocate, allocate new space, copy values...
        this->max=right.max;
        this->Id=right.GetId();
        return *this;
    }
Boid::~Boid() {
}

std::string Boid::GetId() const {
    return Id;
}
void Boid::setMax(Gtk::Allocation& allocation){
    this->max=MurmurVector(allocation.get_width(),allocation.get_height());
}    