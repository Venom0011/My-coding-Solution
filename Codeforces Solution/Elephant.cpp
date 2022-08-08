// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,sum=0;
    cin>>n;
    while(n){
        if(n==1||n==2||n==3||n==4||n==5){
            sum+=1;
            cout<<sum;
            return 0;
        }
        n=n-5;
        sum++;
    }
    return 0;
}