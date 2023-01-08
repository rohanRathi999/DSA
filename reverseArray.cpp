#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout <<arr[i]<<" ";
    }
}

int main(){

    int arr[]={2,3,6,9,7};

    reverse(arr,5);
    cout<<"reversed array : ";
    printArray(arr,5);

}