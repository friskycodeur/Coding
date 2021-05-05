// Simple answer
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k,x;
    cin>>n>>k;      
    x=(n+1)/2;
    if(k>x) cout<<2*(k-x)<<endl;
    else cout<<((2*k)-1)<<endl;  
}












// // Using Vectors

// #include<bits/stdc++.h>
// using namespace std;

// void printVector(vector<long long> v){
//     for(long long i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }



// int main(){
//     long long n,k;
//     cin>>n>>k;
//     vector<long long> numbers;
//     for(long long i=1;i<=n;i=i+2){
//         numbers.push_back(i);
//     }
//     if(k<=n/2){
//         cout<<numbers[k-1]<<endl;
//     }
//     numbers.clear();
//     for(long long i=2;i<=n;i=i+2){
//         numbers.push_back(i);
//     }
//     // printVector(numbers);
//     if(k>n/2){
//         cout<<numbers[n-k-1]<<endl;
//     }
//     numbers.clear();
// }






// Using array ::

// #include<bits/stdc++.h>
// using namespace std;
 
// // void printArray(int a[] ,int n){
// //     for(int i=0;i<n;i++){
// //         cout<<a[i]<<" ";
// //     }
// //     cout<<endl;
// // }
 
 
 
// int main(){
//     long long n,k;
//     cin>>n>>k;
//     long long odd[n/2];
//     long long even[n/2];
//     long long j=1;
//     for(long long i=2;i<=n;i=i+2){
//         even[j]=i;
//         j++;
//     }
//     j=1;
//     for(long long i=1;i<=n;i=i+2){
//         odd[j]=i;
//         j++;
//     }
//     if(k<=n/2){
//         cout<<odd[k]<<endl;
//     }
//     else{
//         k=k-(n/2);
//         if(n%2!=0) k--;
//         cout<<even[k]<<endl;
//     }
 
// }