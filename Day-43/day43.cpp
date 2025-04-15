#include<iostream>
using namespace std;

    // binary searche
    // ===========================

    int binary(int arr[],int n, int key){
        int s = 0;
        int e = n;
        while (s<=e)
        {
            int mid =(s+e)/2;

            if (arr[mid] == key)
            {
                return mid;
            }
            else if (arr[mid]>key)
            {
                e=mid-1;              
            }
            else
            {
                s=mid+1;
            }
        }
        return -1;
    }

int main(){
    int n ;

    cout << "Enter array size => ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter data-[" << i << "] => ";
        cin >> arr[i];
    }

    int key;

    cout << "Enter key => ";
    cin >> key;
    
    cout << binary(arr,n,key) << endl;

}
