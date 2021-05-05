/*
 * Deque and vector has very similar interfaces. The biggest difference between
 * these two is that vector only grow at the end but deque can grow both the
 * sides.
 *
 *  Vector:
 *   _______________
 *  |_|__|__|__|__|_-------->  
 *
 *  Deque:
 *           _______________
 *    <----- _|__|__|__|__|_-------->  
 *
 * Deque does not provide contigous access of the data. This is a difference
 * between a vector and a deque.
 *
 * Properties:
 *  1. Fast insert/remove at the begining and at the end. O(1)
 *  2. Slow insert/remove in the middle: O(n)
 *  3. Slow search: O(n)
 */

#include <iostream>
#include <deque>

int main(int argc, char **argv)
{
    std::deque <int> deq = {4,6,7};
    deq.push_front(2);
    deq.push_back(3);

    std::cout <<"Value at index 0: "<<deq.at(0)<<std::endl;
    std::cout <<"Size of the deque: "<<deq.size()<<std::endl;

    return 0;
}
