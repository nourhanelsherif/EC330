/* Wenchao wants to divide the class into two (non-empty) project groups based on
the students' birthdays. In particular, we are going to consider only the day of birth
(i.e. an integer between 1 and 31) and not the month or the year. We want the two
groups to be "balanced" in such a way that the difference between the sum of
birthdays of one group and the sum of birthdays of the other group is minimized.
For example, say the birthdays for students Alice, Bob, Charlie, Drew and Edward
are 3, 27, 4, 5 and 20 respectively. The most balanced group assignment would be
{Alice, Bob} and {Charlie, Drew, Edward} since | (3 + 27) - (4 + 5 + 20) | = 1 (| |
indicates taking the absolute value) is the smallest among all possible assignments.
Develop an algorithm to help Wenchao determine the most balanced group
assignment for the class. Implement the balancedGroups function in
balancedGroups.cpp and submit this file on Gradescope. 
*/

#ifndef __BALANCED_H__
#define __BALANCED_H__

#include <vector>
#include <iostream>

struct Assignment {
	int diff;
	std::vector<int> ga; // Group A
	std::vector<int> gb; // Group B
	Assignment(int d, std::vector<int> va, std::vector<int> vb):
		diff(d), ga(va), gb(vb) {}
	void printAssignment() {
		std::cout << "Group A: ";
		for (int e: ga) {
			std::cout << e << " ";
		}
		std::cout << std::endl;
		std::cout << "Group B: ";
		for (int e: gb) {
			std::cout << e << " ";
		}
		std::cout << std::endl;
	}
};

Assignment balancedGroups(std::vector<int> const &birthdays);

#endif /* __BALANCED_H__*/