#include<iostream>
using namespace std;

class vinit{
    public:
        int data;
        vinit *next;
};

    // use the same Current Pointer for another new node
    // =======================================================+

int main(){
    vinit *head = new vinit();

    head->data = 25;
    head->next = NULL;

    vinit *curent = new vinit();
    curent->data = 98;
    curent->next = NULL;
    head->next = curent;

    curent = new vinit();
    curent->data = 75;
    curent->next = NULL;
    head->next->next = curent;

    curent = new vinit();
    curent->data = 19;
    curent->next = NULL;
    head->next->next->next = curent;

    vinit *ptr = NULL;
    ptr=head;
    while (ptr != NULL)
    {
        cout << ptr->data <<" " <<ptr->next<< endl;
        ptr = ptr-> next;
    }
}