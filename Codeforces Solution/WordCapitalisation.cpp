#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.length()>1){
    if(s[0]>=97 && s[0]<=122){
        s[0]=s[0]-32;
    }
    }
    if(s.length()==1){
        if(s[0]>=97 && s[0]<=122){
        s[0]=s[0]-32;
        }
    }
    cout<<s;
    
    return 0;
}