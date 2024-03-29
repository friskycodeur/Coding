// Difficulty : Medium

// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:

    int multiply(int x,vector<int> &res){
        int carry=0;
        for(int i=0;i<res.size();i++){
            int prod=res[i]*x+carry;
            res[i]=prod%10;
            carry=prod/10;
        }
        while(carry){
            res.push_back(carry%10);
            carry=carry/10;
        }
    }
    vector<int> factorial(int N){
        vector<int> res;
        res.push_back(1);
        for(int i=2;i<=N;i++)
            multiply(i,res);
            
            reverse(res.begin(),res.end());
            return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends