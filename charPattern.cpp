#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char start;
    int i=1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            start='A'+ n-1;
            cout<<start;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}