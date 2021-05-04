/*
 * This shows how constructors of base class and the derived class are called
 * when an object of a derived class is created.
 */

#include <iostream>

using namespace std;

class Base
{
    public:
        Base()
        {
            cout << "Non-parameterized Constructor of Base class."<<endl;
        }

        Base(int b)
        {
            cout << "Parameterized Constructor of Base class. "<<b<<endl;
        }
};

class Derived:public Base
{
    public:
        Derived()
        {
            cout << "Non-parameterized Constructor of Derived class."<<endl;
        }

        Derived(int d)
        {
            cout << "Parameterized Constructor of Derived class. "<<d<<endl;
        }

        Derived(int b, int d):Base(b)
        {
            cout << "Second parameterized Constructor of Derived class. " <<d<<endl;
        }
};

int main(int argc, char **argv)
{
    cout << "Creating D1"<<endl;
    Derived d1; /* first non-para constructor of base, then non-para constructor of derived. */
    cout << "Creating D2"<<endl;
    Derived d2(2); /* first non-para constructor of base, then para constructor of derived. */
    cout << "Creating D3"<<endl;
    Derived d3(3, 2); /* first para constructor of base, then para constructor of derived. */
    return 0;
}
