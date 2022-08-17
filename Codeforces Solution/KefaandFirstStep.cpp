#include <bits/stdc++.h>
using namespace std;

//https://youtu.be/NIvRFj7I88Q

int main() {
    int c=1,max=0;
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]<= arr[i+1]){
            c++;
        }
        else{
            c=1;
        }
        if(c>max){
            max=c;
        }
    }
    cout<<max;
    return 0;
}