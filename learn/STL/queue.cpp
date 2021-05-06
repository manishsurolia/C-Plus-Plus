/*
 * Queue implementation uses push and pop to push and delete the element in
 * front and rear.
 * To see the data at front use myqueue.front().
 */
#include <iostream>
#include <queue>

int main(int argc, char **argv)
{
    std::queue <int> myqueue;
    myqueue.push(10);
    myqueue.push(20);
    myqueue.push(30);
    myqueue.push(40);
    myqueue.push(50);

    std::cout <<"Queue :"<<std::endl;
    while(!myqueue.empty()) {
        std::cout<<myqueue.front()<<" ";
        myqueue.pop();
    }
    std::cout<<std::endl;
    return 0;
}
