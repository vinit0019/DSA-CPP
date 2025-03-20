#include<iostream>
using namespace std;

    int chose,position,data;

class vinit{
    public:
        int data;
        vinit *next;
};

    void insetrBeginning(vinit &ptr, int data){

    }

int main(){

    do
    {   
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Insert at Any Position" << endl;
        cout << "4. read " << endl;
        cout << "5. update" << endl;
        cout << "6. Delet at Beginning" << endl;
        cout << "7. Delet at End" << endl;
        cout << "8. Delet at Any Position" << endl;
        cout << "9. Exit" << endl;
        cin >> chose;

        switch (chose)
        {
        case 1:
           
        break;
        
        case 2:

        break;

        case 3:

        break;

        case 4:

        break;

        case 5:

        break;

        case 6:

        break;

        case 7:

        break;

        case 8:

        break;

        case 9:

        break;
        

        default:
        cout << "Invalid choice! Please try again." << endl;
            break;
        }
     
    } while (chose != 9);



}




















