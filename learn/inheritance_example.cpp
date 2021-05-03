/*
 * Inheritance example
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

class cuboid:public Rectangle
{
    private:
        int height;
    public:
        cuboid(int l, int b, int h);
        int get_height(void);
        void set_height(int h);
        int volume (void);
};

cuboid::cuboid(int l=0, int b=0, int h=0)
{
    height = h;
    set_length(l);
    set_breadth(b);
}

int cuboid::get_height(void)
{
    return this->height;
}

void cuboid::set_height(int h)
{
    this->height = h; 
}

int cuboid::volume (void)
{
    return get_length() * get_breadth() * height;
}

int main(int argc, char **argv)
{
    cuboid c1(10, 20, 30);

    cout << "Object c1 ==> " <<"length: " << c1.get_length() <<" width: "
         << c1.get_breadth()<< " height: " <<c1.get_height()<<endl;
    cout << "Area : " << c1.area() << " Volume : "<<c1.volume()<<endl;
    return 0;
}
