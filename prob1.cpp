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
void insertAtAnyPosition(Node* &head, Node* &tail, int val){
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

void sortAscendingOrderLinkedList(Node*head){
    for(Node*i=head; i->next!=NULL; i=i->next){
        for(Node*j=i->next; j!=NULL; j=j->next){
          if(i->val> j->val){
            swap( i->val, j->val);
          }
        }
    }
}
void removeDuplicate(Node*head){
    if(head==NULL) {
        printLinkList(head);
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL){
        if(tmp->val==tmp->next->val){
            tmp->next=tmp->next->next;
        }
        if(tmp->next==NULL) break;
        else if(tmp->val!=tmp->next->val){
            tmp=tmp->next;
        }
    }

    printLinkList(head);

}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while(true){
        int n;
        cin>>n;
        if(n==-1)break;
       insertAtAnyPosition(head, tail, n);
    }
    
    printLinkList(head);
    sortAscendingOrderLinkedList(head);
    printLinkList(head);
     removeDuplicate(head);

   
    return 0;
}
