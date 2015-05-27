#include "Fan.h"
int main(){
    
    //create 2 fan objects F1 and F2
    //use constructor to specify parameters
    Fan F1(3, true,10);
    Fan F2(2, false, 5);
    
    //display the values for each slot for Fan 1
    //speed, on=1/off=0, radius
    cout << "Fan 1: " << F1.getspeed()<< "  "<< F1.on<< "  "<< F2.getradius()<< "  " << endl;
    //display the values for each slot for Fan 2
      //speed, on=1/off=0, radius
    cout << "Fan 2: " << F2.getspeed()<< "  "<< F2.on<< "  "<< F2.getradius()<< "  " << endl;
    
    return 0;
}