#include<iostream>
using namespace std;

// Hybrid inheritance
// =========================

class Human{

    public:
    string parentname; 

    Human(string parentname){
        this-> parentname = parentname;
    }
};

class Male : public Human
{
    public:
    string Malename;

    Male(string parentname, string Malename) : Human(parentname)
    {
        this-> Malename = Malename;
    }
};

class Female : public Human
{
    public:
    string Femalename;

    Female(string parentname, string Femalename) : Human(parentname)
    {
        this-> Femalename = Femalename;
    }
};

class Child : public Male, public Female
{
    public:
    string Childname;

    Child(string parentname,string Malename,string Femalename,string Childname) : Male(parentname,Malename),Female(parentname,Femalename)
    {
        this->Childname = Childname;
    }
    void display(){
        cout << endl;
        cout << "parentname =>" << Male::parentname << " "  << endl;
        cout << "Malename => " << Malename << " "  << endl;
        // cout << "parentname =>" << Female::parentname << " "  << endl;
        cout << "Femalename => " << Femalename << " "  << endl;
        cout << "Childname => " << Childname << endl << endl;
                                    
    }
};

int main(){
    Child obj1("H","P","j","v");
    obj1.display();
}