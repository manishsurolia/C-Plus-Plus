/*
 * Sometimes people dont want to sort data as per the value of each element.
 * They want to sort them according to a key.
 *
 *  key, value
 *
 *  so, we have a 'key,value' pair.
 *
 *  This is why we have 'map' and 'multimap'. Their complexity is exactly same
 *  as set and multiset.
 *
 *  add/delete/find takes O(log n).
 *
 *  map and multimap have same interface as set and multiset except that each
 *  elemnet here is a pair of key and value.
 *
 *  map does not allow elements with duplicate keys. see below example. key 100
 *  is taken only once.
 *
 * Keys can not be modifed in a map or multimap.
 */

#include <iostream>
#include <map>

int main(int argc, char **argv)
{
    std::map <int, char> mymap;
    mymap.insert (std::pair<int, char>( 100,'a'));
    mymap.insert (std::make_pair(200, 'z')); // differnt way of creating pair.
    mymap.insert (std::pair<int, char>(100, 'x'));
    mymap.insert (std::pair<int, char>(300, 'k'));

    for (std::map<int, char>::iterator itr = mymap.begin(); itr != mymap.end(); itr++) {
        std::cout<<(*itr).first<<" "<<(*itr).second<<std::endl;
    }
    std::cout<<std::endl;

    std::map <int, char>::iterator it = mymap.find(100);
    std::cout<<(*it).first << " "<<(*it).second<<std::endl;

    return 0;
}
