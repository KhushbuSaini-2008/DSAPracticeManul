#include<iostream>
#include<vector>
using namespace std;
void quickSort(vector<int>& arr, int low, int high) {
        if(low>=high){
            return ;
        }
        int pivot=high;
        int i=low-1;
        int j=low;
        while(j<pivot){
            if(arr[j]<arr[pivot]){
                i++;
                swap(arr[j],arr[i]);
                
        }
        j++;
        }
        i++;
        swap(arr[i],arr[pivot]);
        quickSort(arr,low,i-1);
        quickSort(arr,i+1,high);
        
    }
int main(){
    vector<int>arr={5,4,3,2,1};
    int start=0;
    int end=4;
    cout<<"start"<<endl;
    quickSort(arr,start,end);
   for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}