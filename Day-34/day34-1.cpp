#include<iostream>
using namespace std;

// class vinit{
//     public:
//         int data;
//         vinit *next;
// };

//     // There is problem if we have 20 elements We have to Creat total 20 Diffrent Pointers
//     // ===========================================================================================

// int main(){

//     vinit *head = NULL;
//     head = new vinit();     
    
//     head->data = 25;
//     head->next = NULL;

//     vinit *n2 = new vinit();
    
//     n2->data = 98;
//     n2->next = NULL;
//     head->next = n2;

//     vinit *n3 = new vinit();

//     n3->data = 75;
//     n3->next = NULL;
//     n2->next = n3;

//     vinit *n4 = new vinit();

//     n4->data = 19;
//     n4->next = NULL;
//     n3->next = n4;

    
// }



#include <iostream>
using namespace std;

// Define the structure for a node
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// class LinkedList {
// public:
//     Node* head;

//     LinkedList() {
//         head = nullptr;
//     }

//     // Insert at the beginning
//     void insertAtBeginning(int data) {
//         Node* newNode = new Node(data);
//         newNode->next = head;
//         head = newNode;
//     }

//     // Insert at the end
//     void insertAtEnd(int data) {
//         Node* newNode = new Node(data);
//         if (head == nullptr) {
//             head = newNode;
//             return;
//         }
//         Node* temp = head;
//         while (temp->next != nullptr) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }

//     // Insert at any position
//     void insertAtPosition(int data, int position) {
//         if (position == 1) {
//             insertAtBeginning(data);
//             return;
//         }
//         Node* newNode = new Node(data);
//         Node* temp = head;
//         for (int i = 1; i < position - 1 && temp != nullptr; ++i) {
//             temp = temp->next;
//         }
//         if (temp == nullptr) {
//             cout << "Position out of range!" << endl;
//             return;
//         }
//         newNode->next = temp->next;
//         temp->next = newNode;
//     }

//     // Print the list
//     void printList() {
//         if (head == nullptr) {
//             cout << "The list is empty." << endl;
//             return;
//         }
//         Node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "nullptr" << endl;
//     }

//     // Update a node at a given position
//     void update(int position, int newData) {
//         Node* temp = head;
//         for (int i = 1; i < position && temp != nullptr; ++i) {
//             temp = temp->next;
//         }
//         if (temp != nullptr) {
//             temp->data = newData;
//         } else {
//             cout << "Position out of range!" << endl;
//         }
//     }

//     // Delete from the beginning
//     void deleteFromBeginning() {
//         if (head == nullptr) {
//             cout << "List is empty, nothing to delete." << endl;
//             return;
//         }
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//     }

//     // Delete from the end
//     void deleteFromEnd() {
//         if (head == nullptr) {
//             cout << "List is empty, nothing to delete." << endl;
//             return;
//         }
//         if (head->next == nullptr) {
//             delete head;
//             head = nullptr;
//             return;
//         }
//         Node* temp = head;
//         while (temp->next != nullptr && temp->next->next != nullptr) {
//             temp = temp->next;
//         }
//         delete temp->next;
//         temp->next = nullptr;
//     }

//     // Delete from any position
//     void deleteAtPosition(int position) {
//         if (head == nullptr) {
//             cout << "List is empty, nothing to delete." << endl;
//             return;
//         }
//         if (position == 1) {
//             deleteFromBeginning();
//             return;
//         }
//         Node* temp = head;
//         for (int i = 1; i < position - 1 && temp != nullptr; ++i) {
//             temp = temp->next;
//         }
//         if (temp == nullptr || temp->next == nullptr) {
//             cout << "Position out of range!" << endl;
//             return;
//         }
//         Node* toDelete = temp->next;
//         temp->next = temp->next->next;
//         delete toDelete;
//     }
// };

// int main() {
//     LinkedList list;
//     int choice, data, position;

//     do {
//         // Display menu
//         cout << "\n1. Insert at Beginning";
//         cout << "\n2. Insert at End";
//         cout << "\n3. Insert at Position";
//         cout << "\n4. Print List";
//         cout << "\n5. Update Node";
//         cout << "\n6. Delete from Beginning";
//         cout << "\n7. Delete from End";
//         cout << "\n8. Delete from Position";
//         cout << "\n9. Exit";
//         cout << "\nEnter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1: // Insert at beginning
//                 cout << "Enter data to insert: ";
//                 cin >> data;
//                 list.insertAtBeginning(data);
//                 break;

//             case 2: // Insert at end
//                 cout << "Enter data to insert: ";
//                 cin >> data;
//                 list.insertAtEnd(data);
//                 break;

//             case 3: // Insert at position
//                 cout << "Enter data to insert: ";
//                 cin >> data;
//                 cout << "Enter position: ";
//                 cin >> position;
//                 list.insertAtPosition(data, position);
//                 break;

//             case 4: // Print list
//                 cout << "Linked List: ";
//                 list.printList();
//                 break;

//             case 5: // Update a node
//                 cout << "Enter position to update: ";
//                 cin >> position;
//                 cout << "Enter new data: ";
//                 cin >> data;
//                 list.update(position, data);
//                 break;

//             case 6: // Delete from beginning
//                 list.deleteFromBeginning();
//                 break;

//             case 7: // Delete from end
//                 list.deleteFromEnd();
//                 break;

//             case 8: // Delete from position
//                 cout << "Enter position to delete: ";
//                 cin >> position;
//                 list.deleteAtPosition(position);
//                 break;

//             case 9: // Exit
//                 cout << "Exiting the program!" << endl;
//                 break;

//             default:
//                 cout << "Invalid choice! Please try again." << endl;
//         }
//     } while (choice != 9);

//     return 0;
// }