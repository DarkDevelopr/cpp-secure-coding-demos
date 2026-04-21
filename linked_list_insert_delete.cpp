
// Add linked list with insertAtHead and safe memory deletion

#include<iostream>
#include<vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtHead(Node** head, int val) {
    Node* newone = new Node(val);
    if (*head == nullptr) {
        *head = newone;
        return;
    }
    newone->next = *head;
    *head = newone;
}

void deleteNodes(Node** head) {
    while (*head != nullptr) {
        Node* next = (*head)->next;
        delete(*head);
        *head = next;
    }
}

int main() {
    Node* head = new Node(1);
    Node* s1 = new Node(2);

    head->next = s1;

    Node* s2 = new Node(3);

    s1->next = s2;

    insertAtHead(&head, 22);

    printList(head);

    cout << endl << "After";

    deleteNodes(&head);
    printList(head);

    return 0;
}