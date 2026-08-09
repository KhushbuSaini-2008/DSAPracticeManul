#include<iostream>
#include<string>

using namespace std;
void printpermutation(string &s,int i){
    
    if(i>=s.length()){
        cout<<s<<endl;
        return  ;
    }
    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);
        printpermutation(s,i+1);
        swap(s[i],s[j]);
    }
   
}
int main(){
    string s="abcd";
    string ans="";
printpermutation(s,0);


  
    return 0;
}