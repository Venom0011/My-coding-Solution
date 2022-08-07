// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,n,w,sum;
    cin>>k>>n>>w;
    sum=k*((w*(w+1)))/2;
    if(sum-n<0){
        cout<<0;
    }
    else{
        cout<<sum-n;
    }
    return 0;
}