#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node*detectCycle(Node*head)
{
    if((head==NULL)||(head->next==NULL)){
        return NULL;
    }
    Node*slow=head;
    Node*fast=head;
    while((fast!=NULL)&&(fast->next!=NULL)){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            //return new Node(1);
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
    //cout<<"chaarvi";
    //return new Node(-1);
    return NULL;
}
int main()
{
    // int n,m;
    // cin>>n>>m;
    // Node*head=new Node(m);
    // Node*ptr=head;
    // for(int i=1;i<n;i++){
    //     int m;
    //     cin>>m;
    //     ptr->next=new Node(m);
    //     ptr=ptr->next;
    // }
    int n;
    cin>>n;
    unordered_map<int,Node*> mp;
    int a;
    cin>>a;
    Node * head=new Node(a);
    Node* ptr=head;
    mp[a]=ptr;
    for(int i=1;i<n-1;i++){
        cin>>a;
        Node* temp=new Node(a);
        ptr->next=temp;
        mp[a]=temp;
        ptr=ptr->next;

    }
    cin>>a;
    ptr->next=mp[a];

    if(detectCycle(head)==NULL){
        cout<<"NULL";
        return 0;
    }
    cout<<detectCycle(head)->data;
    return 0;
}