/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MurmurDrawingArea.h
 * Author: roseba
 *
 * Created on June 17, 2020, 9:46 AM
 */

#ifndef MURMURDRAWINGAREA_H
#define MURMURDRAWINGAREA_H
#include <gtkmm.h>
#include <gtkmm/drawingarea.h>
#include <iostream>

#define REDRAW_INTERVAL 1000/10

class MurmurDrawingArea : public Gtk::DrawingArea {
public:
    MurmurDrawingArea();
    MurmurDrawingArea(const MurmurDrawingArea& orig);
    virtual ~MurmurDrawingArea();
    void initialize();
    bool timedRedraw();
protected:
    bool on_draw(const Cairo::RefPtr<Cairo::Context> &context) override;

private:
    
};

#endif /* MURMURDRAWINGAREA_H */

