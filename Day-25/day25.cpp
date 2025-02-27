#include<iostream>
using namespace std;

    class name{
       private:
        string surname;
        int age;
    
    public:
    string lname;
    int lage;
        void set(string lname , int lage){
            surname = lname;
            age  = lage;
        }
        void get(){
            cout << lname << endl << lage;
        }
    };

    int main(){

        name vinit;
        vinit.lage = 21;
        vinit.lname = "Marthak";

        
        cout << "age => " << vinit.lage << endl;
        cout << vinit.lname << " - Vinit" << endl; 
        cout << endl;
        
        name rutvik;
        rutvik.lage = 21;
        rutvik.lname = "Bhtti";

        cout << "age => " << rutvik.lage << endl;
        cout << rutvik.lname << " - Rutvik" << endl; 

    }