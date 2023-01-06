#include<iostream>
using namespace std;

int factorial(int n){
    int i;
    int fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr (int n, int r){
    int num=factorial(n);
    int den=factorial(n-r)*factorial(r);
    int ans=num/den;
    return ans;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"answer "<<nCr(n,r)<<endl;
}