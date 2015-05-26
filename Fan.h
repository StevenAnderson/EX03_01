#include <iostream> 
using namespace std;

class Fan{
private:
    int speed;
    
public:
    Fan () {
        speed=1;
        on=false;
        radius=5;
    }
    Fan (int s, bool On, double rad) {
        speed=s;
        on=On;
        radius=rad;
    }
    
    int getspeed(){return speed;}
    bool on;
    double radius;
    
    void setspeed(int new_speed){
        if (new_speed>0 && new_speed<=3)
            speed=new_speed;
    }
    
    
    
};