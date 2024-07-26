//WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.

#include <iostream>
using namespace std;

int main() {
    // Prompt the user to enter 5 elements of the array
    cout << "Enter 5 elements of the array:" << endl;
    int arr[5];

    // Read the elements into the array
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }

    int missingNumber = 0;
    bool isFound = false;

    // Find the smallest missing positive element
    for (int i = 0; i < 5; ++i) {
        if (arr[i] != missingNumber) {
            cout << missingNumber << endl;
            isFound = true;
            break;
        } else {
            missingNumber++;
        }
    }

    if (!isFound) {
        cout << missingNumber << endl;
    }

    return 0;
}
