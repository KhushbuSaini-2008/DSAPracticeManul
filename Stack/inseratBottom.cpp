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
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
   insertatbottom(s,80);
   print(s);

    return 0;
}
