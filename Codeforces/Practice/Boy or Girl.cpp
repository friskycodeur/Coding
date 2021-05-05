#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    set <char> converted_string(begin(s),end(s));
    if(converted_string.size()%2!=0){
        cout<< "IGNORE HIM!"<<endl;
    }
    else{
        cout<<  "CHAT WITH HER!"<<endl;
    }
}