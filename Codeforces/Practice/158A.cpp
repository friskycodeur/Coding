#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    vector<int> score;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        score.push_back(x);
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(score[i]>0 && score[i]>=score[k-1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}