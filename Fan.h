#include <iostream> 
using namespace std;
///Make class for Fan
class Fan{
    
private:
    //Set speed private because it needs to be 1,2 or 3.
    //Set radius private because it needs to be positive.
    int speed;
    double radius;
    
public:
    //no argument constructor for Fan
    Fan () {
        speed=1;
        on=false;
        radius=5;
    }
    //constructor to create exact Fan
    Fan (int s, bool On, double rad) {
        speed=s;
        on=On;
        radius=rad;
    }
    //public variable for whether the fans on or off
      bool on;
    
    //get and set fuctions for speed
    int getspeed(){return speed;}
   //valid speeds are 1,2, and 3
    void setspeed(int new_speed){
        if (new_speed>0 && new_speed<=3)
            speed=new_speed;
    }
    //get and set functions for radius
    //valid radiuses are postive values
    int getradius(){return radius;}
    
    void setradius(int new_radius){
        if (new_radius>0)
            radius=new_radius;
    
    }
};