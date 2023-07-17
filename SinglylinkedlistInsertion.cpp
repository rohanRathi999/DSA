#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtposition(Node* &head, int pos, int data){
    Node* temp = new Node(data);
    Node* current = head;
    if(pos==1){
        insertAtHead(head,data);
        return;
    }
    int cnt = 1;
    while(cnt<pos-1){
        current = current->next;
        cnt++;
    }
    temp->next = current->next;
    current->next = temp;
}

void printList(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }
}

int main(){
    Node* start = new Node(0);
    Node* head = start;
    Node* tail = start;
    start->next = new Node(1);
    start->next->next = new Node(2);
    start->next->next->next = new Node(3);
    insertAtposition(head,1,6);
    printList(head);
}