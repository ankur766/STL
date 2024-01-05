#include <iostream>
#include <map>
using namespace std;

int main() {
    // Declare an empty map (key-value pairs)
    map<int, string> myMap;

    // insert: Insert key-value pairs
    myMap.insert({1, "apple"});
    myMap.insert({2, "banana"});
    myMap.insert({3, "cherry"});

    // erase: Remove element by key
    myMap.erase(2);

    // find: Find element by key
    auto it = myMap.find(1);
    if (it != myMap.end()) {
        cout << "Found: " << it->second << endl; // Outputs: Found: apple
    }

    // count: Count occurrences of a specific key
    int count = myMap.count(3);
    cout << "Occurrences of key 3: " << count << endl; // Outputs: Occurrences of key 3: 1

    // size: Get the number of elements in the map
    cout << "Size of map: " << myMap.size() << endl;

    // empty: Check if the map is empty
    cout << "Is map empty? " << (myMap.empty() ? "Yes" : "No") << endl;

    // clear: Remove all elements from the map
    myMap.clear();

    return 0;
}
