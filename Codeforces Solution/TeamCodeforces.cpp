#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int c=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int c1=0;
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        for(int i=0;i<3;i++){
            if(a[i]==1){
                c1++;
               
            }
        }
        if(c1>=2){
            c++;
        }
      
    }
    cout<<c;
    return 0;
}