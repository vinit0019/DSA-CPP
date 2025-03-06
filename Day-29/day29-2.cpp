#include<iostream>
using namespace std;

// =========================
// multipal inheritance

class Dad{

    public:
    string surname;
   
    Dad(string surname)
    {
        this-> surname = surname;
    }
};

class Mom{

    public:
    string genetics;

    Mom(string genetics)
    {
        this->genetics = genetics;
    }
};

class Child : public Dad, public Mom{

    public:
    int age;

    Child(string surname, string genetics, int age) :  Dad(surname),Mom(genetics)
    {
        this->age = age;
    }

    void display(){
        cout << "Surname => " << surname << " " << endl
           << "genetics => " << genetics << " " << endl
                            << "Age => " << age << endl;
    }
};

int main(){

    Child vinit("marthak","hight",21);
    vinit.display();
}
    