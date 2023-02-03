#include "fun.h"
#include <iostream> 
#include <unordered_map>
#include <string>

unsigned int fun_helper(unsigned int, unsigned int, std::unordered_map<std::string, int>*);

unsigned int fun(unsigned int x, unsigned int y) { 
    std::unordered_map<std::string, int> map;
    return fun_helper(x,y, &map);
}

/* your helper function here if you have any */
unsigned int fun_helper(unsigned int x, unsigned int y, std::unordered_map<std::string, int> * temp_map){
    std::string space = " "; 
    if(temp_map->find(std::to_string(x) + space + std::to_string(y)) == temp_map->end()) { // not found: calculate and save value
        if(x == 0 && y == 0)
            temp_map->insert({std::to_string(x) + space + std::to_string(y), 1}); // insert({key, element})
            //return 1;
        else if(x == 0 && y !=0)
            return fun(1, y-1);
        else if(y == 0 && x !=0)
            temp_map->insert({std::to_string(x) + space + std::to_string(y), x+1});
            //return x + 1;
        else
            return fun(x-1, fun(x-1, y-1));
        }
    // if found, or after val calculated
    return temp_map->at(std::to_string(x) + space + std::to_string(y));
}

// int main(){
//     int x = 10;
//     int y = 5;
//     std::cout << fun(x,y) << std::endl;
//     return 0;
// }