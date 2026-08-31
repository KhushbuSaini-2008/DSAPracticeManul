#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&s,int value){
    if(s.empty()){
        s.push(value);
        return ;
    }
  
    int topelement=s.top();
    s.pop();
    insertatbottom(s,value);
    s.push(topelement);

}
void print(stack<int>&s){
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}
void reverse(stack<int>&s){
    if(s.empty()){
        return ;
    }
    int topE=s.top();
    s.pop();
    reverse(s);
    insertatbottom(s,topE);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
  reverse(s);
   print(s);

    return 0;
}
