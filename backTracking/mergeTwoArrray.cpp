#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>arr1,vector<int>arr2,int size1,int size2,vector<int>&output){
    int i=0;
    int j=0;
    
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            output.push_back(arr1[i]);
            i++;
        }
        else{
            output.push_back(arr2[j]);
            j++;
        }
    }
    while(i<size1){
        output.push_back(arr1[i]);
        i++;
    }
    while(j<size2){
        output.push_back(arr2[j]);
        j++;
    }

}

int main(){
    vector<int>arr1={1,3,5,7,9};
    vector<int>arr2={2,4,6,8,10};
    vector<int>output;
  
    merge(arr1,arr2,5,5,output);
    for(int i: output){
        cout<<i;
    }


    return 0;
}