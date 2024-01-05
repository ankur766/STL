#include <iostream>
#include <set>
using namespace std;

int main() {
    // Declare an empty set
    set<int> mySet;

    // insert: Insert elements
    mySet.insert(5);
    mySet.insert(3);
    mySet.insert(7);

    // erase: Remove element by value
    mySet.erase(3);

    // find: Find element by value
    auto it = mySet.find(5);
    if (it != mySet.end()) {
        cout << "Found: " << *it << endl; // Outputs: Found: 5
    }

    // count: Count occurrences of a specific value (always 1 or 0 in a set)
    int count = mySet.count(7);
    cout << "Occurrences of value 7: " << count << endl; // Outputs: Occurrences of value 7: 1

    // size: Get the number of elements in the set
    cout << "Size of set: " << mySet.size() << endl;

    // empty: Check if the set is empty
    cout << "Is set empty? " << (mySet.empty() ? "Yes" : "No") << endl;

    // clear: Remove all elements from the set
    mySet.clear();

    return 0;
}
