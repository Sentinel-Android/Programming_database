#include<iostream>
using namespace std;
bool search(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    bool found=search(a,n,key);
    if(found){
        cout<<"Key is present";
    }
    else{
        cout<<"Key is not present";
    }
    return 0;
}