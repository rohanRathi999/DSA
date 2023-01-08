#include<iostream>
using namespace std;

bool liSearch(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[]={1,3,4,7,5,-7,-9,11,-12};
    int key;
    cout<< "enter the number you want to search :"<<endl;
    cin>>key;
    
    liSearch(arr,10,key);

    if(liSearch){
        cout<<"number is present"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}