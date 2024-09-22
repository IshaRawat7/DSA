/*Reverse K node linked list*/
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next =NULL;
    }
};

void insertAttail(node* &head,int val){
    node*n = new node(val);

    if(head == NULL){
        head=n;
        return;

    }
    node* temp = head;
    while(temp->next != NULL){
        temp =temp->next;
    }
    temp->next = n;

}
void display(node* head){
    node*temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reversek(node* &head, int k){
node* prevptr = NULL;
node* currentptr = head;
node* nextptr;
int count =0;
while(currentptr!=NULL && count<k){
    nextptr= currentptr->next;
    currentptr->next = prevptr;
    prevptr = currentptr;
    currentptr= nextptr;
    count++;
}
if(nextptr != NULL){
 head->next = reversek(nextptr,k);
}
return prevptr;

}

void insertathead(node* &head,int val){
    node* n = new node(val);
    n->next =head;
    head=n;
}
bool search(node* head,int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main(){
    node* head = NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    insertAttail(head,5);
    insertAttail(head,6);

    display(head);
    int k = 3;
    node* newhead = reversek(head,k);
    display(newhead);
     

return 0;
}