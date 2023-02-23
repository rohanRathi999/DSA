#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of elements in series ";
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n-2;i++){
       int nextNum= a+b;
       cout<<nextNum<<"  ";
       a=b;
       b=nextNum;
    }
}