/*
 * You can create a base class pointer and assign the address of derived class
 * to it, and use.
 *
 * But remember, that you can only call the base class functions with the base
 * class pointer. you can't call the derived class functions with the base
 * class pointer.
 *
 * Also, vice versa is not TRUE. means, you can not have a derived class pointer
 * and then assign the address of base class to it.
 */
#include <iostream>

using namespace std;

class Base
{
    public:
    void fun1()
    {
        cout <<"Base class fun1"<<endl;
    }

    void fun2()
    {
        cout <<"Base class fun2"<<endl;
    }

    void fun3()
    {
        cout <<"Base class fun3"<<endl;
    }
};

class Derived
{
    public:
    void fun4()
    {
        cout <<"Base class fun4"<<endl;
    }

    void fun5()
    {
        cout <<"Base class fun5"<<endl;
    }

    void fun6()
    {
        cout <<"Base class fun6"<<endl;
    }
};


int main(int argc, char **argv)
{
    Base *b;
    b = (Base *)new Derived();
    b->fun1();
    b->fun2();
    b->fun3();
    //b->fun4(); // not supported
    //b->fun5(); // not supported
    //b->fun6(); // not supported
    return 0;
}

