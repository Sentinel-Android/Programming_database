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
            if(arr[j]+arr[k]==s){
                vector<int>temp;
                temp.push_back(min(arr[j],arr[k]));
                temp.push_back(max(arr[j],arr[k]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(int l=0;l<ans.size();l++){
        for(int m=0;m<2;m++){
            cout<<ans[l][m]<<" ";
        }
        cout<<endl;
    }
    return 0;
}