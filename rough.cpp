#include <iostream>
using namespace std;

int largest(int arr[],int n){
    int i;
    int max = arr[0];   
    for( i= 1 ;i< n;i++)  
        if(arr[i]>max)  
            max = arr[i];  
    return max;  
} 

int main() {
	// your code goes here
	int n;
	cin>>n;
	    int arr1[n],arr2[n],arr3[n];
	    for(int i=0;i<n;i++){
	        cin>>arr1[i]>>arr2[i];
	    }
	     int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            
            sum1=sum1+arr1[i];
            sum2=sum2+arr2[i];
          
        for(int j=i;j<n;j++){
	        if(sum1>sum2){
	            arr3[j]=sum1-sum2;
	        }
	        else{
	            arr3[j]=sum2-sum1;
	        }
	     }
	      if(sum1>sum2){
               cout<<1<<" ";
               break;
           }
           else{
               cout<<2<<" ";
               break;
           }
      }
      cout<<arr3<<" ";
	  // int num=largest(arr3,n);
	  // cout<<num<<endl;
	return 0;
}