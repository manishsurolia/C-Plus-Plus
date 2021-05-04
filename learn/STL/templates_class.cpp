/*
 * Class Templates : Any data type used inside a class can be dynamic.
 */

#include <iostream>

using namespace std;

template <typename T>

class my_vector
{
    private:
        T arr[100];
        int size;
    public:
        my_vector()
        {
            size = 0;
        }
        void push (T x)
        {
            arr[size] = x;
            size++;
        }
        T get (int index)
        {
            return arr[index];
        }
        int get_size(void)
        {
            return size;
        }
        void print (void)
        {
            if (!size) {
                cout <<"No elements";
            } else {
                for (int i=0; i<size; i++) {
                    cout <<arr[i]<<endl;
                }
            }
        }
        my_vector operator + (my_vector &a)
        {
            my_vector temp;
            temp.size = this->size;
            for (int i=0; i<this->size; i++) {
                temp.arr[i] = this->arr[i] + a.arr[i];
            } 
            return temp;
        }
};

int main(int argc, char **argv)
{
    my_vector <int> vec; // Provinding data type is mandatory.
    vec.push(1);
    vec.push(2);
    vec.push(3);
    vec.push(4);
    vec.print();
    my_vector <double> vec1; // Provinding data type is mandatory.
    vec1.push(1.2);
    vec1.push(2.3);
    vec1.push(3.4);
    vec1.push(4.5);
    vec1.print();
    my_vector <double> vec2;
    vec2.push(4.2);
    vec2.push(6.3);
    vec2.push(3.4);
    vec2.push(1.5);
    vec2.print();
    my_vector <double> vec3;
    cout << "value at index 1 is : "<<vec1.get(1)<<endl;
    cout << "size of the vector is : "<<vec1.get_size()<<endl;
    vec3 = vec1 + vec2;
    cout << "Data in vec3 : "<<endl;
    vec3.print();

    return 0;
}
