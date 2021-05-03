/*
 * To overload '<<' operator with 'cout', we need to understand that, we need
 * to make it as friend function. because below is the syntax we want.
 *
 *  'cout << c3'
 *
 *  Here, We can not call this operator '<<' with a 'ostream' object. because
 *  this operator overloading is not part of 'ostream' class.
 *
 *  Hence, you need to pass both 'cout' and 'c3' as arguments and dont need any
 *  return out of it.
 *
 *  Again this overloading will not have 'this' pointer in it as its a friend
 *  function.
 */
#include <iostream>

using namespace std;

class complex
{
    private:
        int real;
        int img;
    public:
        complex(int, int);
        complex operator + (complex c);
        friend void operator << (ostream &cout, complex c);
};

complex::complex(int real=0, int img=0)
{
    this->real = real;
    this->img = img;
}

complex complex::operator + (complex c)
{
    complex temp;
    temp.real = this->real + c.real;
    temp.img = this->img + c.img;
    return temp;
}

void operator << (ostream &o, complex c)
{
    o <<c.real<<"+"<<c.img<<"i"<<endl;
    return;
}

int main(int argc, char **argv)
{
    complex c1(1,2), c2(3,4);
    complex c3 = c1 + c2;
    cout<<c3;
}
