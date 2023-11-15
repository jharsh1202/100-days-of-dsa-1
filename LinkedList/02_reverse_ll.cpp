/****************************************************************

    Following is the class structure of the Node class:

*****************************************************************/
#include <bits/stdc++.h> 
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




Node* reverseLinkedList(Node *head) {
    Node *prev=NULL;
    Node *curr=head;
    Node *nxt=NULL;
    while(curr) {
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;
}