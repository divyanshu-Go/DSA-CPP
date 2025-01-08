#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4};

    do {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    } while (next_permutation(vec.begin(), vec.end()));


    return 0;
}
