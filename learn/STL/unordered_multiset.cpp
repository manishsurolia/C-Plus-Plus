/*
 * unordered multiset is exactly same as unordered set, except that it allows
 * more than one element with the same key.
 *
 * Below is an example.
 */
#include <iostream>
#include <unordered_set>
#include <vector>

int main(int argc, char **argv)
{
    std::unordered_multiset<int> myset;
    std::vector <int> myvector;

    myset.insert(1);
    myset.insert(1);
    myset.insert(5);
    myset.insert(3);
    myset.insert(3);

    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(20);
    myvector.push_back(30);
    myvector.push_back(40);

    // Print the set initially
    for (std::unordered_multiset <int> :: iterator itr = myset.begin();
         itr != myset.end(); itr++) {
        std::cout<<*itr<<" ";
    }
    std::cout<<std::endl;

    // Insert vector and print the set
    myset.insert(myvector.begin(), myvector.end());
    for (std::unordered_multiset <int> :: iterator itr = myset.begin();
         itr != myset.end(); itr++) {
        std::cout<<*itr<<" ";
    }
    std::cout<<std::endl;

    // Find element and print
    std::unordered_multiset <int> :: iterator itr = myset.find(5);
    if (itr != myset.end()) {
        std::cout<<"Value found in set for 5 : "<<*itr;
    }
    std::cout<<std::endl;

    std::cout<<"load factor = "<<myset.load_factor()<< std::endl;
    std::cout<<"bucket count = "<<myset.bucket_count()<< std::endl;

    return 0;
}
