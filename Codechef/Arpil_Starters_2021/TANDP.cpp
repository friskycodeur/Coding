// Author @friskycodeur

#include <bits/stdc++.h>
using namespace std;

// input types

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> v2di;
typedef vector<vector<ll>> v2dll;




// loop
#define forin(i,a,b) for(ll i=a;i<b;i++)
#define forn(i,a) for(ll i=0;i<a;i++)
#define rforn(i,a) for(ll i=a;i>=0;i--)
#define rforsn(i,a,b) for(ll i=a;i>=b;i--)

// for faster processing
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define all(x) x.begin(),x.end()



// array print function
void printArray(int arr[],int size){
    forn(i,size)
        cout<<arr[i]<<" ";

    cout<<endl;
}

// Array input func
void inputArray(int arr[],int size){
    forn(i,size){
        cin>>arr[i];
    }
}


// Solve function
int solve(int n,int m,int x,int y,int a,int b){
    int pcnt=max(n-1-a,m-1-b);
    int tcnt=n-1-x;
    tcnt+=m-1-y;
    if(pcnt>=tcnt) return 1;
    return 0;
}

int main(){
    fast_cin();
    int t;cin>>t;
    while(t--){
        int n,m,x,y,a,b;cin>>n>>m>>x>>y>>a>>b;
        if(solve(n,m,x-1,y-1,a-1,b-1)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}

 