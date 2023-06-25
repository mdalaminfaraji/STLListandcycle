#include<bits\stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insertAtTail(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    Node* tmp=tail;
    tmp->next=newNode;
    tail=newNode;

}
void printLinkList(Node*head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
void reverse(Node*&head, Node*cur){
    if(cur->next==NULL){
        head=cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}
bool ispalindrom(Node* &tmp, Node* &tmp2){
  
    if(tmp==NULL){
        return true;
    }
  while(tmp!=NULL){
           if(tmp->val!=tmp2->val){
               return false;
           }

           tmp=tmp->next;
           tmp2=tmp2->next;
       }
       return true;
}
int main()
{
    Node* head1=NULL;
    Node* tail1=NULL;
    Node* head2=NULL;
    Node* tail2=NULL;
    while(true){
        int n;
        cin>>n;
        if(n==-1)break;
    insertAtTail(head1, tail1, n);
    }
    Node* tmp=head1;
    while(tmp!=NULL){
        insertAtTail(head2, tail2, tmp->val);
        tmp=tmp->next;
    }
   reverse(head2, head2);
  
   Node* tmp2=head2;
   tmp=head1;
   if(ispalindrom(tmp, tmp2)){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
    return 0;
}
