#include<iostream>
using namespace std;

int main (){

    int a;
    int b;
    int c;

    cout << "enter value of A";
    cin >> a;

    cout << "enter value of B";
    cin >> b;

    cout << "niche mujab tamare su karvu che" << endl;

    cout << " + keliye 1 dabaiye " << endl;
    cout << " - keliye 2 dabaiye " << endl;
    cout << " * keliye 3 dabaiye " << endl;
    cout << " / keliye 4 dabaiye " << endl;
    cout << " % keliye 5 dabaiye " << endl;
    cin >> c;

    switch (c){
    case 1:
    cout << a+b;
    break;
    case 2:
    cout << a-b;
    break;
    case 3:
    cout << a*b;
    break;
    case 4:
    cout << a/b;
    break;
    case 5:
    cout << a%b;
    break;
    default : 
    cout << "Ap Aukat ke bahar ja rahe ho.....";
    }
}