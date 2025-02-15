/* Detection and removal of cycle from linked List.

Removing cycle using flyods algorithm.*/

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

void insertAtTail(node* &head,int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next =n;
}


bool detectCycle(node* &head){
    node* slow= head;
    node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow){
          return true;
        }
    }
    return false;

}

void removeCycle(node* &head){
    node* slow = head;
    node* fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow!=fast);
    fast = head;
    while(slow->next != fast->next){
        slow= slow->next;
        fast = fast->next;
    }
    slow->next=NULL;
    
}

void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}
void makeCycle(node* &head, int pos){
    node* temp= head;
    node* startNode;
    int count = 1;
    while(temp->next!=NULL){
        if(count == pos){
            startNode = temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next = startNode;
}

void display(node* &head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<"\n";
}
int main(){
    node* head = NULL;
insertAtTail(head,1);
insertAtTail(head,2);
insertAtTail(head,3);
insertAtTail(head,4);
insertAtTail(head,5);
insertAtTail(head,6);
insertAtTail(head,7);
insertAtTail(head,8);
insertAtTail(head,9);
insertAtTail(head,10);
display(head);
makeCycle(head,5);
cout<<detectCycle(head)<<endl;
removeCycle(head);
cout<<detectCycle(head)<<endl;
display(head);

return 0;
}