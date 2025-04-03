#include<iostream>
using namespace std;

    // insertion short
    // ===============================

int main(){

    int n;

    cout << "Enter Zise of Arrays =>";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j;

        for ( j = i - 1; j >= 0 && arr[j] > key; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    
}
