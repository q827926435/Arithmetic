# Arithmetic
试题来源：杭电OJ http://acm.hdu.edu.cn/listproblem.php?vol=1

## 试题小计
#### 1002 大数加法 
debug好久一直WA，还用上了对拍器，最后发现是输出的“case”应该是“Case” 
/(ㄒoㄒ)/~~

## PAT系列

#### 1060 Are They Equal (25)⭐️
考察科学计数法的转化，此题的测试用例涵盖有特殊情况，例：0000001、0.0000001、0.0与0的判断；故在处理之前需先处理数字前方的0
解决思路:
1.对数字进行预处理，去掉开头部分的0；
2.第二部根据小数点位置区分小数或非小数，计算阶码e；
3.根据有效位数输出有效数字部分，需考虑精度高于该数字时以0补足

（将科学计数法转化为一般式见题1073）

#### 1001 A+B Format (20) 

思路很简单，转化为字符串后每隔三位输出一个逗号，但每隔三位的把握卡了很久（未考虑到原始数位数的影响）

正解：(i+1) % 3 == length % 3 && (i+1)!=length 

#### 1133 Splitting A Linked List (25)⭐️ 

该题需注意
1.链表结构的存储用数组会大大提高写代码的效率；
2.注意最后的输出，小技巧（题意要求每一个节点的next节点都指向新的节点，只需把下一个节点的当前位置输出两遍即可，无需更改真实的指向）

#### 1068 Find More Coins (30)⭐️

01背包的变种问题，需要注意的是输出01背包的解，需添加choice\[i][j]数组
另：暴力dfs可解决

#### 1044 Shopping in Mars (25)

O(n^2)复杂度会有三组测试用例超时，此时改用二分法将复杂度下降为O(nlgn)

注意若超时的话，优先检查是否将**输入输出换成scanf 和 printf**

在输入输出量非常大时，能节省非常可观的时间

#### 1018 Public Bike Management (30)⭐️⭐

dijkstra（记录路径） + DFS
好题，目前碰到的考dijkstra最全面最复杂的题，涉及到用pre\[i]向量来多条最短路径，再用DFS模拟过程

#### 1003 Emergency (25)⭐️ 

dijkstra(涉及到点权值及多条最短路径的计数)

注意与1018的区分，不需要用DFS模拟路径

#### 1027 Colors in Mars (20) 

进制转换，巧妙的写法，因为0~168的十进制转换为13进制不会超过两位数，所以这个两位数为(num / 13)(num % 13)构成的数字 

#### 1007 Maximum Subsequence Sum (25)⭐️ 

最大子段和问题，多了一步求出最大字段具体的数值，牛客网上测试用例比较变态，做完好好检查下边界值

#### 1073 Scientific Notation (20) 

将科学计数法还原成一般形式

#### 1057 Stack (30) 

栈+树状数组+二分（较难）

树状数组的理解见 ：[掌握树状数组](https://www.cnblogs.com/acgoto/p/8583952.html#4041449)

#### 1067 Sort with Swap(0,*) (25)⭐️ 

此题对时间复杂度有一定要求，注意如下：

1.存储时为避免找数字的位置时每次都要从头遍历一遍，直接存储数字的位置（类似哈希表）；

2.0换到原位时，判断下一个不在位置上的数字用一个index存储，因为此前寻找的在之后一定还是有序的 