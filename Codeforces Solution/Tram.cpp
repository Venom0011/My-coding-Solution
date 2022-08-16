// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int c=0,m=0,a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        c-=a;
        c+=b;
        if(c>m){
            m=c;
        }
    }
    cout<<m;
    
    return 0;
}