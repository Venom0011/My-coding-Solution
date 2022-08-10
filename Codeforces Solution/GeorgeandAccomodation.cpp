#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int  n;
    cin>>n;
    int c=0;
    for(int i=0;i<n;i++){
        int s,t;
        cin>>s>>t;
        if((t-s)>=2){
        if(s!=t){
            c++;
        }
        }
        
    }
    cout<<c;
    return 0;
}