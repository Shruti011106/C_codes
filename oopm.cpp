#include <iostream>
#include <string.h>
using namespace std;

class Vehicle {
    public:
        string brand ="Ford ";
        void honk(){
            cout<<"Tutt TUtt\n";
        }
};
class Car:public Vehicle{
    public:
        string model ="Mustang";
};
int main (){
    Car mycar;4
    mycar.honk();
    cout<<mycar.brand+" "+mycar.model;
    return 0;
}