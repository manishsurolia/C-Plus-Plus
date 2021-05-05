/*
 * multiset is exactly same as set, except that it accepts multiple entries with
 * the same value.
 *
 * All other properties are same as set.
 */
#include <iostream>
#include <set>

int main(int argc, char **argv)
{
    std::multiset<int> myset;

    myset.insert(3);
    myset.insert(5);
    myset.insert(1);
    myset.insert(9);
    myset.insert(3);
    myset.insert(5);

    myset.erase(1);

    for (std::multiset <int>::iterator itr = myset.begin(); itr != myset.end();
         itr++) {
        std::cout<<*itr<<" ";
    }

    myset.clear();

    for (std::multiset <int>::iterator itr = myset.begin(); itr != myset.end();
         itr++) {
        std::cout<<*itr<<" ";
    }

    std::cout<<std::endl;
    return 0;
}
