#include<bits/stdc++.h>
using namespace std;
void findMaxMinDegree(int adjMatrix[][100],int n){
    int maxDegree=INT_MIN;
    int minDegree=INT_MAX;
    for(int i=0;i<n;i++){
        int totalDegree=0;
        for(int j=0;j<n;j++){
            if(adjMatrix[i][j]==1||adjMatrix[j][i]==1){
                totalDegree++;
            }
        }
        if(totalDegree>maxDegree){
            maxDegree=totalDegree;
        }
        if(totalDegree<minDegree){
            minDegree=totalDegree;
        }
    }
    cout<<"Maximum degree: "<<maxDegree<<endl;
    cout<<"Minimum degree: "<<minDegree<<endl;
}

int main(){
    cout<<"Enter the number of nodes: ";
    int n;
    cin>>n;
    int adjMatrix[100][100]={0};
    cout<<"Enter the adjacency matrix (nxn):"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>adjMatrix[i][j];
        }
    }
    findMaxMinDegree(adjMatrix,n);
    return 0;
}