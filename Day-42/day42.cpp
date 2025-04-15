#include<iostream>
using namespace std;

    // liniar serch
    // ===========================

    int liniar(int arr[],int n, int key){
        for (int i = 0; i < n; i++)
        {
            if (key == arr[i])
            {
                return i;
            }       
        }
        return -1;
    }

int main(){

    int n ;
    cout << "Enter Arrays size =>";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter index-" << i << " => ";
        cin >> arr[i];
    }
    
    int key;
    cout << "enter key => ";
    cin >> key;

    cout << liniar(arr,n,key)<< endl;

}
