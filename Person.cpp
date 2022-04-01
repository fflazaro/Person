#include <iostream> 
#include "Person.h"
using namespace std; 

Person::Person(string name, int age) : name{name}, age{age}
}
Person::Person(string name) : name{name} {

}
void Person::getOlder(){
    age++; 
}