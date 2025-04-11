/*
For many students, getting a ticket to The ICPC World Finals is a huge achievement, and The 2019 ICPC Asia Danang Regional Contest is a chance to make their dream come true. For some others, they just like to stretch their brains and solve interesting problems.

We – the scientific committee understand that, and we tried our best to set up a problemset that is interesting and diverse in both topics and difficulty. For a few months, we called for problem proposals from many people and received 
 easy problems, 
 medium problems and 
 hard problems. Using these proposals, we want to create a problemset which:

Consists of exactly 
 problems,

Has at least 
 easy problem,

Has at least 
 medium problem,

Has at least 
 hard problem.

Your task is to check whether it is possible to create such a problemset using the available problems.

Input
The input contains 
 integers 
, 
, 
 and 
 
.

Output
Print ‘YES’ if it is possible to create a problemset satisfying above requirements, and ‘NO’ otherwise.

Explanation of sample data
In the first sample, the committee do not have any easy problem. Thus, they cannot create a problemset with at least 
 easy problem.

In the second sample, the committee can use 
 easy problems, 
 medium problems and 
 hard problems to create a problemset with exactly 
 problems.

Sample Input 1	Sample Output 1
0 3 3 5
NO
Sample Input 2	Sample Output 2
4 10 6 13
YES


*/
#include<bits/stdc++.h>
using namespace std;
int main(){


	int a, b, c, n;
	scanf("%d%d%d%d",&a,&b,&c,&n);
	printf(((a >= 1) &&(b >= 1) && (c >= 1) && ( n >= 3) &&( a+b+c >= n))?"YES\n":"NO\n");

	return 0;

}















