#include<iostream>
using namespace std;

// Hierachical inheritance
// ============================

class Dad{

    public:
    string surname;

    Dad(string surname){
        this-> surname = surname;
    }
};

class son : public Dad{

    public:
    string name;

    son(string surname, string name) : Dad(surname)
    {
        this-> name = name;
    }

    void display(){
        cout << endl;
        cout << surname << " "
               << name <<  " "
                    << endl; 
    }
};

class Daughter : public Dad{

    public:
    string name;

    Daughter(string surname, string name) : Dad(surname)
    {
        this-> name = name;
    }
    void display(){
        cout << surname << " "
               << name <<  " "
                    << endl; 
                cout << endl;
    }
};

int main(){

    son Ayush("Maheta -","ayush");
    Ayush.display();

    Daughter Disha("Shah","- Disha");
    Disha.display();
}