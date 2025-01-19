#include<iostream>
using namespace std;
struct Node{
    int temperature;
    int waiting_days;
    Node*next;
    Node(int x){
        temperature=x;
        waiting_days=0;
        next=NULL;
    }
};
Node*calculate_waiting_days(int temperatures[],int n){
    Node*head=new Node(temperatures[0]);
    Node*ptr=head;
    //head->temperature=temperatures[0];
    //head->waiting_days=0;
    //head->next=NULL;
    for(int j=1;j<n;j++){
        ptr->next=new Node(temperatures[j]);
        ptr=ptr->next;
        //ptr->temperature=temperatures[j];
        //ptr->waiting_days=0;
        //ptr->next=NULL;
    }
    ptr=head;
    while(ptr!=NULL){
        Node*ptr1=ptr;
        while((ptr1!=NULL)&&(ptr->temperature<=ptr1->temperature)){
            ptr->waiting_days++;
            ptr1=ptr1->next;
        }
        ptr=ptr->next;
    }
    return head;
}
void print_results(Node*head){
    Node*ptr=head;
    while(ptr!=NULL){
        cout<<"Temperature:"<<ptr->temperature<<", Waiting Days:"<<ptr->waiting_days<<endl;
        ptr=ptr->next;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    Node*head=calculate_waiting_days(arr1,n);
    print_results(head);
    return 0;
}