/*
 * A list is a doubly link list. Each node in the list pointing to the next
 * node and also pointing to the previous node.
 *
 * The advantage of a list is that it has fast addition and removal at any place
 * in the list. Not just at the start or at the end of the list.
 *
 * Properties of a list:
 * 1. Fast insert/remove at any place: O(1)
 * 2. Slow search: O(n)
 * 3. No random access, no [] operator.
 *
 * From data accessing prespective, list is quite slower than vector because of
 * locality because vectors store data in contiguous memory. 
 *
 * One function is list is a very good. 'splice'.
 * 
 * With the use of 'splice' function, we can cut a part of list from one list
 * and just add it to the another list. It just takes constant time O(1). Other
 * data structures cant do this.
 */ 

#include <iostream>
#include <list>
#include <algorithm>

int main(int argc, char **argv)
{
    std::list<int> mylist= {5,2,9};
    mylist.push_back(6);
    mylist.push_front(4);

    std::list<int>::iterator itr = find(mylist.begin(), mylist.end(), 2);
    mylist.insert(itr, 8);
    itr++;
    mylist.erase(itr);
    for (std::list<int>::iterator itr1 = mylist.begin(); itr1 != mylist.end();
         itr1++) {
        std::cout<<*itr1<< " ";
    }
    std::cout<<std::endl;
    return 0;
}
