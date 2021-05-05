/*
 * A vector is a dynamic array, that grows in one direction.
 *
 * Note : Vector is a dynamically allocated contiguous array in memory.
 * None of other containers provide contiguous data in memory.
 * Means, if I point a pointer to the fisrt element of the vector I can just
 * simply increment the pointer and access all the data like we do in C.
 *
 * Vector elements can be accessed randomly. The syntax is same as an array.
 * vec[2] <-- element at index 2.
 * vec.at[2] <-- element at index 2, but has the range check. always use this.
 *
 *
 * Since the containers have common API's, you may expect that there some
 * inheritance and polimorphism involved, which will bring some performance
 * panelty of abstraction. Actually not. STL is very efficient. All the
 * penelties of abstraction has been optimized out. It is as good as a well
 * crafted C Program. This is a very big reason, we should use STL.
 *
 * Properties of vector:
 *
 * 1. Fast insert/remove at the end: O(1)
 * 2. Slow insert/remove at the begining or in the middle: O(n)
 * 3. Slow search: O(n)
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char **argv)
{
    std::vector <int> vec = {2, 7, 3, 1, 5};

    vec.push_back(6);
    vec.push_back(9);
    vec.push_back(8);

    std::vector<int>::iterator itr1 = vec.begin();
    std::vector<int>::iterator itr2 = vec.end();

    /* Below are 2 ways of iterating a vector. First way is preferred */

    for (std::vector <int>::iterator itr = itr1; itr != itr2; itr++) {
        std::cout << *itr<<" ";
    }

    std::cout <<std::endl;

    for (int i=0; i<vec.size(); i++) {
        std::cout << vec[i] <<" ";
    }

    std::cout <<std::endl;

    std::sort(itr1, itr2); // sort does not work on vector directly.
                           // It works on iterators.
    std::cout << "Sorted:" <<std::endl;
    for (std::vector <int>::iterator itr = itr1; itr != itr2; itr++) {
        std::cout << *itr<< " ";
    }

    std::cout << "Vector size: " << vec.size() << std::endl;
    std::cout << "Vector element at index 2: " << vec[2] << std::endl;
    std::cout << "Vector element at index 2: " << vec.at(2) << std::endl;

    std::cout <<"Is container empty : " <<vec.empty() <<std::endl;

    vec.clear();
    std::cout <<"Is container empty : " <<vec.empty() <<std::endl;

    return 0;
}
