#include <iostream>
using namespace std; 

class Person{
    public: 
        Person (string name); 
        Person (string name, int age); 
        void getOlder(); 
    private: 
        string name; 
        int age; 
}; 
