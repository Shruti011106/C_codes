#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    int roll , marks;
    public:
    student(string s, int r , int m)
    {
        name=s;
        name=r;
        name=m;

    }
    void display()
    {
        cout<<"name = "<<name<<endl;
         cout<<"roll no. = "<<roll<<endl;
          cout<<"marks = "<<marks<<endl;

    }
};
int main(){
    student s1 ("shruti",313,91);
    s1.display();
    return 0;
}