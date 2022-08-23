#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int f=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="Tetrahedron"){
            f=f+4;
        }
        if(s=="Cube"){
            f=f+6;
        }
        if(s=="Octahedron"){
            f=f+8;
        }
        if(s=="Dodecahedron"){
            f=f+12;
        }
        if(s=="Icosahedron"){
            f=f+20;
        }
    }
    cout<<f;
    return 0;
}