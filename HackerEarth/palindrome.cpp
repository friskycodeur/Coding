#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,s_inverse;
    cin >> s;
    s_inverse=s;
    reverse(s_inverse.begin(),s_inverse.end());
    if(s==s_inverse){
        cout << "YES" << endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}