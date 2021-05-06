/*
 * unordered_multimap is just like unordered_map, except that it allows
 * multiple keys.
 */

#include <iostream>
#include <unordered_map>

int main(int argc, char **argv)
{
    std::unordered_multimap <int, char> mymap;
    mymap.insert (std::pair<int, char>( 100,'a'));
    mymap.insert (std::pair<int, char>( 100,'j'));
    mymap.insert (std::make_pair(200, 'z')); // differnt way of creating pair.
    mymap.insert (std::pair<int, char>(100, 'x'));
    mymap.insert (std::pair<int, char>(300, 'k'));
    mymap.insert (std::pair<int, char>(300, 'n'));

    for (std::unordered_multimap<int, char>::iterator itr = mymap.begin();
         itr != mymap.end(); itr++) {
        std::cout<<(*itr).first<<" "<<(*itr).second<<std::endl;
    }
    std::cout<<std::endl;

    std::unordered_multimap <int, char>::iterator it = mymap.find(100);
    std::cout<<(*it).first << " "<<(*it).second<<std::endl;

    return 0;
}
