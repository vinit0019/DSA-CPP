#include<iostream>
using namespace std;

int main(){

   float units,A,B;

   cout << "enter units" << endl;
   cin >> units;

    if (units <= 50){
        units = units * 0.50 ;
        A = units *  0.2 ;
        units = units + A ;
        cout << units << endl;
    }
    else{
        if (units <= 150 ){
            units = units - 50 ;
            units = units * 0.75 ;
            units = units + 25 ;
            A = units *  0.2 ;
            units = units + A ;
            cout << units << endl;
        }
        else{
            if (units <=250 ){
                units = units - 150 ;
                units = units * 1.20 ;
                units = units + 100 ;
                A = units *  0.2 ;
                units = units + A ;
                cout << units << endl;
            }
            else{
                if (units > 250 ){
                    units = units - 250 ;
                    units = units * 1.50 ;
                    units = units + 220 ;
                    A = units * 0.2 ;
                    units = units + A ;
                    cout << units << endl;
                }
            }
        }
    }   
}