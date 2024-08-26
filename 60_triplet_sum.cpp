#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        arr.push_back(value);
    }
    vector<vector<int>>ans;
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            for(int l=k+1;l<n;l++){
               if(arr[j]+arr[k]+arr[l]==s){
                vector<int>temp;
                temp.push_back(arr[j]);
                temp.push_back(arr[k]);
                temp.push_back(arr[l]);
                sort(temp.begin(),temp.end());
                ans.push_back(temp);
                } 
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(int p=0;p<ans.size();p++){
        for(int q=0;q<3;q++){
            cout<<ans[p][q]<<" ";
        }
        cout<<endl;
    }
    return 0;
}