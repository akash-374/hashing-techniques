#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4  };
	int n=4;
    int maxlen=0;
	int k;
	cout<<"enter key :";
    cin>>k;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum=sum+arr[j];
			if(sum==k){
			   int len=j-i+1;
			   maxlen=max(maxlen,len);
		    }
		}
    }
	cout<<"maxlength of subarray :"<<maxlen;
	return 0;
}
