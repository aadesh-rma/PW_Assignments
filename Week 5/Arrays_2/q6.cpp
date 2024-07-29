// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int arr[5] = {24,48,65,48,65};
    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        for (int j = 0; j < 5; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == 1)
        {
            cout << arr[i];
            return 0;
        }
    }
    cout <<"No unique value.";
    return 0;
}