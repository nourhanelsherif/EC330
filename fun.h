/*
Write a program to generate the result of fun(x, y) for non-negative integer inputs x
and y. The function fun(x, y) is defined as follows.
𝑓𝑢𝑛(𝑥, 𝑦) ={
    1, when 𝑥 = 0 𝑎𝑛𝑑 𝑦 = 0
    𝑓𝑢𝑛(1, 𝑦 − 1), when 𝑥 = 0 𝑎𝑛𝑑 𝑦 ≠ 0
    𝑥 + 1, when 𝑥 ≠ 0 𝑎𝑛𝑑 𝑦 = 0
    𝑓𝑢𝑛(𝑥 − 1, 𝑓𝑢𝑛(𝑥 − 1, 𝑦 − 1)), 𝑜𝑡ℎ𝑒𝑟𝑤𝑖𝑠𝑒
}
If your implementation is recursive, it must not make redundant recursive calls, e.g.
if the value of 𝑓𝑢𝑛(2, 3) has been computed before then your program should not
compute it again. 
*/


#ifndef __FUN_H__
#define __FUN_H__

unsigned int fun(unsigned int, unsigned int);
//unsigned int fun_helper(unsigned int, unsigned int, std::unordered_map<std::string, int>*);

#endif /* __FUN_H__*/