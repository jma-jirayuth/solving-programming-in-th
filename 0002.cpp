#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    int size;
    cin >> size;

    int arr[size];
    for (auto i = 0; i < size; i++)
        cin >> arr[i];

    int *min = min_element(arr, arr + size);
    int *max = max_element(arr, arr + size);

    cout << *min <<  endl << *max;
}