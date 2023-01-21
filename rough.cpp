#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
    cin>>n;
    int A[n],B[n];
    for (int i=0;i<n;i++){
        cin>>A[i];
    }
    for (int i=0;i<n;i++){
        cin>>B[i];
    }
    
    int max=0;
    for(int i=1;i<n;i++){
        if(A[max]<A[i]){
            max=i;
        }
        if(A[max]==A[i]){
            if(B[max]<B[i]){
                max=i;
            }
        }
    }
	cout<<(max+1)<<endl;

	return 0;
}