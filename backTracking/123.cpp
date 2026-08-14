#include<iostream>
using namespace std;
bool issafe(int n){
    
    if(n==3){
        return true;
    }
    return false;
}
int main(){
    int n=5;
    if(issafe(n)){
    cout<<"yes";
    }
    else{
    cout<<"no";
    }
    return 0;
}
