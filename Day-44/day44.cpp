#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
};

int main(){
    
    node *A = new node();
    node *B = new node();
    node *C = new node();
    node *D = new node();
    node *E = new node();
    node *F = new node();

    A -> data = 1;
    B -> data = 2;
    C -> data = 3;
    D -> data = 4;
    E -> data = 5;
    F -> data = 6;

    A -> left = B;
    A -> right = C;

    B -> left = D;
    B -> right = E;

    C -> left = F;
    C -> right = NULL;

    D -> left = NULL;
    D -> right = NULL;

    E -> left = NULL;
    E -> right = NULL;

    F -> left = NULL;
    F -> right = NULL;

    cout << "Data-A => " << A->data << endl;
    cout << "A-left => " ;

}