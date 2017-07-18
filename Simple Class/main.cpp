#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "cat.h"
using namespace std;


int main () {
    cat whiskers;

    whiskers.jump();
    
    whiskers.kill_mouse();

    whiskers.kill_mouse();

    whiskers.kill_mouse();

    whiskers.kill_mouse();
    whiskers.print_kill_count();
    
    whiskers.speak();

    return 0;
}