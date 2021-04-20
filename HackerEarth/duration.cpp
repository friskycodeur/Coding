#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n,sh,sm,eh,em,diff;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>sh>>sm>>eh>>em;
        diff=((eh*60+em)-(sh*60+sm));
        cout<< diff/60<<" "<< diff%60<<endl;
    }
}