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
void insert_any_position(Node* &head, Node *&tail, int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    Node* tmp=tail;
    tmp->next=newNode;
    newNode->prev=tmp;
    tail=newNode;
}
int getSize(Node* head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}
void reverseDoublyLinkedList(Node* head){
    if(head==NULL){
        return;
    }
    reverseDoublyLinkedList(head->next);
    cout<<head->val<<" ";
}
int checkEqual(Node*head1, Node*head2){
    //    int flag=true;
        if(getSize(head1)==getSize(head2)){
          for( int i=0; i<getSize(head1); i++){
            if(head1->val!=head2->val){
               return 0;
            }
          
          }
         return 1;
        }
        return 0;
}

bool isPalindrome(Node* head){
    Node* tmp=head;
    if(head==NULL){
        return true;
    }
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    while(head!=tmp){
        if(head->val!=tmp->val){
            return false;
        }
        head=head->next;
        tmp=tmp->prev;
    }
    return true;
 
}
void printList(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    Node* head1=NULL;
    Node* tail1=NULL;
    Node* head2=NULL;
    Node* tail2=NULL;
    while (true)
    {
        int n;
        cin>>n;
        if(n==-1)break;
           

           insert_any_position(head1, tail1, n);
    }
    // while (true)
    // {
    //     int n;
    //     cin>>n;
    //     if(n==-1)break;
           

    //        insert_any_position(head2, tail2, n);
    // }
//    int val=checkEqual(head1, head2);
//    if(val==0){
//     cout<<"NO"<<endl;
//    }else{
//     cout<<"YES"<<endl;
//    }
//   reverseDoublyLinkedList(head1);
    if(isPalindrome(head1)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   
    return 0;
}
