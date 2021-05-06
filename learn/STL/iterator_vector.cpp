/*
 * We have talked a lot about containers. Now, lets look at the iterators.
 *
 * There are 5 catagoris of iterators.
 *
 * 1. Random access iterator : (Vector, deque, array) : With Random access
 * iterator we can access the elements in a container randomly.
 *
 * If I add 5 in an iterator, iterator will be advanced by 5.
 *
 * For example,
 *
 *  std::vector <int> myvec {10, 20, 30, 40, 50, 60};
 *  std::vector <int> :: iterator itr = myvec.find(10); // pointing to 10. 
 *  itr = itr + 5; // jumping to 60.
 *
 *  cout<<*itr;
 *
 *  Iterators can be compared with each other to find which one is at
 *  lower index and which one is at higher index.
 *
 *  You can increment and decrement the iterator as below:
 *
 *  itr++
 *  itr--;
 *
 *  Check the loops for this kind of increment.
 */

#include <iostream>
#include <vector>

int main(int argc, char **argv)
{
    std::vector <int> myvector = {10, 20, 30, 40, 50, 60};
    std::vector <int> :: iterator itr = myvector.begin();
    std::vector <int> :: iterator itr1 = myvector.end();

    if (itr1 > itr) {
        std::cout << "itr1 is ahead of itr"<<std::endl;
        std::cout << "Difference between itr1 and itr : "
                  <<itr1 - itr << std::endl;
    }

    std::cout << "Print the whole vector: ";
    for (std::vector <int> :: iterator it = myvector.begin();
         it != myvector.end() ; it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout<<"First element: "<<*itr<<std::endl;
    itr = itr + 5;
    std::cout<<"After jumping 5 places forward: "<<*itr<<std::endl;
    itr = itr - 2;
    std::cout<<"After jumping 2 places backward: "<<*itr<<std::endl;
    return 0;
}
