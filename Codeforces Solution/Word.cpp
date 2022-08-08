// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int u=0,l=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>=97 && s[i]<=122){
            l++;
        }
        if(s[i]>=65 && s[i]<=90){
            u++;
        }
    }
    //cout<<l<<u;
    for(int i=0;i<s.length();i++){
        if(l>u){
            if(s[i]>=65 && s[i]<=90){
            s[i]=s[i]+32;
            }
        }
        if(u>l){
            if(s[i]>=97 && s[i]<=122){
                s[i]=s[i]-32;
            }
                
        }
        if(l==u){
            if(s[i]>=65 && s[i]<=90){
                s[i]=s[i]+32;
            }
        }
    }
    cout<<s;
    return 0;
}