/*
 * Priority queue is implemented using heap data structure.
 * It is always a max heap in C++. If you want to make it min-heap, just
 * multiply it with '-1' during pushing the data, and divided it by '-1' after
 * you get the data from prirority queue.
 */
#include <iostream>
#include <queue>

#define NEGATIVE (-1)

int main(int argc, char **argv)
{
    // By default, its a max heap.
    std::priority_queue<int> mypriority_queue;
    mypriority_queue.push(-10);
    mypriority_queue.push(5);
    mypriority_queue.push(20);
    mypriority_queue.push(-30);
    mypriority_queue.push(1);
    mypriority_queue.push(7);
    mypriority_queue.push(100);
    mypriority_queue.push(50);

    std::cout<<"Max heap:"<<std::endl;
    while (!mypriority_queue.empty()) {
        std::cout<<mypriority_queue.top()<<" ";
        mypriority_queue.pop();
    }

    // Lets make it a min heap
    mypriority_queue.push(-10 * NEGATIVE);
    mypriority_queue.push(5 * NEGATIVE);
    mypriority_queue.push(20 * NEGATIVE);
    mypriority_queue.push(-30 * NEGATIVE);
    mypriority_queue.push(1 * NEGATIVE);
    mypriority_queue.push(7 * NEGATIVE);
    mypriority_queue.push(100 * NEGATIVE);
    mypriority_queue.push(50 * NEGATIVE);

    std::cout<<std::endl<<"Min heap: "<<std::endl;
    while (!mypriority_queue.empty()) {
        std::cout<<(mypriority_queue.top()/NEGATIVE)<<" ";
        mypriority_queue.pop();
    }
    std::cout<<std::endl;
    return 0;
}
