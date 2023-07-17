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

void deletionAtFirst(Node* &head){
    Node* temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    temp->next = NULL;
    delete temp;
}

void deletionAtEnd(Node* &head){
    Node* temp = head;
    while(temp->next->next !=NULL){
        temp = temp->next;
    }
    temp->next->prev = NULL;
    delete temp->next;
    temp ->next = NULL;
}

void deletionAtPosition(Node* &head, Node* &tail, int pos){
    if(pos==1){
        deletionAtFirst(head);
        return;
    }
    Node* current = head->next;
    Node* last = head;
    int cnt = 1;
    while(cnt<pos-1){
        current = current->next;
        last = last->next;
        cnt++;
    }
    if(current->next == NULL){
        current->prev = NULL;
        last->next = NULL;
        delete current;
        return;
    }
    last->next = current->next;
    current->next->prev = last;
    current->next = NULL;
    current->prev = NULL;
    delete current;
}

void printList(Node* &head, Node* &tail){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    Node* demo = new Node(1);
    Node* head = demo;
    Node* tail = demo;
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    deletionAtFirst(head);
    deletionAtEnd(head);
    deletionAtPosition(head,tail,4);
    printList(head,tail);
}