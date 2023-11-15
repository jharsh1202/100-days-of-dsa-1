#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

*****************************************************************/
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};




Node* reverseLL(Node* current, Node* prev) {
    if (current) {
        Node* next = current->next;
        current->next = prev;
        return reverseLL(next, current);
    }
    return prev;  
}


Node* reverseLinkedList(Node* head) {
    Node* curr = head;
    Node* prev = NULL;
    prev = reverseLL(curr, prev);
    return prev;  
}