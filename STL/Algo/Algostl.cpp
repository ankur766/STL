#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    // Example vector for demonstration
    vector<int> numbers = {5, 3, 8, 2, 7, 6};

    // sort: Sort elements in ascending order
    sort(numbers.begin(), numbers.end());

    // find: Find a specific value in the vector
    auto it = find(numbers.begin(), numbers.end(), 7);
    if (it != numbers.end()) {
        cout << "Found: " << *it << endl; // Outputs: Found: 7
    }

    // binary_search: Check if an element exists in the sorted vector
    bool found = binary_search(numbers.begin(), numbers.end(), 3);
    cout << "Found using binary_search: " << (found ? "Yes" : "No") << endl; // Outputs: Found using binary_search: Yes

    // reverse: Reverse the elements in the vector
    reverse(numbers.begin(), numbers.end());

    // rotate: Rotate elements in the vector
    rotate(numbers.begin(), numbers.begin() + 3, numbers.end());

    // max_element: Find the maximum element in the vector
    auto max = max_element(numbers.begin(), numbers.end());
    cout << "Max element: " << *max << endl;

    // min_element: Find the minimum element in the vector
    auto min = min_element(numbers.begin(), numbers.end());
    cout << "Min element: " << *min << endl;

    // accumulate: Sum all elements in the vector
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    cout << "Sum of elements: " << sum << endl;

    // transform: Perform an operation on each element and store the result
    vector<int> doubledNumbers;
    transform(numbers.begin(), numbers.end(), back_inserter(doubledNumbers), [](int x) { return x * 2; });

    // for_each: Apply a function to each element in the vector
    for_each(numbers.begin(), numbers.end(), [](int x) { cout << x << " "; }); // Outputs: Elements of 'numbers'

    // copy: Copy elements from one vector to another
    vector<int> copiedNumbers;
    copy(numbers.begin(), numbers.end(), back_inserter(copiedNumbers));

    // fill: Fill vector with a specific value
    fill(numbers.begin(), numbers.end(), 0);

    // unique: Remove consecutive duplicate elements in a sorted vector
    vector<int> sortedWithUnique = {1, 2, 2, 3, 3, 3, 4, 5, 5, 5};
    auto uniqueEnd = unique(sortedWithUnique.begin(), sortedWithUnique.end());
    sortedWithUnique.erase(uniqueEnd, sortedWithUnique.end());

    // merge: Merge two sorted vectors into one sorted vector
    vector<int> first = {1, 3, 5};
    vector<int> second = {2, 4, 6};
    vector<int> merged(first.size() + second.size());
    merge(first.begin(), first.end(), second.begin(), second.end(), merged.begin());

    return 0;
}
