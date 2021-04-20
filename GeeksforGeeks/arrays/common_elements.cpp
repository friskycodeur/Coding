// Difficulty : easy
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public: 
        int min_ele(int a,int b,int c){
            int temp=min({a,b,c});
            if(temp==a) return 0;
            else if(temp==b) return 1;
            else return 2;
        }
        vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> res;
            int i=0,j=0,k=0;
            int rep=INT_MIN;
            while(i<n1 && j<n2 && k<n3){
                if(A[i]==B[j] && B[j]==C[k]){
                    if(rep!=A[i]){
                        rep=A[i];
                        res.push_back(A[i]);
                    }
                    i++;
                }else{
                    int temp=min_ele(A[i],B[j],C[k]);
                    if(temp==0) i++;
                    if(temp==1) j++;
                    if(temp==2) k++;
                }
            }
            return res;
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends