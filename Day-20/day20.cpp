#include<iostream>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}

int sub(int c,int d)
{
    return c-d;
}

int mul(int e,int f)
{
    return e*f;
}

int divi(int g,int h)
{
    return g/h;
}

int modu(int i,int j)
{
    return i%j;
}

int main(){

    int vinit,a,b,c,d,e,f,g,h,i,j;
    do
    {
        cout << "Press 1 for + :" << endl;
        cout << "Press 2 for - :" << endl;
        cout << "Press 3 for * :" << endl;
        cout << "Press 4 for / :" << endl;
        cout << "Press 5 for % :" << endl;
        cout << "Press 0 for Exit :" << endl;

        cin >> vinit;

        switch(vinit)
        {
        case 1 :
        cout << "Enter first value=> ";
        cin >> a;
        cout << "Enter second value=> ";
        cin >> b;
            
        cout << "sum is : " << sum(a,b) << endl << endl;
        break;

        case 2 :
        cout << "Enter first value=> ";
        cin >> c;
        cout << "Enter second value=> ";
        cin >> d;
         
        cout << "c-d is : " << sub(c,d) << endl << endl;
        break;

        case 3 :
        cout << "Enter first value=> ";
        cin >> e;
        cout << "Enter second value=> ";
        cin >> f;

        cout << "multiplication : " << mul(e,f) << endl << endl;
        break;

        case 4 :
        cout << "Enter first value=> ";
        cin >> g;
        cout << "Enter second value=> ";
        cin >> h;

        cout << "division : " << divi(g,h) << endl << endl;
        break;

        case 5 :
        cout << "Enter first value=> ";
        cin >> i;
        cout << "Enter second value=> ";
        cin >> j;

        cout << "modulo : " << modu(i,j) << endl << endl;
        break;

        default :
        cout << "Thank you..................";
        break;
        }

    } while (vinit != 0);
    



}