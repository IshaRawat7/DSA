/* Put even elements after odd elements in linked  list  */
/* 1     2     3     4      5     6-- NULL*/
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node*  &head, int val){

    node* n = new node(val);
    node* temp = head;
    while(temp->next!=head){
        temp= temp->next;
    }
    temp->next= n;
    n->next = temp;
}

void evenAfterOdd(node* &head){
    node* odd = head;
    node* even = head->next;
    node* evenStart = even;       //time complexity O(n);
    while(odd->next != NULL && even->next != NULL){
        odd->next = even->next;
        odd=odd->next;
        even->next= odd->next;
        even= even->next;
    }
    odd->next = evenStart;
    if(odd->next != NULL){
        even->next = NULL;
    }
}

void display(node* &head){
    node* temp = head;
   
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<"NULL"<<endl;
   
}

int main(){
    node* head = NULL;
    int arr[]= {1,2,3,4,5,6};
    for(int i =0;i<6;i++){
        insertAtTail(head,arr[i]);
    }
    display(head);
    evenAfterOdd(head);
    display(head);

return 0;
}