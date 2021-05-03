/*
 * Every contructor/destructor/function has a pointer with it, which holds the
 * address of the object for which this 'contructor/destructor/function' has
 * been called.
 *
 * You can utilize this pointer many times. Below is one example.
 */

#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int *breadth;

    public:
        Rectangle ();
        ~Rectangle ();
        Rectangle (int l, int b);
        Rectangle (Rectangle &r);
        void set_length(int l);
        void set_breadth(int b);
        int get_length(void);
        int get_breadth(void);
        int area ();
        int perimeter ();
};

Rectangle::Rectangle ()
{
    this->length = 0;
    breadth = new (int);
    *this->breadth = 0;
}

Rectangle::Rectangle (int length, int breadth)
{
    this->length = length;
    this->breadth = new (int);
    *this->breadth = breadth;
}

/*
 * Taking parameter as reference, because we dont want to make one
 * more object when the object is passed in this constructor.
 *
 * Also, dont just copy the pointer vlaues as it is. create new memory,
 * and then copy data. Called Deep copy constructor.
 */
Rectangle::Rectangle (Rectangle &r) 
{
    this->length = r.length;
    this->breadth = new (int);
    *this->breadth = *r.breadth;
}

void Rectangle::set_length(int length)
{
    this->length = length;
}

void Rectangle::set_breadth(int breadth)
{
    *this->breadth = breadth;
}

int Rectangle::get_length(void)
{
    return this->length;
}

int Rectangle::get_breadth(void)
{
    return *this->breadth;
}

int Rectangle::area ()
{
    return this->length * (*this->breadth);
}

int Rectangle::perimeter ()
{
    return 2 * (this->length + (*this->breadth));
}

Rectangle::~Rectangle ()
{
    delete(this->breadth);
}

int main(int argc, char **argv)
{
    Rectangle r1;
    Rectangle r2(10, 15);
    Rectangle r3(r2);
    cout << "Object r1 : " <<"length: " << r1.get_length() <<" width: " << r1.get_breadth();
    cout << " Area : " << r1.area() << endl;
    cout << "Object r2 : " <<"length: " << r2.get_length() <<" width: " << r2.get_breadth();
    cout << " Area : " << r2.area() << endl;
    cout << "Object r3 : " <<"length: " << r3.get_length() <<" width: " << r3.get_breadth();
    cout << " Area : " << r3.area() << endl;
    return 0;
}
