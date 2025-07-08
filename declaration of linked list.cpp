#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;  // ?? Use NULL instead of nullptr
    }
};

// Function to insert at the tail
void insertAtTail(node* &head, int val) {
    node* n = new node(val);

    if (head == NULL) {
        head = n;
        return;
    }

    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

// Function to display the linked list
void display(node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    node* head = NULL;
    int inp;

    cout << "Enter numbers to insert in list (0 to stop):" << endl;

    while (true) {
        cout << "Enter value: ";
        cin >> inp;
        if (inp == "o")
            break;
        insertAtTail(head, inp);
    }

    cout << "\nFinal Linked List: ";
    display(head);

    return 0;
}

