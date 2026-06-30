#include<iostream>
#include<list>
#define size 10

using namespace std;

int main() {
    int n;
    cout<<"enter n :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
    list<int> chainlist[size];

    for(int i = 0; i < n; i++) {
        int index = arr[i] % size;
        chainlist[index].push_back(arr[i]);
    }

    cout << "Separate Chaining:" << endl;

    for(int i = 0; i < size; i++) {
        cout << i << " --> ";

        for(int x : chainlist[i]) {
            cout << x << " --> ";
        }

        cout << "NULL" << endl;
    }

    // Linear Probing
    int linear[size];

    for(int i = 0; i < size; i++) {
        linear[i] = -1;
    }

    for(int i = 0; i < n; i++) {

        int index = arr[i] % size;

        while(linear[index] != -1) {
            index = (index + 1) % size;
        }

        linear[index] = arr[i];
    }

    cout << "\nLinear Probing:" << endl;

    for(int i = 0; i < size; i++) {
        cout << i << " --> " << linear[i] << endl;
    }

    return 0;
}
