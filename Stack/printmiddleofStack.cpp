#include<iostream>
#include<stack>
using namespace std;
void printmiddle(stack<int>&s,int size,int count){
   
    if(count==size/2){
        cout<<s.top();
        return;
    }
    count++;
    
    s.pop();
    printmiddle(s,size,count);
    
   
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int n=s.size();
    printmiddle(s,n,0);

    return 0;
}