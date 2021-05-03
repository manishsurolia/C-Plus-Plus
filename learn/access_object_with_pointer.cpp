#include <iostream>
using namespace std;

class Rectangle
{
    public:
        int length;
        int breadth;

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
    Rectangle *r1;
    r1 = new Rectangle();
    r1->length = 15;
    r1->breadth = 10;
    cout<<"r1 object area : " << r1->area() << endl;
    return 0;
}
