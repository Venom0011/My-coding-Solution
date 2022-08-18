#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1] = {0};
    int p,q;
    int level;
    cin>>p;
    //take theinput of levels and assign the value=1 to all levels the 0th position will always be zero  
    for(int i=0;i<p;i++){
        cin>>level;
        arr[level]=1;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>level;
        arr[level]=1;
    }
    //if the array starting from 1 to n has 0 in it so  it means that level is not cleared so print oh my keyboard.
    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}