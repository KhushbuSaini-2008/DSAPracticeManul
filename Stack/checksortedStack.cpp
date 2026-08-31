#include<iostream>
#include<stack>
using namespace std;
bool solve(stack<int>&s,int prev){
    if(s.empty()){
        return true;
    }
    int next=s.top();
    if(next<prev){
        return false;
    }
    else{
        s.pop();
        prev=next;
        return solve(s,prev);
    }

}
void print(stack<int>&s){
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}
int main(){
    stack<int>s;
    s.push(70);
    s.push(60);
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);
    int prev=-1;
    cout<<solve(s,prev);
  
  

    return 0;
}
