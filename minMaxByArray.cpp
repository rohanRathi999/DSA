#include<iostream>

using namespace std;

int getMin(int num[], int size){
    int minNum = INT_MAX;
    for(int i=0;i<size;i++){
        // if(num[i]<min){       
        //     minNum=num[i];
        // }
        minNum = min(minNum,num[i]);  
    }
    return minNum;
}
int getMax(int num[], int size){
    int maxNum = INT_MIN;
    for(int i=0;i<size;i++){
        // if(num[i]>maxNum){
        //     maxNum=num[i];
        // }
       maxNum = max(maxNum,num[i]);
    }
    return maxNum;
}

int main(){
    int arr[100];
    int n;
    cout<<"enter size of array "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"min no. in the array "<<getMin(arr,n)<<endl;
    cout<<"max no. in the array "<<getMax(arr,n)<<endl;

}