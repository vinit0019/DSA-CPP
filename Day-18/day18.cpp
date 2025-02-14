#include<iostream>
using namespace std;

int main(){

    // - What is a **for-each loop**, and how does it work in C++?  

    // A for-each loop in C++ is a simplified loop structure that allows you to iterate over all elements in a collectio without having to explicitly manage the loop index.It’s typically used when you want to access every element in a container without modifying the structure itself.

    // ===================================================

    // - When should you use a **for-each loop** instead of a regular loop?

    // You should use a for-each loop instead of a regular for loop in C++ when the following conditions

    // =======================================================

    // - What is the **sizeof() operator**, and how does it work with arrays?  

    // The sizeof() operator in C++ is a compile-time operator that returns the size (in bytes) of a data type or a variable. It is often used to determine the amount of memory that a variable, data type, or object occupies in memory.

    // ========================================================

    // - Declare an integer **1D array** with 5 elements.  
    // - Use a **for-each loop** to print all elements of the array.  

    // int a[5]={1,5,8,6,7};

    // for (int i : a)
    // {
    //     cout << i << " ";
    // }

    // Enter by user
    // ===================================
    // int size;

    // cout << "Enter Array size =>";
    // cin >> size ;

    // int x[size];

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter value = [" << i << "] =>" ;
    //     cin >> x[i];
    // }

    // for(int a : x)
    // {
    //     cout << a << " ";
    // }
    
    //  Find the total size of the array
    // ==============================================

    // int arr[5] = {6,4,5,8,9};

    // cout << "siz in bytes: " << sizeof(arr);


    // Enter by user
    // ===============================

    // int size;
    // cout << "Enter Arrays value => ";
    // cin >> size;

    // int a[size];

    // for (int i = 0; i <size; i++)
    // {
    //     cout << "Enter index = [" << i << "] =>";
    //     cin >> a[i]; 
    // }
    // cout << "siz in bytes: " << sizeof(a);
    

    // 2. Find the size of a single element.
    // =======================================

    // int size;
    // cout << "Enter Arrays size => ";
    // cin >> size;

    // int a[size];

    // for (int i = 0; i <size; i++)
    // {
    //     cout << "Enter index = [" << i << "] =>";
    //     cin >> a[i]; 
    // }

    // int E ;
    // cout << "Enter you want to find the size of bytes => ";
    // cin >> E;

    // cout << "size in bytes: " << sizeof(E);


    // 3. Calculate the total number of elements in the array.  
    // =============================================================

    // int size,p=0;
    // cout << "enter Arrays size => ";
    // cin >> size;
    
    // int a[size];

    // for (int i = 0; i <size; i++)
    // {
    //     cout << "Enter index = [" << i << "] =>";
    //     cin >> a[i]; 
    // }
    // for (int i = 0; i <size; i++)
    // {
    //     cout << size << endl;
    // }
    // cout << "total number of elements in the array =>" << size;
    

    //  **Find the Largest & Smallest Element:**  
    // ======================================================

    // int size;

    // cout << "Enter arrays size => ";
    // cin >> size;

    // int a[size];
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter index number => [" << i <<"] => ";
    //     cin >> a[i];
    // }
    
    



    // - Write a program to reverse the elements of a **1D array**.  
    // ==============================================================

    // int size;

    // cout << "Enter arrays size => ";
    // cin >> size;

    // int a[size];
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter index number => [" << i <<"] => ";
    //     cin >> a[i];
    // }

    // - Write a function that calculates and returns the sum of all elements in an array.  
    // =========================================================================================

    // int sum = 0;
    // int size;

    // cout << "Enter size in Arrays => ";
    // cin >> size;

    // int a[size];

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter index number => [" << i << "] => ";
    //     cin >> a[i];
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     sum += a[i];
    // }
    // cout << "Total sum of Arrays => " << sum ;

    
}