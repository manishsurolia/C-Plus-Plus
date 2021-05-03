/*
 * Data is not accessed directly by the object to avoid any mis-handeling of
 * data of any object. Hence, they are made private. They can be read only by
 * public members of the class and not directly.
 *
 * Object members are set with the functions of class. Hence, they are made
 * public, so that user can use these function to get and set on the data, which
 * is hidden behind private.
 */
#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;

    public:
        void set_length(int l)
        {
            length = l;
        }

        void set_breadth(int b)
        {
            breadth = b;
        }

        int get_length(void)
        {
            return length;
        }

        int get_breadth(void)
        {
            return breadth;
        }

        int area ()
        {
            return length * breadth;
        }

        int perimeter ()
        {
            return 2 * (length + breadth);
        }
};

int main(int argc, char **argv)
{
    Rectangle r1, r2;
    r1.set_length(10);
    r1.set_breadth(15);
    cout << r1.get_length() <<" " << r1.get_breadth() << endl;
    cout << "area : " << r1.area() << endl;
    return 0;
}
