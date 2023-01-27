#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int minIndex=i;

        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j])
            minIndex=j; 
        }
        swap(arr[minIndex],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}