#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Passing the vector from main function to the function given below 
    string longestCommonPrefix(vector<string>& strs) {
       
        sort(strs.begin(),strs.end());
        string s="";
        string a=strs[0];
        string b=strs[strs.size()-1];
        for(int i=0;i<a.length();i++){
                if(a[i]!=b[i])
                    break;
                s=s+a[i];
            
        }
        
        return s;
    }
};