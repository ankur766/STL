#include<iostream>
# include<vector>
 using namespace std;
 int main()
 {
    vector<int> vec;
//  add the element  to the end of the vector
     vec.push_back(5);
     vec.push_back(3);
     vec.push_back(7);
     // remove the elemnt form the end
     vec.pop_back();

     // at: Access elements by index
    cout<< "Element at index 1: " << vec.at(1) << endl;

    // front: Access the first element
    cout << "First element: " << vec.front() << endl;

    // back: Access the last element
    cout << "Last element: " << vec.back() << endl;

    // size: Get the number of elements
    cout << "Size of the vector: " << vec.size() << endl;

    // empty: Check if the vector is empty
    cout << "Is vector empty? " << (vec.empty() ? "Yes" : "No") << endl;

    // clear: Remove all elements
    vec.clear();
    // insert: Insert elements at a specific position
    vec.insert(vec.begin(), 10);

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    vec.insert(vec.end(), 3, 20);

    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    std::cout << std::endl;
    // erase: Remove elements at a specific position or range
    vec.erase(vec.begin() + 1);
    vec.erase(vec.begin(), vec.begin() + 2);

    // reserve: Allocate memory for future elements
    vec.reserve(10);

    // resize: Change the size of the vector
    vec.resize(5);
vector<int> anotherVec = {1, 2, 3};
    vec.swap(anotherVec);

     cout<< "for vec"<<endl;
    for (int i = 0; i < vec.size(); ++i) {
     cout << vec[i] << " ";
    }

   cout << endl<<" for other vec"<<endl;
   
   for (int i = 0; i < anotherVec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // capacity: Get the capacity of the vector
  cout << "Capacity of the vector: " << vec.capacity() << std::endl;

    return 0;
     

 }