#include<iostream>
using namespace std;

int main (){

    int a;

    cout << "enter value of A";
    cin >> a;
    
    switch (a){
        case 1:
        cout << "Sunday";
        break;
        case 2:
        cout << "Monday";
        break;
        case 3:
        cout << "tuesday";
        break;
        case 4:
        cout << "Wednesday";
        break;
        case 5:
        cout << "thursday";
        break;
        case 6:
        cout << "frieday";
        break;
        case 7:
        cout << "saturday";
        break;
        default:
        cout << "Chala ja bhai.....";
    }
    
}