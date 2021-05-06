/*
 * The second kind of iterator is bidirectional.
 *
 * We can increment it, decrement it, but we can't add a value to the iterator.
 *
 * itr++ // allowed
 * itr-- //allowed
 *
 * itr = itr + 5;   // Not allowed.
 * itr = itr - 5;   // Not allowed.
 * if (itr1 < itr2) // Not allowed.
 *
 * Below are the containers, which provide bi-directional container.
 * List, set/multiset, map/multimap.
 *
 * Linked list, we know that the nodes of a list is scattered in memory. So, we
 * can;t do above operations.
 * set/multiset, map/multimap, are created with the use of binary tree.
 * so again, above mentioned operations are not allowed on iterators.
 */

#include <iostream>
#include <set>

int main(int argc, char **argv)
{
    std :: set <int> myset = {10, 30, 20, 40};

    for (std::set <int> :: iterator itr = myset.begin(); itr != myset.end();
         itr++) {
        std::cout <<*itr << " ";
    }
    std::cout<<std::endl;

    return 0;
}
