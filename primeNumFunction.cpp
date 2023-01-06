#include<iostream>
using namespace std;

bool isPrime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"It is a prime no."<<endl;
    }
    else{
        cout<<"It is not a prime no."<<endl;
    }
}