#include<iostream>
using namespace std;


void Addition(int a,int b)
{
    int c= a+b;
    cout << "Addition is => " << c << endl;
}

void array(int a[])
{
    cout << "Arrays of index => a[" << a[5] << "]"; 
}

void Apu(int *ptr)
{
    cout << ptr;
}


     int main(){

    //  referance variable
    //  =======================

    // int num =10;
    // int &vin = num;

    // vin = 100000;

    // cout << num << endl;
    // cout << vin << endl;

    
    // passing a Value
    // ====================

    // Addition(1000,100);
    
    // passing a Array
    // =============================

    // int n[8]={4,5,6,8,5,6,10,54};
    // array(n);

    // passing a pointer
    // ==============================
    // int a =100;
    // int *po = &a;
    // Apu(po);

    // passing a address
    // ==========================

    // int a=1000;
    // Apu(&a);
}