#include "fun.h"
#include <iostream> 
#include <unordered_map>
#include <string>
// #include <chrono>
// using namespace std::chrono;


unsigned int fun_helper(unsigned int, unsigned int, std::unordered_map<std::string, int>*); // function header

std::unordered_map<std::string, int> results; // global

unsigned int fun(unsigned int x, unsigned int y) { 
    return fun_helper(x,y, &results);
}

unsigned int fun_helper(unsigned int x, unsigned int y, std::unordered_map<std::string, int> * temp_map){
    std::string space = " "; 
    std::unordered_map<std::string,int>::iterator iter = temp_map->find(std::to_string(x) + space + std::to_string(y)); // iterator searches for input term
    if ( iter != temp_map->end() ) // found
        return iter->second;
    else { // key not found in map: calculate and save value
         if(x == 0 && y == 0)
            return 1; // base case
        else if(x == 0 && y !=0)
            temp_map->insert({std::to_string(x) + space + std::to_string(y), fun_helper(1, y-1, &results)}); // insert({key, element})
        else if(y == 0 && x !=0)
            return x + 1; // base case
        else
            temp_map->insert({std::to_string(x) + space + std::to_string(y), fun_helper(x-1, fun_helper(x-1, y-1, &results), &results)}); // recursion case
        }
    return temp_map->at(std::to_string(x) + space + std::to_string(y)); // return saved value
}

// int main(){
//     int x = 100;
//     int y = 100;
// //     auto start = high_resolution_clock::now();
//     std::cout << fun(x,y) << std::endl;
// // timing the program
// //     auto stop = high_resolution_clock::now();
// //     auto duration = duration_cast<microseconds>(stop - start);
// //     std:: cout << duration.count() << std:: endl;

//     return 0;
// }