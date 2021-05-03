/*
 * The problem with normal copy constructor is that, when you have a pointer
 * as data member and if you blindly copy the data from data members of one
 * object to another, it will copy the addresses as it is from one
 * to another, which we dont want.
 *
 * To solve that we need to create memory inside copy constructor and then
 * copy the data.
 */

#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int *breadth;

    public:
        Rectangle ()
        {
            length = 0;
            breadth = new (int);
            *breadth = 0;
        }

        Rectangle (int l, int b)
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
        Rectangle (Rectangle &r) 
        {
            length = r.length;
            breadth = new (int);
            *breadth = *r.breadth;
        }

        void set_length(int l)
        {
            length = l;
        }

        void set_breadth(int b)
        {
            *breadth = b;
        }

        int get_length(void)
        {
            return length;
        }

        int get_breadth(void)
        {
            return *breadth;
        }

        int area ()
        {
            return length * (*breadth);
        }

        int perimeter ()
        {
            return 2 * (length + (*breadth));
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
