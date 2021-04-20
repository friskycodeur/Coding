#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    long long int n;
    long long int s=1;
    cin >> n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        s=s*a[i]%(1000000000+7);
    }
    cout<<s<<endl;
}