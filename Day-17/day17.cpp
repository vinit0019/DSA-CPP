#include<iostream>
using namespace std;

int main(){

    // Develop a program that finds all the negative elements from a given 1D array.
    // =============================================================================

    // int num;
    // cout << "enter array size => ";
    // cin >> num;

    // int a[num];

    // for (int i = 0; i < num; i++)
    // {
    //     cout << "enter index number =>";
    //     cin >> a[i];       
    // }
    // for (int i = 0; i < num; i++)
    // {
    //     if(a[i] < 0)
    //     {
    //         cout << a[i] ;
    //     }
    // }  

    // Develop a Program to find the largest element from a given 2D array.
    // ====================================================================
 
    // int row,col;

    // cout << "enter array row size => ";
    // cin >> row;

    // cout << "enter array col size => ";
    // cin >> col;

    // int a[row][col];
    
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << "enter value =[" << i << "][" << j << "] => ";
    //         cin >> a[i][j]; 
    //     }
    //     cout << endl;

    //     int max;
    //     max = a[0][0];

    //     for (int i = 0; i < row; i++)
    //     {
    //         for (int j = 0; j < col; j++)
    //         {
    //             if (max < a[i][j])
    //             {
    //                 max = a[i][j]; 
    //             }
                
    //         }
            
    //     }
    //     cout << max ;
    // }

    // Develop a Program to find the transpose matrix of a given 2D array.
    // ===================================================================

    //  int row,col;

    // cout << "enter array row size => ";
    // cin >> row;

    // cout << "enter array col size => ";
    // cin >> col;

    // int a[row][col];
    
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << "enter value =[" << i << "][" << j << "] => ";
    //         cin >> a[i][j]; 
    //     }
    //     cout << endl;

    //     for (int i = 0; i < row; i++)
    //     {
    //         for (int j = 0; j < col; j++)
    //         {
    //            cout << a[j][i];
    //         }
    //         cout << endl;
    //     }
    // }

    // Develop a Program to print and find the sum of all elements of a given row & column from a 2D array.
    // =================================================================================================

    int row,col;

    cout << "enter size of array => ";
    cin >> row;

    cout << "enter size of array => ";
    cin >> col;

    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cout << " enter valur [" << i << "][" << j << "] => ";
           cin >> a[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    int ro;
    cout << "what number row you want to sum = ";
    cin >> ro;
    
    int sum = 0;
    
    for (int i = 0; i < ro ; i++)
    {
        for (int j = 0; j < col; i++)
        {
            sum += a[i][j];
        }
    }
    cout << sum ;

}