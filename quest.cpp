#include <iostream>
using namespace std;

int main(){
    int n=234;
    int sum=0;
    int pdt=1;
    while(n!=0){
       int rem=n%10;
       pdt=pdt*rem;
       sum=sum+rem;
       n=n/10;
    }
    cout<<pdt-sum;
}