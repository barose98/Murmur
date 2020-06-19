/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Boid.h
 * Author: Barrett Rose
 *
 * Created on June 5, 2020, 8:36 PM
 */

#ifndef BOID_H
#define BOID_H
#include <string>
#include <iostream>
#include <gtkmm.h>
#include "MurmurStruct.h"

class Boid{
public:
//    Boid();
    Boid( std::string id);
    Boid(const Boid& orig);
    Boid(const Boid&& orig);
    Boid& operator=(const Boid& right) ;

    virtual ~Boid();
    void initialize();
    void swim();
    void setMax(Gtk::Allocation& allocation);
    std::string GetId() const;
    
private:
     std::string Id;
     MurmurVector max;
};

#endif /* BOID_H */

