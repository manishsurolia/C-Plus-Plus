/*
 * Stack in c++ works same as stack in genral.
 * except that pop just removes the data from top.
 * if you want to see the data on top position, just do mystack.top(). It just
 * throws the data at top but does not pop the data.
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
