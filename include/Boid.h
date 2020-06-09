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

class Boid{
public:
    Boid();
    Boid(const Boid& orig);
    virtual ~Boid();
    void SetTest(std::string test);
    std::string GetTest() const;

    
private:
     std::string test;
};

#endif /* BOID_H */

