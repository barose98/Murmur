

The main class will start the GTK application.  

The MurmurDrawlingArea will create the specified number of Boids and spawn new threads for them each to run. The DrawlingArea will maintain a List of the Boids, redraw itself at a certain interval.  

The Boids Class will have a position struct, a velocity struct, an acceleration struct, an ID variables. It will have constants . It will have methods Move  

The BoidsMessageQueue will simulate how Boids can "see". Every time a Boid moves, it will report it's position and velocity and ID to the Queue. It will also as the Queue what other Boids are nearby. The Queue will return all the Boids that are nearby.  
> Written with [StackEdit](https://stackedit.io/).
