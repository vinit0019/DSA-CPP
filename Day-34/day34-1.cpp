#include<iostream>
using namespace std;

class vinit{
    public:
        int data;
        vinit *next;
};

    // There is problem if we have 20 elements We have to Creat total 20 Diffrent Pointers
    // ===========================================================================================

int main(){

    vinit *head = NULL;
    head = new vinit();     
    
    head->data = 25;
    head->next = NULL;

    vinit *n2 = new vinit();
    
    n2->data = 98;
    n2->next = NULL;
    head->next = n2;

    vinit *n3 = new vinit();

    n3->data = 75;
    n3->next = NULL;
    n2->next = n3;

    vinit *n4 = new vinit();

    n4->data = 19;
    n4->next = NULL;
    n3->next = n4;

    
}