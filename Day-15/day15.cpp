#include<iostream>
using namespace std;

int main(){

     int size,A[500],B,C,K,chose,value;
    do
    {
        cout << "1 : create" << endl;
        cout << "2 : read" << endl;
        cout << "3 : update" << endl;
        cout << "4 : Delete" << endl;
        cout << "5 : Exit" << endl;
        cin >> chose;
        
        switch (chose)
        {
        case 1:
            cout << "Enter your Arrays size=> ";
            cin >> size ;

        for (int i = 0; i <size; i++)
        {
            cout << "Enter Index number => " ;
            cin >> A[i];
        }
        break;
        
        case 2:
        // if (A[0] == NULL)
        // {
        //     cout << "Enter First value " << endl; 
        // }
        
        for (int i = 0; i<size ; i++)
        {
            cout << A[i] << " "; 
        }
        cout << endl;
        
        break;

        case 3 :
        cout << "Enter Positon number you want to update => ";
        cin >> B;
        cout << "Enter new value =>";
        cin >> value;
        A[B-1] = value;
        break;
       
        case 4 :
        cout << "Enter position number you want to Delete => ";
        cin >> K;
        for (int i = 0; i < size-1; i++)
        {
    
        }
        break;
        
        }

    } while (chose != 5); 
    

}


