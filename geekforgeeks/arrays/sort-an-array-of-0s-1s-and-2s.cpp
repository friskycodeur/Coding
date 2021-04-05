// Difficulty level : Easy

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(a[i]==0) cnt1++;
            if(a[i]==1) cnt2++;
        }
        for(int i=0;i<n;i++){
            if(cnt1>0){
                a[i]=0;
                cnt1--;
            }
            else if(cnt2>0){
                a[i]=1;
                cnt2--;
            }
            else{
                a[i]=2;
            }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends