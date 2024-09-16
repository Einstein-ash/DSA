#include <iostream>
#include <map>

using namespace std;

int main() {
    cout << endl;

    map<int, int> mpp;

    int arr[9] = {1, 2, 4, 6, 3, 2, 2, 1, 3};

    for (int i = 0; i < 9; i++) {
        mpp[arr[i]]++;
    }

    for (auto it : mpp) {
        cout << "key  -> " << it.first << " , value -> " << it.second << endl;
    }

    cout << endl << endl;
    return 0;
}
