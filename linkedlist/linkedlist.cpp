#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        this->data = value;
        this->next = NULL;
    }

};

void insertAtHead(Node* &head, int value){
    //To change in original linked list we take reference of head.
    //first create new node;
    Node *n = new Node(value);
    n -> next = head;
    head = n;
}  

void insertAtTail(Node* &head, int value){
    //We have to change head so we take the reference of head.

    //if head == null i.e linked list is empty
    if(head == NULL){
        insertAtHead(head,value);
        return ;
    }

    //create a new node
    Node *n = new Node(value);
    

    //traverse to the last node 
    Node *temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    //Add new node in the last node where temp -> next == NULL.
    temp -> next = n;
}

void insertAtPosition(Node* &head, int position, int value){
    //We might have to change head so we take the reference value of head

    if(position == 1){
        insertAtHead(head,value);
        return;
    }

    Node *temp = head;
    int count = 1;
    Node *n = new Node(value); 
    while(count < position-1){
        temp = temp -> next;
        count++;
    }
    n -> next = temp -> next;
    temp -> next = n;

}


void display(Node* head){
    //We don't have to change head so we take the copy of head.
    Node *temp = head;
    while(temp != NULL){
        cout<<temp -> data<<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

bool search(Node *head,int key){
    //We don't have to change head so we take the copy of head.
    Node *temp = head;
    while(temp != 0){
        if(temp -> data == key)
        return true;

        temp = temp -> next;
    }
    return false;
}


void deleteAtHead (Node* &head){
    Node* todelete = head;
    head = head -> next;

    delete todelete;
}

//deletiion by value.
void deletion(Node* &head, int val){
    //if linked list is empty
    if(head == NULL){
        return;
    }

    //if only one node is present.
    if(head -> next == NULL){
        deleteAtHead(head);
        return;
    }

    Node *temp = head;
    //We stop in the front of the node to be deleted.
    while(temp -> next -> data != val){
        temp = temp -> next;
    }
    Node *todelte = temp->next;
    //We skip the node to be deleted here;
    temp->next = temp->next->next;
    delete todelte;
}

//Delete by position
// void deleteNode (int position, Node* &head){

// }

int main(){
    Node *head = NULL;
    insertAtHead(head,2);
    insertAtHead(head,1);

    insertAtTail(head,3);

    insertAtPosition(head,4,4);

    deletion(head,4);
    // deleteAtHead(head);
    display(head);


    return 0; 
}