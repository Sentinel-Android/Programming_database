#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr1[n];//sorted arrays
    int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(arr1[i]==arr2[j]){
    //             cout<<arr1[i]<<endl;
    //             arr2[j]=INT8_MIN;
    //             break;
    //         }
    //     }
    // }
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<endl;
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return 0;
}