#include<iostream>
using namespace std;

class rnw{
    private:
    string surname;
    int grid;

    public:
    void set(string surname ,int grid)
    {
        this->surname = surname;
        this->grid = grid;
    }
    void get()
    {
        cout << surname << " - " << grid << endl;
    }
};

int main(){

   rnw vinit;

   vinit.set("marthak", 9600);

   vinit.get();
    cout << endl;

    rnw rutvik;

    rutvik.set("bhtti", 4562);

    rutvik.get();

    rnw aum;
    cout << endl;

    aum.set("maheta",7896);

    aum.get();

}