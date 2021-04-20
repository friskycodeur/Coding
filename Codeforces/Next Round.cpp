#include <iostream>
#include <cstdlib>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum=0,n,k;
    cin>>n>>k;
    int points[n];
    for(int i=0;i<n;i++){
        cin>>points[i];
    }
    for(int i=0;i<n;i++){
        if(points[i]>=points[k-1] && points[i]!=0){
            sum+=1;
        }
    }
    cout<<sum;
    return 0;
}