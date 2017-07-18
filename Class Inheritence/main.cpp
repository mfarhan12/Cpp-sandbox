#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "cat.h"
using namespace std;


int main () {
    char return_val[255];
    cat whiskers;
    
    whiskers.jump();
    whiskers.getBlood(return_val);

    printf("%s", return_val);


    return 0;
}