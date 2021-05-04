/*
 * when there is a mix kind of inheritance(Heirarichal and multiple), as below:
 *
 *
 *
 *                  A      ----> function 'fun' defined here.
 *                 / \
 *                /   \
 *               B     C
 *               \     /
 *                \   /
 *                  D      ----> Function 'fun' used here. but compiler has 
 *                               ambiguity, because this 'fun' comes from 2
 *                               sides for it. How to call. To avoid this we
 *                               use virtual base class as below. Inherit base
 *                               class as virtual. If you remove the virtual
 *                               keyword, compiler will throw error for
 *                               ambiguity.
 *
 */
#include <iostream>
using namespace std;

class A
{
    public:
        void fun(void)
        {
            cout << "Function of class A"<<endl;
        }
};


class B: virtual public A
{
};

class C: virtual public A
{
};

class D:public B, public C
{
};

int main(int argc, char **argv)
{
    D dd;
    dd.fun();
    return 0;
}
