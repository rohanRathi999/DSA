#include<iostream>
using namespace std;

int main(){
// int arr[10];
// for(int i=0;i<10;i++){
//     arr[i]=1;
//     cout<<arr[i];
// }
char arr[5]={'a','b','c','d','e'};// this 5 inside arr[] here tells the size of array
cout<<arr[5];// but here, 5 inside arr[] tells the index, which do not exist for an array having size=5 because index=size-1; so atleast arr[6] size 6 can have index 5.dont get confused by size and index of array.
return 0;
}

// calculating the length of aray-
// int arr[]={2,3,4,5,6,7,8};
// int arrayLength = sizeof(arr)/sizeof(int);  
// this sizeof calculate size of array that is length x int size = 7 x 4=28
// so to calculate lenth, divide it with size of int that is 4, so length=28/4=7
// cout<< arrayLength;
// return 0;
// 