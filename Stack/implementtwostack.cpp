#include<iostream>
using namespace std;
class stack1{
    public:
    int *arr;
    int size;
    int top;
    stack1(int capacity){
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
class stack2{
      public:
    int *arr;
    int size;
    int top;
    stack2(int capacity){
        arr=new int[capacity];
        size=capacity;
        top=size-1;
    }
    void push(int value){
        if(top==-1){
            cout<<"overflow";
        }
        else{
            top--;
            arr[top]=value;
        }
    }
    void pop(){
        if(top==size-1){
            cout<<"underflow";
        }
        else{
            arr[top]=-1;
            top++;
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
    stack1 s(2);
    stack2 s(2);
    

    return 0;

}