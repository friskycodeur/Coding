// Difficulty : Medium

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int mx=-1,fin=m;
	    for(int i=0;i<n;i++){
	        int j=0,cnt=0;
	        while(arr[i][j]!=1 && j<m){
	            cnt++;
	            j++;
	        }
	        if(fin>cnt){
	            fin=cnt;
	            mx=i;
	        }
	    }
	    return mx;
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends