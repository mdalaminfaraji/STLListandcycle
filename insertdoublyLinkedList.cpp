#include<bits\stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertAtHead(Node*&head, Node*&tail, int val){
    Node* newNode= new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    Node* tmp=head;
    newNode->next=tmp;
    tmp->prev=newNode;
    head=newNode;
}
void printList(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;

}
void insertAtTail(Node* &head, Node*&tail, int val){
    Node* newNode=new Node(val);
    if(tail==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    Node* tmp=tail;
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void insertAtAnyPosition(Node*&head, Node*&tail, int val, int pos){

    Node* newNode=new Node(val);
    Node* tmp=head;
    // if(head==NULL){
    //     head=NULL;
    //     tail=NULL;
    //     return;
    // }
    for(int i=1; i<pos; i++){
        tmp=tmp->next;
    }
    tmp->next->prev=newNode;
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->prev=tmp;



}
int getSize(Node* head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}
int main()
{
   Node* head=NULL;
   Node* tail=NULL;
   int val, pos;
  
   while(true){
    cin>>pos;
    cin>>val;
    if(val==-1)break;
    if(pos==0){
     insertAtHead(head, tail, val);
    }
    // else if(pos==getSize(head)){
    //       insertAtTail(head, tail, val);
    // }else{
        insertAtAnyPosition(head, tail, val, pos);
    // }

   }
   printList(head);
    return 0;
}
