#include<iostream>
using namespace std;

    int top = -1;
    int n = 5;
    int stack[5];
    
    void push(){

    int val;

    if (top == n-1)
    {
        cout << "overflow" << endl;
    }
    else
    {
        cout << "Enter the value => ";
        cin >> val;
        top++;
        stack[top] = val;
    }
}

    void pop(){
        if (top == -1)
        {
        cout << "stake is empty" << endl;
        }
        else
        {
            cout << stack[top] << endl;
            top--;
        }
    }
    

    void peek(){
        if (top == -1)
        {
            cout << "stack is empty";
        }
        else
        {
            cout << stack[top] << endl;
        }
    }

    void dispaly(){
        if (top == -1)
        {
            cout << "empty" << endl;
        }
        else
        {
            for (int i = top; i >=0; i--)
            {
                cout << stack[i] << " " << endl;
            }

        }
    }


int main(){

    push();
    push();

    dispaly();

    cout << "pop => ";
    pop();
    

    dispaly();

    push();
    push();
    push();


    dispaly();

    cout << "peak is => ";
    peek();

}
