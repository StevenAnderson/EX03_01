#include "Fan.h"
int main(){
    
    
    Fan F1(3, true,10);
    Fan F2(2, false, 5);
    
    cout << "Fan 1: " << F1.getspeed()<< "  "<< F1.on<< "  "<< F1.radius<< "  " << endl;
    cout << "Fan 2: " << F2.getspeed()<< "  "<< F2.on<< "  "<< F2.radius<< "  " << endl;
    
    
}