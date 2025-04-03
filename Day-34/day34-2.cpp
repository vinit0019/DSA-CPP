// #include<iostream>
// using namespace std;

// class vinit{
//     public:
//         int data;
//         vinit *next;
// };

//     use the same Current Pointer for another new node
//     =======================================================
//     int count,position;

// int main(){
//     vinit *head = new vinit();

//     head->data = 1;
//     head->next = NULL;

//     vinit *curent = new vinit();
//     curent->data = 2;
//     curent->next = NULL;
//     head->next = curent;

//     curent = new vinit();
//     curent->data = 3;
//     curent->next = NULL;
//     head->next->next = curent;

//     curent = new vinit();
//     curent->data = 4;
//     curent->next = NULL;
//     head->next->next->next = curent;

//     curent = new vinit();
//     curent->data = 5;
//     curent->next = NULL;
//     head->next->next->next->next = curent;

//     insert node startting of the list
//     ====================================

//     vinit *val = new vinit();
//     val->data = 100;
//     val->next = head;
//     head = val;

//     insert node ending of the literals
//     =======================================

//     vinit *temp = new vinit();
//     temp->data = 6;
//     temp->next = NULL;

//     vinit *val = new vinit();
//     val = head;
//     val->next->next->next->next->next = temp;

//     vinit *ptr = NULL;
//     ptr=head;
//     while (ptr != NULL)
//     {
//         cout << ptr->data <<" " <<ptr->next<< endl;
//         ptr = ptr-> next;
//         count++;
//     }
//     cout << "count is => " << count << endl;

//     insert node at any position 
//     ==============================

//     vinit *temp = new vinit();
//     temp->data = 700;
//     temp->next = NULL;

//     vinit *val = new vinit();
    
//     cout << "enter position";
//     cin >> position;

//     while (count != position)
//     {
//        cout << " ";
       
//     }
    
//     temp->next = val->next;
//     val->next = temp;

// }

#include<iostream>
using namespace std;

int chose, position, data;

class node {
public:
    int data;
    node *next;

    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class linklist {
public:
    node* head;

    linklist() {
        head = NULL;
    }

    // Insert at the beginning
    void begining(int data) {
        node* newnode = new node(data);
        newnode->next = head;
        head = newnode;
    }

    // Insert at the end
    void end(int data) {
        node* newnode = new node(data);
        if (head == NULL) {
            head = newnode;
        } else {
            node *ptr = head;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = newnode;
        }
    }

    // Insert at any position
    void insertAtPosition(int data, int position) {
        if (position < 1) {
            cout << "Invalid position!" << endl;
            return;
        }

        node* newnode = new node(data);
        if (position == 1) {
            newnode->next = head;
            head = newnode;
            return;
        }

        node* ptr = head;
        for (int i = 1; ptr != NULL && i < position - 1; i++) {
            ptr = ptr->next;
        }

        if (ptr == NULL) {
            cout << "Position out of range!" << endl;
        } else {
            newnode->next = ptr->next;
            ptr->next = newnode;
        }
    }

    // Print the list
    void print() {
        node *ptr = head;
        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main() {
    int chose, data, position;

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

    do {
        
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Insert at Any Position" << endl;
        cout << "4. Read" << endl;
    
        cout << "9. Exit" << endl;
        cin >> chose;

        switch (chose) {
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
            cout << "Enter the position: ";
            cin >> position;
            cout << "Enter your new data => ";
            cin >> data;
            obj1.insertAtPosition(data, position);
            break;

        case 4:
            obj1.print();
            cout << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
            break;
        }

    } while (chose != 9);

    return 0;
}