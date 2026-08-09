#include<iostream>
using namespace std;
bool issafe(char maze[][3],int row,int col,int destX,int destY,int srcX,int srcY,string output,bool visited[][3],int newX,int newY){
if((newX>=0&& newX<=row) && (newY>=0&& newY<=col)&& visited[newX][newY]==false && maze[newX][newY]=='.'){
    return true;
}
else{
    return false;
}
}

void solve(char maze[][3],int row,int col,int destX,int destY,int srcX,int srcY,string output,bool visited[][3]){
    if(srcX==destX && srcY==destY){
        cout<<output<<endl;
        return ;
    }
int newX=0;
int newY=0;
// up
newX=srcX-1;
newY=srcY;
if(issafe(maze,row,col,destX,destY,srcX,srcY,output,visited,newX,newY)){
    visited[newX][newY]=true;
    solve(maze,row,col,destX,destY,newX,newY,output+'U',visited);
    visited[newX][newY]=false;
}
// down
newX=srcX+1;
newY=srcY;
if(issafe(maze,row,col,destX,destY,srcX,srcY,output,visited,newX,newY)){
    visited[newX][newY]=true;
    solve(maze,row,col,destX,destY,newX,newY,output+'D',visited);
    visited[newX][newY]=false;
}
//left
newX=srcX;
newY=srcY-1;
if(issafe(maze,row,col,destX,destY,srcX,srcY,output,visited,newX,newY)){
    visited[newX][newY]=true;
    solve(maze,row,col,destX,destY,newX,newY,output+'L',visited);
    visited[newX][newY]=false;
}
newX=srcX;
newY=srcY+1;
if(issafe(maze,row,col,destX,destY,srcX,srcY,output,visited,newX,newY)){
    visited[newX][newY]=true;
    solve(maze,row,col,destX,destY,newX,newY,output+'R',visited);
    visited[newX][newY]=false;
}
}
int main(){
    char maze[3][3]={
        {'.','.','.'},
        {'.','-','-'},
        {'.','.','.'}
    };
    int row=3;
    int col=3;
    
    int destX=row-1;
    int destY =col-1;
    int srcX=0;
    int srcY=0;
    string output="";
    bool visited[3][3]={
        {true,false,false},
        {false,false,false},
        {false,false,false}
    };
    solve(maze,row,col,destX,destY,srcX,srcY,output,visited);
    return 0;
}