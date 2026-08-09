#include<iostream>
#include<vector>
using namespace std;
void merge(int s,int e,vector<int>&arr,int mid){
    int leftarraylength=mid-s+1;
    int rightarraylength=e-mid;
    int *arr1=new int[leftarraylength];
    int *arr2=new int[rightarraylength];
    int mainarrayindex=s;

    for(int i=0;i<leftarraylength;i++){
        arr1[i]=arr[mainarrayindex];
        mainarrayindex++;
    }
    mainarrayindex=mid+1;
    for(int j=0;j<rightarraylength;j++){
        arr2[j]=arr[mainarrayindex];
        mainarrayindex++;
    }
    int i=0;
    int j=0;
    mainarrayindex=s;
    while(i<leftarraylength&& j<rightarraylength){
        if(arr1[i]<arr2[j]){
            arr[mainarrayindex]=arr1[i];
            i++;
            mainarrayindex++;
        }
else{
    arr[mainarrayindex]=arr2[j];
    j++;
    mainarrayindex++;

}
    }
    while(i<leftarraylength){
        arr[mainarrayindex]=arr1[i];
        i++;
        mainarrayindex++;
    }
    while(j<rightarraylength){
        arr[mainarrayindex]=arr2[j];
        j++;
        mainarrayindex++;
    }
    delete []arr1;
    delete []arr2;

}

void mergeSort(int start,int end,vector<int>&arr){
if(start>=end){
    return ;
}
int mid=(start+end)>>1;

mergeSort(start,mid,arr);
mergeSort(mid+1,end,arr);
int s=start;
int e=end;
merge(s,e,arr,mid);
}

int main(){
    vector<int>arr={1,3,5,7,9,8,6,4,2,10};
    int start=0;
    int size=arr.size();
    int end=size-1;
    cout<<"start sorting";
    mergeSort(start,end,arr);

    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}