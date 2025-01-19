#include<iostream>
using namespace std;
int firstoccurence(int arr[],int n,int key){
    int s=0,e=n-1;
    int m=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[m]==key){
            ans=m;
            e=m-1;
        }
        else if(key>arr[m]){
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}
int lastoccurence(int arr[], int n, int key){
    int s=0,e=n-1;
    int m=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[m]==key){
            ans=m;
            s=m+1;;
        }
        else if(key>arr[m]){
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<firstoccurence(arr,n,key)<<endl;//total no of occurence=(last occurence-first occurence)+1
    cout<<lastoccurence(arr,n,key)<<endl;
    return 0;
}