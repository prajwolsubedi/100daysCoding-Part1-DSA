#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node (with data)"<<value<<endl;
    }
};


void insertNode(Node* &tail, int element, int d){
    //empty 
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }

    else{
        //non-empty
        Node* curr = tail;
        while(curr->data != element){
            curr = curr -> next;
        }

        //element found
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}


void print(Node* tail){
    Node* temp = tail;

    //empty list
    if(tail == NULL){
        cout<<"List is Empty"<<endl;
        return ;
    }
    do{
        cout<<tail->data<<" ";
        tail = tail -> next;
    }while(tail != temp);
    cout<<endl;
}

void deleteNode(Node* &tail, int value){
    //empty list
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return ;
    }
    else{
        //not-empty

        Node* prev = tail;
        Node* curr = prev -> next;  

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;

        //1 Node 
        if(curr == prev){
            tail = NULL;
        }

        //greater than or equal to 2 Node
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

bool isCircularList(Node* head){
    //empty
    if(head == NULL){
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }

    if(temp == head){
        return true;
    }

    return false;
}

bool  detectLoop(Node* head){
    if(head == NULL)
    return false;

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp != NULL){
        //There is cycle.
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;

}

int main() {
    Node* tail = NULL;
    return 0;
}