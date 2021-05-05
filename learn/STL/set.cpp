/*
 * Set : set container is an associative container. Associative containers are
 * typically implemented using 'BINARY TREE' based on some pre-condition.
 * for example, based on '<' or '>' operator.
 *
 * So, the key attribute of an associative container is that it is always
 * sorted.
 *
 * When you try to insert/remove an element it just this in O(log n) time.
 *
 * When we insert/remove an element the tree is re-arranged to follow the
 * property of a binary tree.
 *
 * By default, a set is ordered based on '<' operator.
 * 
 * Since, associative containers are always sorted, and we can't control the
 * place where the element will go, below functions make no sense here.
 *
 * push_back()
 * push_front()
 *
 * Below is an example of SET associative container.
 *
 * Note : SET container do not hold duplicate entries. So, remember if you are
 * working on duplicate items, dont use SET.
 *
 * Note : 'insert' function returns a pair, which shows whether insertion was
 * sucessful or not and where it has got inserted.
 *
 * Also, insert has two variations,
 *  insert(data)
 *  insert(iterator, data)
 *
 *  The second is just to help the function to put the data at correct place,
 *  if you already know the correct place. otherwise, anyway, it is going to
 *  take O(log n) to find the proper place for this data and place it.
 *
 *  iterator in insert just works as a hint and not the exact place where the
 *  data has to be placed.
 *
 *  You cant directly put data using iterator. Like, '*it = 2'. this is not
 *  possible.
 *
 *  Properties:
 *
 *  1. Fast search : O(log n)
 *  2. Traversing is slow (compared to vector & deque).
 *  3. No random access, no [] operator.
 *
 *  set and list both suffer from the same problem, locallity. The data are at
 *  differnet places. no contiguous. so traverse takes lots of time.
 *
 *  But insert/delete/search are very fast O(log n). 
 */

#include <iostream>
#include <set>

int main(int argc, char **argv)
{
    std::set <int> myset;
    myset.insert(10);
    myset.insert(3); 
    myset.insert(11);
    myset.insert(5); 

    std::set<int>::iterator it;

    for (std::set <int> :: iterator itr = myset.begin(); itr != myset.end();
         itr++) {
        std::cout << *itr << " ";
    }

    std::cout <<std::endl;

    std::pair <std::set<int>::iterator, bool> ret;

    ret = myset.insert(3);

    if (ret.second == false) {
        it = ret.first;
    }
    std::cout<<"return : "<<*it<<std::endl;
    
    myset.erase(11);
    myset.erase(5);
    myset.insert(5);
    myset.insert(25);

    for (std::set<int>::iterator itr = myset.begin(); itr != myset.end();
         itr++) {
        std::cout<<*itr<<" ";
    }

    myset.clear();

    for (std::set<int>::iterator itr = myset.begin(); itr != myset.end();
         itr++) {
        std::cout<<*itr<<" ";
    }
    

    std::cout<<std::endl;

    return 0;
}
