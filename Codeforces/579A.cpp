#include<bits/stdc++.h>
using namespace std;

int closestMultiple(int n)
{   
    if(2>n) return 2;
    
    n = n + 2/2;
    n = n - (n%2);
    
    return n;
}


int main(){
    int x;cin>>x;
    cout<<closestMultiple(x);
    int temp=x-closestMultiple(x);
    cout<<temp+1<<endl;

}
