#include<iostream>
using namespace std;
class stack{
    public:
    int *arr;
    int size;
    int top;
    stack(int capacity){
        arr=new int[capacity];
        size=capacity;
        top=-1;
    }
    void push(int value){
        if(top==size-1){
            cout<<"overflow";
        }
        else{
            top++;
            arr[top]=value;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"underflow";
        }
        else{
            arr[top]=-1;
            top--;
        }
    }
    int getSize(){
        return top+1;
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
           return false;
        }
    }
    int gettop(){
        if(top==-1){
            cout<<"no element";
        
        }
        else{
        return arr[top];
        }
    }
};

int main(){
    stack s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // s.push(50);
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    cout<<s.getSize();
    cout<<s.isEmpty();
    cout<<s.gettop();



}