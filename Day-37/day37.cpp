#include<iostream>
using namespace std;

    // Bubble sort
    // =============================

int main(){

    int n,temp;
    cout << "enter Arrays size=>";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   
        for (int i = 0; i < n-1; i++)
        {
            for (int i = 0; i < n; i++)
            {
          
            if (arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;

}