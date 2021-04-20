#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    long int l,r,k,s=0;
    cin>> l>>r>>k;
    for(int i=l;i<=r;i++){
        if(i%k==0){
            s++;
        }
    }
    cout<<s;
}