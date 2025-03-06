#include<iostream>
using namespace std;

    class rnw{
        private:
        int number;
        static int grid;

        public:
        void set(){
            cout << endl;
            cout << "enter number =>" ;
            cin >> number;
            grid++;
        }
        void get(){
            cout << "the number of employ is => " << number << 
                 endl << "and this employee grid => ";
        }   

        static void fullstake(){
            cout << grid << endl;
        }
    };


    int rnw::grid;

    int main(){

        rnw vinit,rutvik,Aom;

        vinit.set();
        vinit.get();
        rnw::fullstake();

        rutvik.set();
        rutvik.get();
        rnw::fullstake();

        Aom.set();
        Aom.get();
        rnw::fullstake();
    }   
