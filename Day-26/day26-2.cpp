#include<iostream>
using namespace std;

class rnw{
    private:
    string name;
    int grid;

    public:

    void set(string name,int grid)
    {
        this->name = name;
        this->grid = grid;
    }
    void get()
    {
        cout << name << " - " << grid << endl;
    }
};

int main(){
    cout << endl;
    rnw student[6];

    student[0].set("vinit",9600);
    student[1].set("rutvik",9685);
    student[2].set("aum",8500);
    student[3].set("prins",9632);
    student[4].set("kartavay",9845);
    student[5].set("krishna",1349);

    for (int i = 0; i <=5; i++)
    {
       student[i].get();
    }
  cout << endl;
}