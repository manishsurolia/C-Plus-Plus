/*
 * The third kind of iterator is forward iterator.
 *
 * It can only be incremented. It can not be decremented or compared or added
 * with a number.
 *
 * Such iterators are used for forward list. Forward lists are uni-diretional
 * linked list(singly linked list).
 */

#include <iostream>
#include <forward_list>

int main(int argc, char **argv)
{
    std :: forward_list <int> mylist = {10, 30, 20, 40};

    for (std::forward_list <int> :: iterator itr = mylist.begin();
         itr != mylist.end(); itr++) {
        std::cout <<*itr << " ";
    }
    std::cout<<std::endl;

    return 0;
}
