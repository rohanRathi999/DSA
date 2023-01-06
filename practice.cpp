#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        //first triangle
        int j = 1;
        while(j<=n-i+1){
          cout<<j;
          j++;
        }
        //second triangle
        int start=i-1;
        while(start){
            cout<<"**";
            start--;
        }
        //third triangle
        int last=n-i+1;
        while(last){
            cout<<last;
            last--;
        }
        cout<<endl;
        i++;
    }
    
}



