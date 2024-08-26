#include<iostream>
using namespace std;
int reversearr(int a[],int n){
    int m;
    for(int i=0;i<=(n/2)-1;i++){
        m=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=m;
    }
    for(int j=0;j<n;j++){
        cout<<a[j];
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reversearr(a,n);
    return 0;
}