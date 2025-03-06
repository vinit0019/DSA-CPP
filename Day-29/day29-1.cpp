#include<iostream>
using namespace std;

// Multilevel inheritance
// ===================================

class Bigbox{
    public:
    string name;
    Bigbox(string name) {
        this->name = name;
    }
};

class Midbox : public Bigbox
{   
    

    public:
    int grid;
    Midbox(string name, int grid) : Bigbox(name){
        this->grid = grid;
    }
};

class Smallbox : public Midbox
{
    public:
    int lec_time;

    Smallbox(string name, int grid,int lec_time) : Midbox(name, grid)
    {
        this->lec_time = lec_time;
    }

        void dispaly()
        {
        cout << name << " " 
             << grid << " "
         << lec_time << " "
                    << endl;
    }
};

int main (){

    Smallbox A("vinit",9600,3);
    A.dispaly();

}

