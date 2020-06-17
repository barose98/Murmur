#include <iostream>
#include <sstream>
#include <gtkmm.h>

#include "MurmurDrawingArea.h"

 int main(int argc, char **argv){
 std::cout << "Enter the number of boids. ";
  std::string entered_boids = "";
  int num_boids = 0;
   std::cin>>entered_boids;
    std::cout <<  std::endl;
  std::cout <<  entered_boids<<" boids"  <<std::endl;
  
    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "org.gtkmm.murmur");
    Glib::RefPtr<Gtk::Builder>  refBuilder = Gtk::Builder::create();

    try    {
        refBuilder->add_from_file("./murmur.glade");
    }
    catch(const Glib::FileError& ex)    {
        std::cerr << "FileError: " << ex.what() << std::endl;
        return 1;
    }
    Gtk::Window* main_window ;
    MurmurDrawingArea drawing_area;
    refBuilder->get_widget("murmur-window", main_window);
    if(main_window){
         std::cout << "Starting..."  <<std::endl;
         drawing_area.initialize();
         main_window->add(drawing_area);
         app->run(*main_window);
    }
    return 0;
}