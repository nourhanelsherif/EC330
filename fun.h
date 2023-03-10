/*
Write a program to generate the result of fun(x, y) for non-negative integer inputs x
and y. The function fun(x, y) is defined as follows.
๐๐ข๐(๐ฅ, ๐ฆ) ={
    1, when ๐ฅ = 0 ๐๐๐ ๐ฆ = 0
    ๐๐ข๐(1, ๐ฆ โ 1), when ๐ฅ = 0 ๐๐๐ ๐ฆ โ  0
    ๐ฅ + 1, when ๐ฅ โ  0 ๐๐๐ ๐ฆ = 0
    ๐๐ข๐(๐ฅ โ 1, ๐๐ข๐(๐ฅ โ 1, ๐ฆ โ 1)), ๐๐กโ๐๐๐ค๐๐ ๐
}
If your implementation is recursive, it must not make redundant recursive calls, e.g.
if the value of ๐๐ข๐(2, 3) has been computed before then your program should not
compute it again. 
*/


#ifndef __FUN_H__
#define __FUN_H__

unsigned int fun(unsigned int, unsigned int);
//unsigned int fun_helper(unsigned int, unsigned int, std::unordered_map<std::string, int>*);

#endif /* __FUN_H__*/