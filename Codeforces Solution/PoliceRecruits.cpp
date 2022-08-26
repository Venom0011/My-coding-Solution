#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pol=0;
    int crime=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>0){
            pol+=x;
        }
        else{
            if(pol<1){
                ++crime;
            }
            else{
                --pol;
            }
        }
    }
    cout<<crime;
    return 0;
}