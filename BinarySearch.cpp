#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2; // or mid can be = start + (end-start)/2
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        // will go to right wala half
        if(arr[mid]<key){
            start = mid +1;
        }
        // left wala part otherwise
        else{
            end = mid -1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int evenArr[6]={1,3,5,6,7,8};
    int oddArr[7]={1,3,4,6,7,8,11};

    int evenIndex = BinarySearch(evenArr,6,7);
    cout<<evenIndex<<endl;

    int oddIndex = BinarySearch(oddArr,7,3);
    cout<<oddIndex<<endl;

}