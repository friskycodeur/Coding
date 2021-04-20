#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int a=0,d=0,n;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='A')
            a+=1;
        else
            d+=1;
    }
    if(a>d){
        cout<<"Anton"<<endl;
    }
    else if(d>a){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }


}