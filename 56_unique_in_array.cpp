#include<iostream>
using namespace std;
int unique(int a[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans^=a[i];//a^a=0
    }             //a^0=a
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<unique(a,n);
    return 0;
}