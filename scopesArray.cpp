#include<iostream>
using namespace std;

void update(int arr[], int size){

    cout<<"inside the function"<<endl;
    arr[1]=6; //we have updated the array in other function but it is also updated in main function, but we have studied that changing value in other function does not affect main function value{call by value}, well in array case here we have provided the address of the value to the update function because of that the actual changes are being done on array not on its copy{call by reference}

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"goint to main function"<<endl;
}
int main(){
    int arr[]={1,2,3};

    update(arr,3);

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
}