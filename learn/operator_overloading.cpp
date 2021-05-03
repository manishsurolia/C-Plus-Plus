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
        void print (void);
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
