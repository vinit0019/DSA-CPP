#include<iostream>
using namespace std;

int main (){

    int a,b;

    cout << "A ::";
    cin >>  a; 

    cout << "B ::";
    cin >>  b; 

    if(a<b)
    {
        cout << "A is min" << endl;
    }
    else
    {
        cout << "B is min" << endl;
    }

    cout << "===============================" << endl ;

    (a<b) ? cout << "A is min" : cout << "B is min";
}