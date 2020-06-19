/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MurmurStruct.h
 * Author: roseba
 *
 * Created on June 18, 2020, 2:22 PM
 */

#ifndef MURMURSTRUCT_H
#define MURMURSTRUCT_H

struct MurmurVector{
    MurmurVector();
    MurmurVector(int x, int y);
    MurmurVector(const MurmurVector& other);
    MurmurVector operator=(const MurmurVector& other);
    int X;
    int Y;
};

#endif /* MURMURSTRUCT_H */

