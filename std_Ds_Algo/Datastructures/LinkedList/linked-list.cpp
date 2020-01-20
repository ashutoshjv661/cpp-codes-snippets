#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


class Linked
{
    public: 
        int data;
        Linked* next;
};
Linked *head = NULL;
Linked *tail = NULL;
Linked *createNode(int value)
{
    Linked *p = NULL;
    p = new Linked();
    p->data = value;                          
    p->next = NULL;
    return p;
}
Linked* insertFront(Linked* head,Linked* tail,int value){
    Linked* node=createNode(value);
    if(head==NULL){
        head=node;
        tail=node;
        return head;
    }
    node->next=head;
    head=node;
    return head;
}

Linked* insertBack(Linked* head,Linked** tail,int value){
    Linked* node=createNode(value);
    if(head==NULL){
        head=node;
        *tail=node;
        return head;
    }
    (*tail)->next=node;
    *tail=node;
    return head;
}

void deleteFront(Linked** head,Linked** tail){
    if(*head==NULL){
        cout<<"already empty\n";
        return;
    }
    if(*head==*tail){
        cout << "\nremoved data => " << (*head)->data << endl;
        *head = NULL;
        *tail = NULL;
        return;
    }
    Linked* temp=*head;
    *head=(*head)->next;
    cout<<"\nremoved data => "<<(temp)->data<<endl;
    free(temp);
}
void deleteBack(Linked** head,Linked** tail){
    if(*head==NULL){
        cout<<"already empty\n";
        return ;
    }
    if(*head==*tail){
        cout << "\nremoved data => " << (*head)->data << endl;
        *head = NULL;
        *tail = NULL;
        return ;
    }
    Linked *p = *head;
    while(p->next!=*tail){
        p=p->next;
    }
    Linked *temp=*tail;
    cout << "\nremoved data => " << (temp)->data << endl;
    p->next=NULL;
    *tail=p;
    free(temp);
}
void printList(Linked* head){
    Linked *p=head;
    if(head==NULL){
        cout<<"Empty List\n";
        return;
    }
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;//number of nodes
    for(int i=0;i<n;i++){
        int x;//enter the node
        cin>>x;
        head=insertBack(head,&tail,x);
    }
    printList(head);
    deleteBack(&head,&tail);
    deleteBack(&head,&tail);
    deleteBack(&head,&tail);
    deleteBack(&head,&tail);
    deleteBack(&head,&tail);
    return 0;
}
//you can also keep a prev pointer to implement a double ended linked list
//It is easy to do but I am bored of typing