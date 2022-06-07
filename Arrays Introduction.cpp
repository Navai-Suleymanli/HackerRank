#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arrayNumber;
    cin >> arrayNumber;
    int arr[arrayNumber];
    for (int i = 0; i < arrayNumber; i++)
        cin >> arr[i];
    for (int i = arrayNumber - 1; i >= 0; i--)
        cout << arr[i] << " ";
    return 0;


}
