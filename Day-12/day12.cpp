#include<iostream>
using namespace std;

int main(){
    
    // 41 
    // 41 42
    // 41 42 43
    // 41 42 43 44
    // 41 42 43 44 45

    // for(int row =41 ; row<=45; row++)
    // {
    //     for (int col=41; col<=row; col++)
    //     {
    //        cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // 11          
    // 12 13          
    // 14 15 16          
    // 17 18 19 20

    // int vinit = 11;

    // for (int row = 11; row<=20 ; row++)
    // {
    //     for (int col=11 ; col<=row ; col++)
    //     {
    //         cout << vinit << " ";
    //         vinit++;
    //     }
    //     cout << endl;
    // }
    

    // - - - - 5
    // - - - 4 5
    // - - 3 4 5 
    // - 2 3 4 5 
    // 1 2 3 4 5 

    // for (int row= 5; row >=1 ; row--)
    // {
    //     for (int blank =row-1 ; blank >=1; blank--)
    //     {
    //        cout << "- ";
    //     }
    //     for (int col=row; col<=5 ;col++)
    //     {
    //        cout << col << " ";
    //     }
    //     cout << endl;
    // }
    

    // 1 0 1 0 1
    // - 1 0 1 0
    // - - 1 0 1
    // - - - 1 0
    // - - - - 1 

    // for (int row =5 ; row >=1 ; row--)
    // {
    //     for (int blank =5-row; blank >=1 ; blank--)
    //     {
    //         cout << "- " ;
    //     }
    //     for (int col=1; col<=row; col++)
    //     {
    //         if (col % 2 == 0)
    //         {
    //             cout << "0 ";
    //         }
    //         else
    //         {
    //             cout << "1 ";
    //         }
    //     }
    //     cout << endl;
    // }
    
    // - - - - 5 - - - -
    // - - - 4 5 4 - - -
    // - - 3 4 5 4 3 - - 
    // - 2 3 4 5 4 3 2 -
    // 1 2 3 4 5 4 3 2 1 

    // for (int row =5; row>=1 ; row--)
    // {
    //     for (int blank= row-1 ; blank>=1 ; blank--)
    //     {
    //         cout << "- ";
    //     }
    //     for (int col = row; col <=4 ; col++)
    //     {
    //         cout << col << " " ;
    //     }   

    //     for (int col = 5; col >=row ; col--)
    //     {
    //         cout << col << " " ;
    //     } 
    //     for (int blank= 1 ; blank<=row-1 ; blank++)
    //     {
    //         cout << "- ";
    //     } 
    //     cout << endl;
    // }
    
    // 1 - - - - - - - - 1
    // 1 2 - - - - - - 2 1 
    // 1 2 3 - - - - 3 2 1 
    // 1 2 3 4 - - 4 3 2 1
    // 1 2 3 4 5 5 4 3 2 1 

    // for (int row = 1 ; row<=5 ; row++)
    // {
    //     for (int col =1; col<=row ; col++)
    //     {
    //      cout << col << " ";
    //     }
    //     for (int blank=4 ; blank>=row ; blank--)
    //     {
    //      cout << "- " ;  
    //     }
    //     for (int blank=4 ; blank>=row ; blank--)
    //     {
    //      cout << "- " ;  
    //     }
    //     for (int col =row; col>=1 ; col--)
    //     {
    //      cout << col << " ";
    //     }
    //     cout << endl;
    // }
    
}