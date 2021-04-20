#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int limak,bob,count=0;
    cin>>limak>>bob;
    while(1){
        limak=3*limak;
        bob=2*bob;
        count+=1;
        if(limak>bob){
            break;
        }
    }
    cout<<count<<endl;
}