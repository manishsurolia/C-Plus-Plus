#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char **argv)
{
    std::vector <int> vec = {1, 2, 3, 4, 5};

    vec.push_back(6);
    vec.push_back(9);
    vec.push_back(8);

    std::vector<int>::iterator itr1 = vec.begin();
    std::vector<int>::iterator itr2 = vec.end();

   for (std::vector <int>::iterator itr = itr1; itr != itr2; itr++) {
       std::cout << *itr<<std::endl;
   }

   std::cout <<std::endl;

   std::sort(itr1, itr2); // sort does not work on vector directly.
                          // It works on iterators.

   for (std::vector <int>::iterator itr = itr1; itr != itr2; itr++) {
       std::cout << *itr<<std::endl;
   }
   return 0;
}
