#include<iostream>
using namespace std;
int duplicate(int a[],int n){
    int ans=0;
    for(int j=0;j<n;j++){
        ans^=a[j];//xor of every element is done except for the duplicate element because it will turn 0
    }
    for(int k=1;k<n;k++){
        ans^=k;//only duplicate element will be left as all the others will become 0
    }
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
    cout<<duplicate(a,n);
    return 0;
}