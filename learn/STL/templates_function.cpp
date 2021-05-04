/*
 *
 * Function Templates : Create functons, which can perform operations on
 * multiple data types.
 * 
 * A function no more need to be typed with its input params.
 *
 * for example, for addition of two numbers (int and float), we need to write
 * two different functions as below:
 *
 * int add (int a, int b)
 * {
 *      return (a+b);
 * }
 *
 * double add (double a, double b)
 * {
 *      return (a+b);
 * }
 *
 * But with template, you can just write a single function to work with both
 * the types.
 *
 * For example, see below:
 *
 * template <typename T>
 *
 * T square (T x)
 * {
 *      return (x * x);
 * }
 *
 * Note : Based on how many calls with different types we make in our code,
 * compiler creates one copy of the function for each type.
 *
 */

#include <iostream>

using namespace std;

template <typename T>

T square (T x)
{
    return (x*x);
}

int main(int argc, char **argv)
{
    cout <<square<int>(5) <<endl;
    cout <<square(5) <<endl; // Compiler understands the type automatically.
    cout <<square<double>(5.5) <<endl;
    cout <<square(5.5) <<endl; // Compiler understands the type automatically.
    return 0;
}
