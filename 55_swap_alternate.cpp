#include<iostream>
using namespace std;
int swap_alternate(int a[],int n){
    for(int i=0;i<n;i+=2){
        if(((n%2)!=0)&&(i==(n-1))){
            break;
        }
        swap(a[i],a[i+1]);
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
    swap_alternate(a,n);
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
    return 0;
}