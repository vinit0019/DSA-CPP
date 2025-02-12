#include<iostream>
using namespace std;

int main(){

        // - - - - 1
        // - - - 2 1
        // - - 3 2 1
        // - 4 3 2 1
        // 5 4 3 2 1 

    //  for(int row = 1 ; row <= 5 ; row++){

    //     for(int blank=4  ; blank >=row  ; blank--){

    //         cout << "- " ;
    //     }

    //      for(int col = row ; col >= 1 ; col--){

    //          cout << col << " ";
    //      }
    //      cout << endl;
    //  }


        // - - - - 5
        // - - - 4 5 
        // - - 3 4 5 
        // - 2 3 4 5 
        // 1 2 3 4 5 

//     for(int row = 5 ; row >= 1 ; row--){

//         for (int blank = 1 ; blank <= row-1; blank++){

//             cout << "- ";
//         }   

//          for(int col = row ; col <=5 ; col++){
        
//             cout << col << " ";
//          }
//          cout << endl;
// }

        // - - - - 5 
        // - - - 4 4 
        // - - 3 3 3 
        // - 2 2 2 2
        // 1 1 1 1 1

//          for(int row = 5 ; row >= 1 ; row--){

//         for (int blank = 1 ; blank <= row-1; blank++){

//             cout << "- ";
//         }   

//          for(int col = row ; col <=5 ; col++){
        
//             cout << row << " ";
//          }
//          cout << endl;
// }


        // 1 0 1 0 1
        // - 0 1 0 1
        // - - 1 0 1
        // - - - 0 1 
        // - - - - 1

    //   for(int row = 1 ; row <=5 ; row++){

    //     for (int blank = 4; blank >=row ; blank)
    //     {
    //         cout << "- " ;
    //     }
    //      for(int col= row; col <=5 ; col++){
        
    //        if (col % 2 != 0){
    //             cout << 1 ;
    //        }
    //        else{
    //         cout << 0;
    //        }
    //      }
    //      cout << endl;  
    // }


        // 5 4 3 2 1 
        // - 4 3 2 1 
        // - - 3 2 1 
        // - - - 2 1
        // - - - - 1

 

        // for (int row = 5; row >= 1 ; row--)
        // {
        //     for (int space = 5; space > row ; space--)
        //     {
        //         cout << "- ";
        //     }
            
        //     for (int col = row; col >= 1; col--)
        //     {
        //         cout << col << " " ;
        //     }
        //     cout << endl;
        // }


    // 5 4 3 3 1 
    // - 5 4 3 2 
    // - - 5 4 3 
    // - - - 5 4 
    // - - - - 5 

    //  for(int row =1  ; row <=5  ; row++){ 
    
    //   for (int blank =1; blank <=row-1 ; blank++)
    //   {
    //         cout << "- ";
    //   }
    //      for(int col = 5 ; col >=row ; col--){
        
    //          cout << col << " ";
    //       }
    //       cout << endl;
    // }   


    // 1 2 3 4 5  5 4 3 2 1 
    // 1 2 3 4 -  - 4 3 2 1 
    // 1 2 3 - -  - - 3 2 1 
    // 1 2 - - -  - - - 2 1
    // 1 - - - -  - - - - 1 

    //  for(int row =5  ; row >=1 ; row--){ 
    
    //       for(int col = 1 ; col <=row ; col++){
        
    //          cout << col << " ";
    //       }
    //       for (int blank = row; blank <=5-1 ; blank++)
    //    {
    //     cout << "- " ;
    //    }
    //    for (int blank = row; blank <=5-1 ; blank++)
    //     {
    //      cout << "- " ;
    //     }
    //        for(int col = row ; col >=1 ; col--){
         
    //           cout << col << " ";
    //        }
    //      cout <<endl;
    // }  
       
    
    // 1 2 3 4 5 5 4 3 2 1 
    // 1 2 3 4 - - 4 3 2 1 
    // 1 2 3 - - - - 3 2 1 
    // 1 2 - - - - - - 2 1
    // 1 - - - - - - - - 1 
    // 1 - - - - - - - - 1 
    // 1 2 - - - - - - 2 1 
    // 1 2 3 - - - - 3 2 1 
    // 1 2 3 4 - - 4 3 2 1 
    // 1 2 3 4 5 5 4 3 2 1 


    // for (int row = 5; row >=1; row--)
    // {
    //     for (int col =1 ; col <=row ; col++)
    //     {
    //         cout << col << " ";
    //     }
    //     for (int  blank =4 ; blank >=row ; blank--)
    //     {
    //         cout << "- " ;
    //     }

    //     for (int  blank =4 ; blank >=row ; blank--)
    //     {
    //         cout << "- " ;
    //     }
    //     for (int col =row ; col >=1 ; col--)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }
    
    // for (int row = 1; row <=5; row++)
    // {
    //     for (int col = 1; col<=row ; col++)
    //     {
    //         cout << col << " " ;
    //     }
    //     for (int blank = 4; blank >=row ; blank--)
    //     {
    //         cout << "- " ;
    //     }

    //     for (int blank = 4; blank >=row ; blank--)
    //     {
    //         cout << "- " ;
    //     }
    //     for (int col = row; col>=1 ; col--)
    //     {
    //         cout << col << " " ;
    //     }
    //     cout << endl;
        
    // }

    // 1 2 3 4 5 
    // 1 2 3 4 
    // 1 2 3 
    // 1 2 
    // 1

    // 1 2 
    // 1 2 3 
    // 1 2 3 4 
    // 1 2 3 4 5 

    // for (int row = 5; row >=1; row--)
    // {
    //    for (int col = 1 ; col<=row ; col++)
    //    {
    //      cout << col << " " ;
    //    }
    //     cout << endl;
    // }
    
    // for (int row = 2; row <=5; row++)
    // {
    //     for(int col =1; col <=row; col++)
    //     {
    //         cout << col  << " ";
    //     }
    //     cout << endl;
    // }


    // - - - - 1 - - - - 
    // - - - 1 2 1 - - - 
    // - - 1 2 3 2 1 - - 
    // - 1 2 3 4 3 2 1 -
    // 1 2 3 4 5 4 3 2 1 
    
    // for (int row =1; row <=5 ; row++)
    // {
    //    for (int blank = 4 ; blank >=row ; blank--)
    //    {
    //     cout << "- ";
    //    }
    //    for (int col =1; col <=row; col++)
    //    {
    //     cout << col << " ";
    //    }

    //    for (int col =row-1; col >=1; col--)
    //    {
    //     cout << col << " ";
    //    }

    //     for (int blank = 4 ; blank >=row ; blank--)
    //     {
    //      cout << "- ";
    //     }
    //    cout << endl;
    // }
    
    
    // - - - - * - - - - 
    // - - - * * * - - - 
    // - - * * * * * - - 
    // - * * * * * * * -
    // * * * * * * * * * 

    // for (int row =1; row <=5 ; row++)
    // {
    //    for (int blank = 4 ; blank >=row ; blank--)
    //    {
    //     cout << "- ";
    //    }
    //    for (int col =1; col <=row; col++)
    //    {
    //     cout << "* ";
    //    }

    //    for (int col =row-1; col >=1; col--)
    //    {
    //     cout << "* "  ;
    //    }

    //     for (int blank = 4 ; blank >=row ; blank--)
    //     {
    //      cout << "- ";
    //     }
    //    cout << endl;
    // }

    

    }  
