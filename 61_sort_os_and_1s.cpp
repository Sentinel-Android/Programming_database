#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];//array of 0s and 1s
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=0,right=n-1;
    while(left<right){
        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<endl;
    }
    return 0;
}