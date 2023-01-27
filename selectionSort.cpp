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
    for(int i=0;i<n-1;i++){ // assume that first index have min element, now traverse the complete array with another loop starting from the next index of the minIndex to check whether there is any index having number lesser than minindex value, now least value element will be at first index now for next index, proceed the same method till n-1 because last element will be the greatest no need to check that.
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