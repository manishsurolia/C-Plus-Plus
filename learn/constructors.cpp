/*
 * There are 4 different types of constructors.
 * 1. Default constructor. ('built-in contructor' or 'compiler provided constructor')
 * 2. Non-parameterized constructor.
 * 3. Parameterized constructor.
 * 4. Copy contructor.
 *
 * Note : When you define multiple constructors in the same class, we call it
 * constructor overloading.
 *
 * Below is an example of constructor overloading.
 */

#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;

    public:
        Rectangle ()
        {
            length = 0;
            breadth = 0;
        }

        Rectangle (int l, int b)
        {
            length = l;
            breadth = b;
        }

        /*
         * Taking parameter as reference, because we dont want to make one
         * more object when the object is passed in this constructor.
         */
        Rectangle (Rectangle &r) 
        {
            length = r.length;
            breadth = r.breadth;
        }

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
