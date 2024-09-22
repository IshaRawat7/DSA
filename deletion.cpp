#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertionattail(node* &head ,int val){
    node* n = new node(val);
    if(head== NULL){
        head = n;
        return;

    }
    node* temp = head;
    while(temp->next!= NULL){
        temp=temp->next;
    }
    temp->next =n;
}
void display(node*head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->next<<"->";
        temp=temp->next;
    
    }
    cout<<"NULL"<<endl;
}
void insertathead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head =n;

}
void deletionend(node* &head,int val){

    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        deleteAthead(head);
        return;
    }
    node* temp = head;
   
    while(temp->next->data !=val){
 temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next= temp->next->next;
      
    delete todelete;
}
void deleteAthead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}
int main(){
  node* head = NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    insertAttail(head,5);
    display(head);
    //deletionend(head,3);
    deleteAthead(head,4);
    display(head);
return 0;
}