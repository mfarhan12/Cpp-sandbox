#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include<vector>
using namespace std;


int main () {

    // declare the vector
    vector<string> strings;

    // declare the that has a specific size
    vector<string> strings2[5];


    // add item to the vector, don't use this if vector is has specific size
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    // retrieve item from vector
    cout << strings[1] <<endl;

    // size of vector
    cout << strings.size() << endl;
    
    // loop over the vector
    for (int i = 0; i < strings.size(); i++){
        cout << strings[i] << endl;
    }


    // create an iterator
    vector<string>::iterator it = strings.begin();

    cout << *it <<endl;

    *it++;

    cout << *it << endl;

    // loop over the iterator
    

    return 0;


}