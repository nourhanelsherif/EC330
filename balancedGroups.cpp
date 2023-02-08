//references used: 
// for sorting: https://stackoverflow.com/questions/9025084/sorting-a-vector-in-descending-order
            // https://www.digitalocean.com/community/tutorials/sorting-a-vector-in-c-plus-plus
// for creating a greedy algorithm: https://www.geeksforgeeks.org/greedy-al

#include "balancedGroups.h"

// your includes here
#include <iostream>
#include <vector>
#include <algorithm>
//using namespace std;

// greater function
    // bool greater(int a, int b)
    // {
    //     return a > b;
    // }

Assignment balancedGroups(std::vector<int> const &birthdays) {

	std::vector<int> sortedVector = birthdays; // copy birthdays; non-constant -> can be sorted
	sort(sortedVector.begin(), sortedVector.end(), std::greater<int>()); // sort in descending

	std::vector<int> GA; // Group A
	std::vector<int> GB; // Group B
    int diff;
	Assignment A(diff, GA, GB); // constructor 

	int n = sortedVector.size();
    
    // divide list into two groups
    int sumA = 0, sumB = 0;
    for (int i = 0; i < n; i++) // traverse birthdays list
    {
        if (sumA + sortedVector[i] <= sumB + sortedVector[i]) // when adding next Bday in list, is sumA is still <= sumB + next element in Bday list?
        {
            A.ga.push_back(sortedVector[i]); // add Bday to Group A
            sumA += sortedVector[i];        // update sumA: add new Bday
        }
        else
        {
            A.gb.push_back(sortedVector[i]); // add Bday to Group B 
            sumB += sortedVector[i];
        }
    }
	A.diff = abs(sumA - sumB); // find diff
	// std::cout << "diff: " << A.diff << std::endl;
	// A.printAssignment(); // print list
	return Assignment(A.diff, A.ga, A.gb);
}

// int main(){

// 	// std::vector<int> const birthdays = {23, 1, 57, 12, 15, 89, 35};
// 	// std::vector<int> const birthdays = {3, 27, 4, 5, 20};
// 	// std::vector<int> const birthdays = {1, 6, 11, 5};
// 	 std::vector<int> const birthdays = {31, 27, 1, 21, 27};
// 	balancedGroups(birthdays);

// 	return 0;
// }