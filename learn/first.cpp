#include <iostream>

int main(int argc, char **argv)
{
    /* 
     * 1. 'cout' is a global object available in C++. To use this global object,
     * This object(cout) is declared(not defined) in iostream.h header file.
     * 2. '<<' is 'insertion operator' in C++, here its defined in the class,
     * for which the cout object has been defined.
     * 3. The class of cout object is 'ostream' class. 
     * 4. Instead of using 'std::' before 'cout' we can also use
     * 'using namespace std', but lets leave the namespace for later.
     * for now, you can simply using the objcet with 'std::'.
     */
    std::cout<<"Hello World!!\n";
    return 0;
}
