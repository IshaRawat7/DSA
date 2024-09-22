/*Merging two sorted linked list.*/

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data= val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n =new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node* &head,int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;

    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next = n;
}

void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
}

 node* merge(node* &head1, node* &head2){
    node* p1 = head1;
    node * p2 = head2;
    node* dnode = new node(-1);
    node* p3 = dnode;
    while(p1!=NULL && p2!=NULL){
        if(p1->data < p2->data){
            p3->next = p1;
            p1= p1->next;
        }
        else{
            p3->next = p2;
            p2=p2->next;
        }
        p3 = p3->next;
    }
    while(p1!=NULL){
        p3->next = p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next = p2;
        p2=p2->next;
        p3= p3->next;
    }
    return dnode->next;
 }

node* mergeRecursive(node* &head1,node* &head2){
    if(head1==NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }

    node* res;
    if(head1->data <head2->data){
     res = head1;
     res->next = mergeRecursive(head1->next,head2);
    }
    else{
        res = head2;
        res->next=mergeRecursive(head1,head2->next);
    }
    return res;
}

int main(){
node* head1 = NULL;
node* head2 = NULL;
insertAtTail(head1,1);
insertAtTail(head1,4);
insertAtTail(head1,5);
insertAtTail(head1,7);
insertAtTail(head2,2);
insertAtTail(head2,3);
insertAtTail(head2,6);
display(head1);
display(head2);

//node* newHead = merge(head1,head2);
node* newHead = mergeRecursive(head1,head2);
display(newHead);
return 0;
}