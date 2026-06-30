#include <iostream>
#define SIZE 10
using namespace std;

int main() {
    int arr[5] = {12, 13, 22, 43, 45};
    int hashtable[SIZE];      
    for (int i = 0; i < SIZE; i++) {
        hashtable[i] = -1;
    }
    for (int i = 0; i < 5; i++) {
        int key = arr[i];
        int index = key % SIZE;
        while (hashtable[index] != -1) {
            index = (index + 1) % SIZE;
        }
        hashtable[index] = key;
    }
    cout << "Hash table:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << i << " --> " << hashtable[i] << endl;
    }
    int key;
    cout << "Enter key: ";
    cin >> key;
    int index = key % SIZE;
    bool found = false;
    while (hashtable[index] != -1) {
        if (hashtable[index] == key) {
            cout << "Key found\n";
            found = true;
            break;
        }
        index = (index + 1) % SIZE;
    }
    if (!found) cout << "Key not found\n";
    cout << "Deleting...\n";
    index = key % SIZE;
    while (hashtable[index] != -1) {
        if (hashtable[index] == key) {
            hashtable[index] = -1;
            cout << "Deleted\n";
            break;
        }
        index = (index + 1) % SIZE;
    }

    return 0;
}

