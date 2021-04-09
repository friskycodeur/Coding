// Difficulty : MEDIUM


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    void swap(long long int &a,long long int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        int cnt=0,min;
        for(long long int i=0;i<N-1;i++){
            min=i;
            for(long long int j=i+1;j<N;j++){
                if(arr[min]>arr[j]){
                min=j;
                }
            }
            swap(arr[min],arr[i]);
            cnt+=abs(i-min);
        }

        // while(i<N && j<N){
        //     if(i==j) j++;
        //     if(arr[i]<=arr[j]) j++;
        //     else if(arr[i]>arr[j]){
        //         swap(arr[i],arr[j]);
        //         i++;
        //         cnt++;
        //     }
        // }
        return cnt;
    }

};


// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;


        for(long long i = 0;i<N;i++){
            cout << A[i] << " ";
        }
        
    }
    
    return 0;
}
  // } Driver Code Ends