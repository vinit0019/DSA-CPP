#include<iostream>
using namespace std;


class Room
    {
    public:
        string lec;
        int age;
    };

int main(){    

    Room vinit;
    vinit.age = 21;
    vinit.lec = "Lecture 24";

    Room rutvik;
    rutvik.age = 71;
    rutvik.lec = "Lecture 41";

    Room kartavya;
    kartavya.age = 18;
    kartavya.lec = "Lecture 30";

    Room aum;
    aum.age = 19;
    aum.lec = "lecture 96";

    cout << "vinit => "  << vinit.age ;
    cout << vinit.lec << " " << endl;

    cout << "===========================" << endl;

    cout << "rutvik => " << rutvik.age << "  ";
    cout << rutvik.lec << " " << endl;

    cout << "===========================" << endl;

    cout << "kartavya =>" << kartavya.age << "  " ;
    cout << kartavya.lec << " " << endl;

    cout << "============================" << endl;

    cout << "aum =>" << aum.age << "  ";
    cout << aum.lec << " " << endl;

    cout << "=============================" << endl;
}
