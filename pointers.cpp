#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //int arr[10]={2,3,5};
    // cout<<arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<&arr[1]<<endl;
    // cout<<*arr+2<<" "<<*(arr+2)<<endl;
    // // arr[i] = *(arr+i); OR i[arr] = *(i+arr);
    // cout<<arr[2]<<"="<<2[arr]<<endl;
    // error: arr= arr+1;   it is not assignable
    // int *ptr = &arr[0];
    // cout<<ptr<<endl;
    // ptr = ptr+1;
    // cout<<ptr<<", value at ptr = "<<*ptr<<endl;
    // int i=5;
    // int &j=i;
    // cout<<j<<endl;

    // creating variable sized array - dynamic memory allocation(heap(badi memory));
    //static memory allocation (stack(choti memory));
    // int n;
    // cin>>n;
    // int *arr = new int[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }

    // IN static allocation, memory erase itself but in dynamic memory allocation, we have to manually erase memory by keyword "delete"
    //single dynamically allocated integer removal
    // int *p = new int;
    // delete p;

    // // dynamically allocated array erase
    // int *arr = new int[50];
    // delete []arr;

    //creating dynamically allocated 2D array

    // int row,col;
    // int **arr = new*[row];
    // for(int i=0;i<row;i++){
    //     arr[i] = new int[col];
    // }

    // now you can take input and output via formal method of nested loop
    //erasing memory of dynamically allocated 2D array
    // for(int i=0;i<row;i++){
    //     delete [] arr[i];
    // }
    // delete []arr;
     
    int arr[26]={0};
    string s = "lelteo";
    for(int i=0;i<26;i++){
        arr[s[i]-'a']++;
    }
    for(int i=0;i<s.length();i++){
        if(arr[s[i]-'a']==1){
            cout<<s[i]<<endl;
            break;
        }
    }
}





