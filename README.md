# Arithmetic
试题来源：杭电OJ http://acm.hdu.edu.cn/listproblem.php?vol=1

## 试题小计
#### 1002 大数加法 
debug好久一直WA，还用上了对拍器，最后发现是输出的“case”应该是“Case” 
/(ㄒoㄒ)/~~

## PAT系列

#### 1060 Are They Equal (25)
此题的测试用例涵盖有特殊情况，例：0000001、0.0000001、0.0与0的判断；故在处理之前需先处理数字前方的0
解决思路:
1.对数字进行预处理，去掉开头部分的0；
2.第二部根据小数点位置区分小数或非小数，计算阶码e；
3.根据有效位数输出有效数字部分，需考虑精度高于该数字时以0补足

#### 1001 A+B Format (20) 

思路很简单，转化为字符串后每隔三位输出一个逗号，但每隔三位的把握卡了很久（未考虑到原始数位数的影响）

正解：(i+1) % 3 == length % 3 && (i+1)!=length 

#### 1133 Splitting A Linked List (25) 

该题需注意
1.链表结构的存储用数组会大大提高写代码的效率；
2.注意最后的输出，小技巧（题意要求每一个节点的next节点都指向新的节点，只需把下一个节点的当前位置输出两遍即可，无需更改真实的指向）

#### 1068 Find More Coins (30)

01背包的变种问题，需要注意的是输出01背包的解，需添加choice\[i][j]数组
另：暴力dfs可解决

#### 1044 Shopping in Mars (25)

O(n^2)复杂度会有三组测试用例超时，此时改用二分法将复杂度下降为O(nlgn)

注意若超时的话，优先检查是否将**输入输出换成scanf 和 printf**

在输入输出量非常大时，能节省非常可观的时间

