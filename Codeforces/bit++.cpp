#include <iostream>
#include <cstdlib>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x=0;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s=="X++" || s=="++X"){
            x+=1;
        }
        else{
            x-=1;
        }
    }
    cout<<x;
}