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

void deletionAtHead(Node* &head){
    Node* temp = head;
    head = temp->next;
    delete temp;
}

void deletionAtEnd(Node* &head){
    Node* current = head;
    while(current->next->next !=NULL){
        current = current->next;
    }
    current ->next = NULL;
    delete current->next;
}

void deletionAtPosition(Node* &head, int pos){
    Node* current = head->next;
    Node* prev = head;
    if(pos==1){
        deletionAtHead(head);
        return;
    }
    int cnt = 1;
    while(cnt<pos-1){
        prev = prev->next;
        current = current -> next;
        cnt++;
    }
    prev ->next = current ->next;
    delete current;
}

void printList(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
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
    start->next->next->next->next = new Node(4);
    start->next->next->next->next->next = new Node(5);
    deletionAtPosition(head,1);
    printList(head);
}