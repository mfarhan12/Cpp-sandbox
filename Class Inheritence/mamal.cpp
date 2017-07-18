#include <stdio.h>
#include "mamal.h"
#include<cstring>

using namespace std;
    
// constructor
mamal::mamal(void){
    int x = 0;

    // initialize blood type
    x = sprintf(this->bloodType, "WARM");

    x = sprintf(this->breathType, "AIR");
}


void mamal::getBlood(char *bloodState){
    int x;
    x = sprintf(bloodState, this->bloodType);
}

 
void mamal::getBreath(char *breathState){
    int x;
    x = sprintf(breathState, this->breathType);
}


