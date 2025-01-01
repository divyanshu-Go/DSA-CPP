#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Vectors are dynamic array
    vector<int> vec;

    // size & capacity

    vec.push_back(1);
    cout << "size : " << vec.size() << "  capacity : " << vec.capacity() << endl;
    vec.push_back(2);
    cout << "size : " << vec.size() << "  capacity : " << vec.capacity() << endl;
    vec.push_back(3);
    cout << "size : " << vec.size() << "  capacity : " << vec.capacity() << endl;
    vec.push_back(4);
    cout << "size : " << vec.size() << "  capacity : " << vec.capacity() << endl;
    vec.push_back(5);
    cout << "size : " << vec.size() << "  capacity : " << vec.capacity() << endl;

    // traversal
    for (int i : vec)
        cout << i << " ";
    cout << endl;

    // front & back
    cout << "front : " << vec.front() << "  back : " << vec.back() << endl;

    // Initialization
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2(3);
    vector<int> vec3(3, 10);
    vector<int> vec4(vec1);

    vector<vector<int>> vec5 = {vec1, vec2, vec3, vec4};

    for (vector<int> i : vec5)
    {
        for (int j : i)
            cout << j << " ";
        cout << endl;
    }

    // erase-insert-clear-empty
    vec.erase(vec.begin() + 1, vec.begin() + 3);
    for (int i : vec)
        cout << i << " ";
    cout << endl;

    vec.insert(vec.begin() + 1, 200);
    vec.insert(vec.begin() + 2, 300);
    for (int i : vec)
        cout << i << " ";
    cout << endl;

    vec.clear();
    cout << "size : " << vec.size() << endl;

    cout << "Is vector empty : " << vec.empty() << endl;

    // Iterator
    cout << ".begins() ---> Points to 1st element: " << *(vec1.begin()) << endl;
    cout << ".end() ---> Points to nth element: " << *(vec1.end() - 1) << endl;

    // forward traversal
    vector<int> vec6 = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    vector<int>::iterator it;
    for (it = vec6.begin(); it != vec6.end(); it++)
        cout << *(it) << " ";
    cout << "" << endl;

    // backward traversal
    vector<int>::reverse_iterator itr;
    for (itr = vec6.rbegin(); itr != vec6.rend(); itr++)
        cout << *(itr) << " ";
    cout << "" << endl;

    for ( auto it1 = vec6.begin(); it1 != vec6.end(); it1++)   // use "auto" instead of vector<int> :: (iterator / reverse_iterator) it1;
        cout << *(it1) << " ";
    cout << "" << endl;

    return 0;
}