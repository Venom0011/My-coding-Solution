#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    string b;
    cin>>a>>b;
    string s="";
    for(int i=a.length()-1;i>=0;i--){
        if(a[i]=='0' && b[i]=='1'){
            s='1'+s;
        }
        if(a[i]=='0' && b[i]=='0'){
            s='0'+s;
        }
        if(a[i]=='1' && b[i]=='1'){
            s='0'+s;
        }
        if(a[i]=='1' && b[i]=='0'){
            s='1'+s;
        }
    }
    cout<<s;
    
    return 0;
}