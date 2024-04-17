#include <iostream>
using namespace std;
class Parent{
public:
    int id;
    void display(){
        cout<<"your id is : "<<id<<endl;
    }

};

class child:public Parent{
    public:
        string name;
        void display2(){
            display();
            cout<<"your name is : "<<name<<endl;
        }
};

int main(){
    child c1;
    c1.id = 10;
    c1.name = "shahriar";
    c1.display2();
}
