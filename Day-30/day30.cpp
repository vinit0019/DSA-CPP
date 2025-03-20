#include<iostream>
using namespace std;

    // Method overloading
    // =====================

    class human{
        public:
        int A;
        int B;

        public:
        human(int A,int B)
        {
            this-> A = A;
            this-> B = B;
        }
        
        void rnw(int A, int B)
        {
          cout << A+B << endl;
        }

        void rnw(double A , double B)
       {
        cout << A+B << endl;
       } 
    };

    int main(){

        human vinit(5,3);

        vinit.rnw(20,30);
        vinit.rnw(2.2,4.4);
    }

