#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;

    //constructor for Node to initialize the data.
    Node(int value){
        this -> data = value;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    //creating new node
    Node *n = new Node(val);

    n -> next = head;
    head = n;
}

void insertAtTail(Node* &head, int val){
    Node *n = new Node(val);

    //Special case -> when head == NULL
    if(head == NULL){
        //nothing is added to linked list
        head = n;
        return;
    }

    //Traversing to last element
    //upto temp next -> NULL
    Node *temp = head;

    while(temp->next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;

}


//printing data of the linked list.
void print(Node* head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp -> data <<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

bool search(Node *head, int key){
    Node *temp = head;
    while(temp != NULL){
        if(temp -> data == key)
        return true;
        temp = temp -> next;
    }
    return false;
}

int main(){

    //Creating a node
    Node *head = NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);

    insertAtHead(head,0);
    insertAtHead(head,-1);

    print(head);

    cout<<search(head,-1)<<endl;
    cout<<search(head,5)<<endl;


   
    return 0; 
}