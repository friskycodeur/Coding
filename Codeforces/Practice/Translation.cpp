#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    reverse(s.begin(),s.end());
    if(t==s)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}