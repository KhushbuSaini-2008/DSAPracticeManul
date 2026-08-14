#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
// void solve(vector<int>&arr ,vector<int>&ans){
//     int n=arr.size();
//     stack<int>s;
//     s.push(-1);
//     for(int i=n-1;i>=0;i--){
//         int element=arr[i];
//         while(s.top()>element){
//             s.pop();
//         }
//         ans.push_back(s.top());
//         s.push(element);
//     }
// }
void solve(vector<int>&arr,vector<int>&ans){
    int n=arr.size();
    ans.push_back(-1);
    for(int i=0;i<n;i++){
        int min = arr[i];
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                break;
            }
        }
        cout<<min<<endl;

    }
}
int main(){
    vector<int>arr;
    arr.push_back(50);
    arr.push_back(40);
    arr.push_back(30);
    arr.push_back(20);
    arr.push_back(10);
    vector<int>ans;
    solve(arr,ans);
    for(int i:ans){
        cout<<i<<" "<<endl;
    }

    return 0;
}