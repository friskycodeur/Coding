// Difficulty :Easy

// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:

    int sb(int arr[], int n, int x)
    {
        int sum=0;
        int len=n+1;
        int end=0,start=0;
        while(end<n){
            while(sum<=x && end<n)
                sum+=arr[end++];
                
            while(sum>x && start<n){
                if(end-start<len) len=end-start;
                sum-=arr[start++];
            }
                
        }
        return len;
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.sb(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends