/*
 * Stack:
 *
 * 'pop' dont give you the data from top. It just removes the data from top.
 * If you want to see the data on top position, just do mystack.top(). It just
 * throws the data from stack top but does not pop the data.
 *
 * Container Adaptor:
 *
 * - Provide restricted interface to meet special needs.
 * - Implemented with fundamnetal contianer classes.
 *
 * 1. Stack : LIFO, push(), pop(), top().
 * 2. queue : FIFO, push(), pop(), front(), back().
 * 3. priority Queue : first item always has the greatest priority.
 *                   : push(), pop(), top() 
 */

#include <iostream>
#include <stack>

int main(int argc, char **argv)
{
    std::stack <int> mystack;
    mystack.push(10);
    mystack.push(20);
    mystack.push(30);
    mystack.push(40);
    mystack.push(50);

    while(!mystack.empty()) {
        std::cout<<mystack.top()<<" ";
        mystack.pop();
    }
    std::cout<<std::endl;
    return 0;
}
