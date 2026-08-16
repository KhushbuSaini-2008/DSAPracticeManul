#include<iostream>
using namepace std;
int solve(string s,int index){
        int n=s.length();
        int j=index+1;
        int i=index;
        int rotatekaans=0;
        if(j>n){
            return 0;
        }
        swap(s[i],s[j]);
        rotatekaans=solve(s,i+1);
        return rotatekaans;
        
    }
int main(){
    string s="abc";
    int ans=solve(s,0);
    cout<<ans;
    return 0;
}