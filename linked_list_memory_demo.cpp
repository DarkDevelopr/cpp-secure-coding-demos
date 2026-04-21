
// Linked List security concepts demonstrated:
// - Heap allocation with new — memory leak if not deleted
// - Pointer traversal — dangling pointer risk
// - Manual memory management — UAF vulnerability

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

int main() {
    Node* head = new Node(1);
    Node* s1 = new Node(2);
    head->next = s1;
    Node* s2 = new Node(3);
    s1->next = s2;
    printList(head);

    delete s2;
    delete s1;
    delete head;

    return 0;
}