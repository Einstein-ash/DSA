#include <iostream>
using namespace std;

int Pivot(int arr[], int size) {
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e) 
    {

        if (arr[0] < arr[mid])  {  s = mid + 1; }

        else if(arr[mid]< arr[mid-1]){ return mid;}

        else   { e = mid;}

        mid = s + (e - s) / 2;
    }

    return mid;

}

int main() {
    int arr[8] = { 7, 9,10,11,12, 1, 2, 3 };
    cout << "The pivot index is: " << Pivot(arr, 8);

    return 0;
}
