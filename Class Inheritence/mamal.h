using namespace std;
#ifndef MAMAL_H_
#define MAMAL_H_

class mamal{
public:
    
    // constructor
    mamal();


    void getBlood(char* bloodState);

 
    void getBreath(char* breathState);


private:
    char bloodType[255];

    char breathType[255];

};

#endif

