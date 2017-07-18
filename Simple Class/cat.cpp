#include <stdio.h>
#include "cat.h"
#include<cstring>

using namespace std;

// class constructor
cat::cat(void){
    int x = 0;

    // initialize the meow call
    x = sprintf(this->cat_meow, "MEOWW!");

    this->kill_count = 0;
}

// speak function
void  cat::speak(){
    printf(this->cat_meow);
}

// jump function
void  cat::jump(){
    printf("The cat has jumped! \n");

}

// kill a mouse
void  cat::kill_mouse(){
    this->kill_count++;

}

void cat::print_kill_count(){
    printf("Kill Count: %d \n", this->kill_count);
}