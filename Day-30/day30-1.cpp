#include<iostream>
using namespace std;

class human{

    public:
    int number;

    void add(int a ,int b)
    {
       cout << a+b << endl;
    }
};
    
class Child : public human
{
    public:
    void add(double a,double b)
    {
        cout << a+b << endl;
    }
};

int main (){

    human vinit;
    vinit.add(5,5);

    Child rutvik;
    rutvik.add(2.3,5.3);
}