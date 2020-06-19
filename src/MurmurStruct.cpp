/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MurmurStruct.cpp
 * Author: roseba
 * 
 * Created on June 18, 2020, 2:22 PM
 */

#include "MurmurStruct.h"
MurmurVector::MurmurVector():X(0),Y(0){
    
}
MurmurVector::MurmurVector(int x,int y)
:X(x),Y(y){
    
}
MurmurVector::MurmurVector(const MurmurVector& other)
:X(other.X),Y(other.Y){        
}
MurmurVector MurmurVector::operator=(const MurmurVector& other){
    this->X=other.X;
    this->Y=other.Y;
}