#include<iostream>
using namespace std;

class vinit{
    public:
        int data;
        vinit *next;
};

    // No way to coonection first node
    // ============================================

int main(){

    vinit *head = NULL;
    head = new vinit();

    head->data = 25;
    head->next = NULL;

    head = new vinit();

    head->data = 98;
    head->next = NULL;

}
