#include <iostream>
#include <list>
using namespace std;

int main() {
    // Declare an empty list
    list<int> myList;

    // push_back: Add elements to the end of the list
    myList.push_back(5);
    myList.push_back(3);
    myList.push_back(7);

    // push_front: Add elements to the front of the list
    myList.push_front(9);
    myList.push_front(11);

    // pop_back: Remove element from the end
    myList.pop_back();

    // pop_front: Remove element from the front
    myList.pop_front();

    // front: Access the first element
    cout << "First element: " << myList.front() << endl;

    // back: Access the last element
    cout << "Last element: " << myList.back() << endl;

    // size: Get the number of elements
    cout << "Size of the list: " << myList.size() << endl;

    // empty: Check if the list is empty
    cout << "Is list empty? " << (myList.empty() ? "Yes" : "No") << endl;

    // clear: Remove all elements
    myList.clear();

    // insert: Insert elements at a specific position
    myList.insert(myList.begin(), 10);
    myList.insert(myList.end(), 3, 20);

    // erase: Remove elements at a specific position or range
    myList.erase(myList.begin()++);
    myList.erase(myList.begin(), myList.begin()++);

    // splice: Move elements from one list to another or within the same list
    list<int> anotherList = {1, 2, 3};
    myList.splice(myList.begin(), anotherList);

    // remove: Remove all elements equal to a specific value
    myList.remove(20);

    // reverse: Reverse the order of elements in the list
    myList.reverse();

    // sort: Sort the elements in the list
    myList.sort();

    return 0;
}
