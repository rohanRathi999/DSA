#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }
};

void insertionAtHead(Node* &head, Node* &tail, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    temp->prev = NULL;
    head = temp;
}

void insertionAtEnd(Node* &head, Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    temp->next = NULL;
    tail = temp;
}

void insertionAtPosition(Node* &head, Node* &end, int pos, int data){
    Node* insertNode = new Node(data);
    Node* temp = head;
    int cnt = 1;
    while(cnt<pos-1){
       temp = temp->next;
       cnt++;
    }
    insertNode->next = temp->next;
    temp->next->prev = insertNode;
    temp->next = insertNode;
    insertNode->prev = temp;
}

void printList(Node* &head, Node* &tail){
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    Node* newnode = new Node(0);
    Node* head = newnode;
    Node* tail = newnode;
    head->next = new Node(10);
    head->next->next = new Node(12);
    insertionAtEnd(head, tail, 1);
    insertionAtEnd(head, tail, 2);
    insertionAtEnd(head, tail, 3);
    insertionAtPosition(head, tail, 3, 4);
    printList(head, tail);
}