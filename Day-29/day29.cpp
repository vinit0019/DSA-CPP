#include<iostream>
using namespace std;

// simple inheritance
// ========================================

class human
{
    protected:
    string name;
    int age;

    public:
    human(string name,int age){
        this->name = name;
        this->age = age;
    }

};

class student: public human
{
    int roll_nu,fees;

    public:
    student(string name,int age,int roll_nu,int fees):human(name,age)
    {
        this->roll_nu = roll_nu;
        this->age = age;
    }

    void display()
    {
        cout << name << " " 
          << roll_nu << " "
             << fees << " "
             << endl;
    }
};

int main(){
    student A1("vinit",21,10,999);
    A1.display();
}