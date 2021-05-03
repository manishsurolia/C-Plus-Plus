/*
 * When an object is created inside a function it is destroyed when the function
 * completes.
 *
 * A default object destructor is called when an object is destroyed.
 *
 * It just destroys the memory created for an object, which is good. But, we
 * need to override the default destructor because some objects creates memory
 * for its data members. Those we need to destroy specifically in the
 * destroyer.
 *
 * and the default will take care of the deletion of the pointer.
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
    length = 0;
    breadth = new (int);
    *breadth = 0;
}

Rectangle::Rectangle (int l, int b)
{
    length = l;
    breadth = new (int);
    *breadth = b;
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
    length = r.length;
    breadth = new (int);
    *breadth = *r.breadth;
}

void Rectangle::set_length(int l)
{
    length = l;
}

void Rectangle::set_breadth(int b)
{
    *breadth = b;
}

int Rectangle::get_length(void)
{
    return length;
}

int Rectangle::get_breadth(void)
{
    return *breadth;
}

int Rectangle::area ()
{
    return length * (*breadth);
}

int Rectangle::perimeter ()
{
    return 2 * (length + (*breadth));
}

Rectangle::~Rectangle ()
{
    cout<<"Destructor called. Deleting the heap memory used for breadth"
        " pointer."<<endl;
    delete(breadth);
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
