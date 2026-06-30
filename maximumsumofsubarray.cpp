#include<iostream>
#define size 10
using namespace std;
int main(){
	int msum=0;
	int arr[size]={12,13,23,13,54,35,41,23};
	int k;
	cout<<"enter size of the subarray :";
	cin>>k;
	for(int i=0;i<8-k;i++){
		int csum=0;
		for(int j=i;j<i+k;j++){
			csum+=arr[j];
		}
	if(csum>msum){
		msum=csum;
	}	
	}
	cout<<"maximun sum for subarray of given array :"<<msum;
	return 0;	
}
