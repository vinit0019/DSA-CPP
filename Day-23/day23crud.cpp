#include<iostream>
using namespace std;

void update(int &uservalue,int a[], int size)
{
    int newvalue;

    cout << "Enter you want to update index number =>";
    cin >> uservalue;

    if (uservalue>=0 && uservalue<size)
    {
        cout << "Enter new value =>" ;
        cin >> newvalue;

        a[uservalue] = newvalue;
    }
}


int remov(int a[], int &size)
{
    int dlt;
    cout << "enter you want to delete index => ";
    cin >> dlt;

    if (dlt >= 0 && dlt < size)
    {
        for (int i = dlt; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }
        size--;

        cout << endl
             << "Element deleted succesfully..." << endl
             << endl;
    }
}

int main (){
    int chose,uservalue,size;
    
    cout << endl;

    int a[1];
    do
    {
        cout << "1 : create" << endl;
        cout << "2 : read" << endl;
        cout << "3 : update" << endl;
        cout << "4 : Delete" << endl;
        cout << "5 : Exit" << endl;
        cin >> chose;
        cout << endl;
        
        switch (chose)
        {

        case 1:
        int size;
        cout << "Enter Array size => " ;
        cin >> size;

        for (int i = 0; i < size; i++)
        {
            cout << "Enter index number => [" << i << "]" << "=>";
            cin >> a[i];
        }
        cout << endl;
        break;

        case 2: 
        if (a[0] == -1)
        {
            cout << "Enter arrays value....." << endl << endl;
        }
        else
        {
            for (int i = 0; i < size; i++)
        {
           cout << "a[" << i << "] => " << a[i] << endl;
        }
        cout << endl;
        }
        break;
        
        case 3:
        if (a[0] == -1)
        {
           cout << "Enter arrays value.....";
        }
        else
        {
            update(uservalue, a, size);
        }
        break;

        case 4:
        if (a[0]== -1)
        {
            cout << "Enter arrays value.....";
        }
        else{
            remov(a, size);
        }
        break;

        }
    } while (chose != 5);
    

}