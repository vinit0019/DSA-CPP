#include<iostream>
using namespace std;

class A {
private:
    int number;
    string name;

public:
    A() {
        cout << "Enter number => ";
        cin >> number;

        cout << "Enter name => ";
        cin >> name;
        cout << endl;
    }
    void rnw() {
        cout << "number => " << number << endl;  
        cout << "name => " << name << endl;      
    }
};

int main() {
    A obj;  
    obj.rnw();  
}
