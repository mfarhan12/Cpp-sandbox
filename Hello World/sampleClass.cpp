#include <stdio.h>

class Box{

    public:
      int length = 5;   // Length of a box
      int width = 5;  // Breadth of a box
      int height = 5;   // Height of a box

};

    int get_volume(void){
        int vol;
        vol = length * width * height;
        printf("GOT HERE \n");
        return vol;
    }