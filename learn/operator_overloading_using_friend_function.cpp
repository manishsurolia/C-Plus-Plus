/*
 * You can make a global function(not part of the class) as a friend function.
 * When you make a function as friend of a class, this function is able to
 * access all private data of the class.
 *
 * Below is an example, where we have made '+' operator overloading as friend
 * function of the class 'complex'.
 *
 * Just notice here, that this function is not called with a object. It does
 * not have a 'this' pointer in it.
 *
 * It just uses the arguments passed to it.
 *
 * Try to print the 'this' pointer in the friend function. You will get an error
 * during compilation.
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
        friend complex operator + (complex c1, complex c2);
        void print (void);
};

complex::complex(int real=0, int img=0)
{
    this->real = real;
    this->img = img;
}

complex operator + (complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

void complex::print (void)
{
    cout<<"Real : "<<this->real<<" Imaginary : "<<this->img<<endl;
}

int main(int argc, char **argv)
{
    complex c1(1,2), c2(3,4);
    complex c3 = c1 + c2;
    c3.print();
}
