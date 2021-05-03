/*
 * With Scope resolution operator, we can define the functions and constructors
 * outside of the class.
 *
 * All functions, which are defined inside a class, becomes inline. so better to
 * keep them short. otherwise write them outside of the class.
 */

#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;

    public:
        Rectangle ();
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
    length = 0;
    breadth = 0;
}

Rectangle::Rectangle (int l, int b)
{
    length = l;
    breadth = b;
}

/*
 * Taking parameter as reference, because we dont want to make one
 * more object when the object is passed in this constructor.
 */
Rectangle::Rectangle (Rectangle &r) 
{
    length = r.length;
    breadth = r.breadth;
}

void Rectangle::set_length(int l)
{
    length = l;
}

void Rectangle::set_breadth(int b)
{
    breadth = b;
}

int Rectangle::get_length(void)
{
    return length;
}

int Rectangle::get_breadth(void)
{
    return breadth;
}

int Rectangle::area ()
{
    return length * breadth;
}

int Rectangle::perimeter ()
{
    return 2 * (length + breadth);
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
