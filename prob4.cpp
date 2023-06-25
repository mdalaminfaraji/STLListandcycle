#include<bits\stdc++.h>
using namespace std;
class Node
{
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
int getSize(Node* head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}
void printList(Node* head){
    cout<<"L-> ";
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;

}
void reverse(Node* head, Node* tail){
    Node* i=head;
    Node* j= tail;
    while(i!=j && i->next!=j){
        swap(i->val, j->val);
            i=i->next;
            j=j->prev;
        

    }
    swap(i->val, j->val);
    cout<<"R-> ";
   while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;


}


void insertAtHead(Node*&head, Node*&tail, int val){
    Node* newNode= new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        // printList(head);
        // reverse(head, tail);
        return;
    }
    Node* tmp=head;
    newNode->next=tmp;
    tmp->prev=newNode;
    head=newNode;
    // printList(head);
    // reverse(head, tail);
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
 
    for(int i=1; i<pos; i++){
        tmp=tmp->next;
    }
    tmp->next->prev=newNode;
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->prev=tmp;
   



}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int val, pos;
        cin>>pos>>val;
            if(getSize(head)<pos){
            cout<<"Invalid"<<endl;
            
           }
          else if(pos==0){
            insertAtHead(head, tail, val);
            printList(head);
            reverse(head, tail);
         }
           else if(pos==getSize(head)){
          insertAtTail(head, tail, val);
           printList(head);
            reverse(head, tail);
       }else{
        insertAtAnyPosition(head, tail, val, pos);
         printList(head);
         reverse(head, tail);
       }
            
        
    }
   
    return 0;
}
