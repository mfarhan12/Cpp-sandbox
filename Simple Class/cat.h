using namespace std;
#ifndef CAT_H_
#define CAT_H_

class cat{
public:
    
    char cat_meow[256]; 

    // constructor
    cat();

    // jump function
    void speak();

    // jump function 
    void jump();

    void kill_mouse();
    void print_kill_count();

private:
    int kill_count;

};

#endif

