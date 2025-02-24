#include<iostream>
using namespace std;

void t1()
{
    cout << endl << "task 01\n";
    int *ptr;
    int x = 100;

    ptr = &x;

    cout << "Address is : " << ptr << " - " << *ptr << endl;
}


void t2()
{
    cout << endl << "task 02\n";
    int *ptr[5];
    int array[5];

    cout << " Enter kar =>" ;

    for (int i = 0; i <5; i++)
    {
        ptr[i] = &array[i];
        cin >> array[i];
    }
    cout << endl;   
    for (int i = 0; i <5; i++)
    {
        cout << *ptr[i] << " - " << ptr[i] <<endl;
    }
}

void t3()
{
    cout << endl << "task 03\n";
    int a = 100;
    int *ptr = &a;
    int **ptr2 = &ptr;
    int ***ptr3 = &ptr2;


    cout << *ptr << " - " << ptr << endl;
    cout << **ptr2 << " - " << ptr2 << endl;
    cout << ***ptr3 << " - " << ptr3 << endl;
}

int main()
{
     t1();
     t2();
     t3();
}