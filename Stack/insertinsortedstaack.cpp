#include<iostream>
#include<stack>
using namespace std;
void  insertsolve(stack<int>&s,int value){
    if(s.empty()){
        s.push(value);
        return ;
    }
    
    if(value<=s.top()){
        s.push(value);
        return;
    }
    else{
        int topE=s.top();
        s.pop();
        insertsolve(s,value);
        s.push(topE);
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
   insertsolve(s,35);
   print(s);
    
  
  

    return 0;
}
