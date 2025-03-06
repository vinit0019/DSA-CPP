#include<iostream>
using namespace std;

class rnw{
    private:
      string name;
      int grid;

    public:
        rnw(string name , int grid){
            this-> name = name;
            this-> grid = grid;

            cout << "name => " << name << endl 
                 << "grid => " << grid << endl;
                                  cout << endl;
        }

        rnw(rnw &A){
            name = A.name;
            name = A.grid;

            cout << "name => " << A.name << endl 
            << "grid => " << A.grid << endl;
        }
};

int main(){

    rnw a1("vinit",9600);
    rnw a2 = a1;
}