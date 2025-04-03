#include<iostream>
using namespace std;

    int chose,position,data;

class node{
    public:
        int data;
        node *next;

        node(int data){
            this->data = data;
            this->next = NULL;
        }      
};  

class linklist{
    public:
        node* head;

        linklist(){
            head = NULL;
        }

        // insert at the start
        // ================================
        void begining(int data){
            node* newnode = new node(data);
            newnode->next = head;
            head = newnode;
        }

        // insert at the end
        // ================================
        void end(int data){
            node* newnode = new node(data);
             node *ptr = head;
             while (ptr->next != NULL){
                ptr = ptr->next;
             }
             ptr->next = newnode;
             
        }

        // insert any position
        // ====================================
        void Anyposition(int data, int position){
            if(position < 0){
                cout << "Invalid " << endl;
            }
            if(position == 1){
                begining(data);
            }
            node *newnode = new node(data);
            node *temp = head;
            for (int i = 1; i < position - 1 && temp != nullptr; ++i) {
                    temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }

        // read 
        // =======================
           
        void print(){
            node *ptr = head;
            while (ptr != NULL)
            {
                cout << ptr->data << " ";
                ptr = ptr->next;
            }
            cout << endl;
        }

        // update
        // ========================
        void update(int data, int position){

        }

};

  
int main(){

    int chose,data;

    node *n1 = new node(1);
    node *n2 = new node(2);
    node *n3 = new node(3);
    node *n4 = new node(4);

    linklist obj1;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    obj1.head = n1;
    // node *head = n1;

    do
    {   
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Insert at Any Position" << endl;
        cout << "4. read " << endl;
        cout << "5. update" << endl;

        cout << "9. Exit" << endl;
        cin >> chose;

        switch (chose)
        {
        case 1:
            cout << "Enter your new data => ";
            cin >> data;
            obj1.begining(data);
        break;
            
        case 2:
        cout << "Enter your new data => ";
        cin >> data;
            obj1.end(data);
        break;

        case 3:
            cout << "Enter index number =>";
            cin >> position;
            cout << "Enter your new data => ";
            cin >> data;
           obj1.Anyposition(data,position);
        break;

        case 4:
            obj1.print();
            cout << endl;
        break; 
        
        case 5:

        break;

        default:
        cout << "Invalid Please try again." << endl;
            break;
        }
     
    } while (chose != 9);

    
    return 0;
}
