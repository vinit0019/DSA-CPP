#include<iostream>
using namespace std;

void Bubbleshort(int n, int arr[]){
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
}

void insertionshort(int n, int arr[]){
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
}

void selectionshort(int n , int arr[]){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void print(int n, int arr[]){
        for (int i = 0; i < n; i++)
        {
            cout << "arr[" << i << "] => " << arr[i] << endl;
        }
        cout << endl;
    }

int main(){
    
    int n, chose;
    cout << "enter size of arrays => " ;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] => "; 
       cin >> arr[i];
    }

    cout << " 1 for Bubble short" << endl;
    cout << " 2 for insertion short" << endl;
    cout << " 3 for selection short" << endl;
    cout << " 4 for exit" << endl;
    cin >> chose;

    do
    {
        switch (chose)
        {
        case 1:
        Bubbleshort( n, arr);
        print(n, arr);
            break;
        
        case 2:
        insertionshort(n, arr);
        print (n, arr);
            break;

        case 3:
        selectionshort(n , arr);
        print(n, arr);
            break;
        }
    } while (6 != chose);
    
}