#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
 int n;
 cin>>n;
 int arr[n],totalsum=0,c=0,sum1=0;
 for(int i=0;i<n;i++){
    cin>>arr[i];
     totalsum+=arr[i];
 }
 int half=totalsum/2;
 sort(arr,arr+n);
 for(int i=n-1;i>=0;i--){
     sum1+=arr[i];
     c++;
     if(sum1>half){
         break;
     }
 }
    cout<<c;
    return 0;
}