#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
    cin>>N;
    int A[N],B[N];
    for (int i=0;i<N;i++){
        cin>>A[i];
    }
    for (int i=0;i<N;i++){
        cin>>B[i];
    }
    
    int max=0;
    for(int i=1;i<N;i++){
        if(A[max]<A[i]){
            max=i;
        }
        if(A[max]==A[i]){
            if(B[max]<B[i]){
                max=i;
            }
        }
    }
	cout<<(max+1);
	cout<<endl;

	return 0;
}
