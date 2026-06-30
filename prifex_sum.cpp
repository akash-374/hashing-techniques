#include<iostream>
using namespace std;
#define size 100
int prefix(int l,int h,int array[100]){
	if(l==0){
		return array[h];
	}
	else{
		return array[h]-array[l-1];
	}
}	
int main(){
	int arr[100] = {12,13,20,30,28,50};
	int ref[size];
	for(int i=0;i<6;i++){
		int sum=0;
		for(int j=0;j<=i;j++){
			sum+=arr[j];
			ref[i]=sum;
		}
	}
	cout<<"array :";
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"reference array :";
	for(int i=0;i<6;i++){
		cout<<ref[i]<<" ";
	}	cout<<endl;
	int low,high;
	cout<<"enter lower index :";
	cin>>low;
	cout<<"enter higher index :";
	cin>>high;
	cout<<"prefix sum :"<<endl;
	cout<<prefix(low,high,ref);
	
}
	


