#include <iostream>
#include <string>

#include <array>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <utility>
#include <vector>

int main(void) {

   // Array - special initialisation
   std::array<int, 3> array({1, 2, 3});
   array[0] = 100;
   std::cout << "array[0]: " << array[0] 
             << ", array[1]: " << array[1] 
             << std::endl; 

   // Vector
   std::vector<int> vector;
   vector.push_back(1);
   vector.push_back(2);
   vector.push_back(3);
   vector[0] = 100;
   // std::cout << "vector[0]: " << vector[0] 
   //           << ", vector[1]: " << vector[1] 
   //           << std::endl; 

   // for(int i = 0; i != vector.size(); ++i) {
   //    std::cout << "vector[" << i << "]: " << vector[i]
   //                << std::endl; 
   // }
   for(int& value : vector) {
      std::cout << "vector[?]: " << value
                  << std::endl; 
      value = 100;
   }

   // List
   std::list<int> list;
   list.push_back(1);
   list.push_front(2);
   list.push_back(3);
   // list[0] = 100;
   std::cout << "list.front: " << list.front() 
             << ", list.back: " << list.back()
             << std::endl; 
   for(int& value : list) {
      std::cout << "list[?]: " << value
                  << std::endl; 
   }

   // Deque
   std::deque<int> deque;
   deque.push_back(1);
   deque.push_front(2);
   deque.push_back(3);
   deque[0] = 100;
   std::cout << "deque[0]: " << deque[0] 
             << ", deque[1]: " << deque[1] 
             << ", deque[2]: " << deque[2] 
             << std::endl; 

   // Set
   std::set<int> set;
   set.insert(1);
   set.insert(3);
   set.insert(2);
   bool inSet = set.find(1) != set.end();
   std::cout << "set(1): " << inSet << std::endl;
   inSet = set.find(100) != set.end();
   std::cout << "set(100): " << inSet << std::endl;
   std::cout << "set(2): " << *(set.find(2)) << std::endl;
   for(const int& value : set) {
      std::cout << "set[?]: " << value
                << std::endl; 
   }

   // Map
   std::map<int, std::string> map;
   map[5] = "hello";
   map[-1] = "world";
   map[0] = "!";
   map[5] = "cosc1076";
   std::cout << "map[-1]: " << map[-1] << std::endl;
   std::cout << "map[5]: " << map[5] << std::endl;
   bool inMap = map.find(5) != map.end();
   std::cout << "map(5): " << inMap << std::endl;
   inMap = map.find(100) != map.end();
   std::cout << "map(100): " << inMap << std::endl;

   std::pair<const int, std::string>& resultFind = 
      *(map.find(5));
   std::cout << "key: " << resultFind.first << std::endl;
   std::cout << "value: " << map.find(5)->second << std::endl;

   std::cout << std::endl;
   for(const auto value : map) {
      std::cout << "map[" << value.first << "]: " << value.second
                << std::endl; 
   }

   // Tuple
   std::tuple<double, char, std::string> tuple;
   std::get<0>(tuple) = 7.1f;
   std::get<1>(tuple) = 'a';
   std::get<2>(tuple) = "hello";
   std::get<0>(tuple) = 10.5;
   std::cout << "(" << std::get<0>(tuple) << ", " << std::get<1>(tuple)
             << ")" << std::endl;

   return EXIT_SUCCESS;
}
