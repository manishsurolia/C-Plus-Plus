#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    string name; // Here string is a in-built class in C++
    cout <<"May I know your name ";
    //cin >> name; // Not using cin, as it reads only frist word of input.
    getline (cin, name); // This reads the complete line. not just one word.
    // Notice here that we are passing the objects 'cin' and 'name' to the
    // function 'getline'.
    cout << "Welcome, "<< name << endl;
    return 0;
}
