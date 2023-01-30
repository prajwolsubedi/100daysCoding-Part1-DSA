#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;

    //construtor 
    Node(int value){
        this->data = value;
        this->prev = NULL;
        this->next = NULL;
    }
};

//traverse
void print(Node *head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data<<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

//length of the linked list.
int getLength(Node *head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void insertAtHead(Node* &head, int value){
    Node *temp = new Node (value);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}


void insertAtTail(Node* &tail, int value){
    Node *temp = new Node (value);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

int main(){
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    // print(head);
    // cout<<getLength(head)<<endl;

    insertAtHead(head,11);
    insertAtTail(tail,99);
    print(head);

}