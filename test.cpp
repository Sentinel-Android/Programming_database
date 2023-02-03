#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
    int prod=0;
    int count=0;
    for(int i=0;i<t;i++){
        cin>>arr[i];
        for(int j=1;j<arr[i];j++){
            for(int p=j+1;p<arr[i]-(j+1);p++){
                int w=arr[i]-(j+p);
                if((j^2)+(p^2)==(w^2)){
                    count=1;
                    if(j*p*w>=prod){
                        prod=j*p*w;
                    }
                }
            }
        }
    }
    if(count==1){
        cout<<prod;
    }
    else{
        cout<<-1;
    return 0;
    }
}