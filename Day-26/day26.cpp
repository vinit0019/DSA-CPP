#include<iostream>
using namespace std;

int size;

void siz(){
   
    cout << "Enter Arrays size =>";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
       cout << "Enter index [" << i << "] => ";
       cin >> arr[i];
    }
    cout << endl;

    for (int i = 0; i <size; i++)
    {
        cout << "index [" << i << "] => " << arr[i] << endl;
    }
    cout << endl;
}  


int main(){

    siz();
}