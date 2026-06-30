#include<iostream>
using namespace std;
#define size 10
int main() {
	int arr[10];
	int hashtable[10];
	int n;
	cout<<"enter n :";
	cin>>n;
	for(int i=0;i<n;i++){
		hashtable[i]=-1;
		}
	cout<<"enter number of element :"<<endl;
	for(int i=0;i<n;i++){
		cout<<"enter "<<i<<"th element :";
		cin>>arr[i];
		}
	for(int i=0;i<n;i++){
	  int key=arr[i]%size;
	  hashtable[key]=arr[i];
	  }
	  cout<<"hash table :"<<endl;
   for(int i=0;i<n+1;i++){
       if(hashtable[i]==-1){
         cout<<i<<"--> Null"<<endl;
         }
         else{
       cout<<i<<"-->"<<hashtable[i]<<endl;
         }
   	}  
   	return 0;	
	}