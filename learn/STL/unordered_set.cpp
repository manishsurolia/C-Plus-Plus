/*
 * As the name suggests, this set is unordered. Means, data are not in ordered
 * form.
 *
 * Internally an un-ordered container is implemented using a hash table, which
 * is an array of linked list.
 *
 * The array is also called array of buckets.
 *
 * Each bucket holds the starting node of a linked list.
 *
 * Each element is used by a hashed function to calculate its value.
 * and based on that value, that element is inserted at appropriats place in the
 * linke list of one bucket.
 *
 * This biggest advantage of using a hash table is that if you have a fast and
 * effective hash function, the insert/delete/search time is almost O(1).
 *
 * It is fastest among all the containers.
 *
 * You can also enter the vector elements in a unordered map easily.
 *
 * Properties of unordered containers:
 *
 * 1. Fastest search/insert/delete at any place : O(1)
 *      Associative containers take O(log n)
 *      vector, deque takes O(n)
 *      list takes O(1) to insert, O(n) to search
 * 2. Unordered set/multiset : element value can not be changed.
 * 3. Unordered map/multimap : element key can not be changed.
 */
#include <iostream>
#include <unordered_set>
#include <vector>

int main(int argc, char **argv)
{
    std::unordered_set<int> myset;
    std::vector <int> myvector;

    myset.insert(1);
    myset.insert(5);
    myset.insert(3);

    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(30);
    myvector.push_back(40);

    // Print the set initially
    for (std::unordered_set <int> :: iterator itr = myset.begin();
         itr != myset.end(); itr++) {
        std::cout<<*itr<<" ";
    }
    std::cout<<std::endl;

    // Insert vector and print the set
    myset.insert(myvector.begin(), myvector.end());
    for (std::unordered_set <int> :: iterator itr = myset.begin();
         itr != myset.end(); itr++) {
        std::cout<<*itr<<" ";
    }
    std::cout<<std::endl;

    // Find element and print
    std::unordered_set <int> :: iterator itr = myset.find(5);
    if (itr != myset.end()) {
        std::cout<<"Value found in set for 5 : "<<*itr;
    }
    std::cout<<std::endl;

    std::cout<<"load factor = "<<myset.load_factor()<< std::endl;
    std::cout<<"bucket count = "<<myset.bucket_count()<< std::endl;

    return 0;
}
