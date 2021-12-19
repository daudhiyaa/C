/*
Zydhan and Nopal play a game to reduce stress for being PIC of Schematics NPC 2021. 
First Zydhan chooses integer n. In each player's turn (Nopal starts first), 
he has to choose an integer a and subtract it from n such that:

- 1 <= a <= n
- Nopal will always choose even number for a, but Zydhan will always pick odd.

If the current player can't choose any number with those conditions, he loses. 
Determine the winner if they both play optimally!

* Input Format :
Single integer n, the number at the beginning of the game.

* Constraints :
1 <= n <= 10^9

* Output Format :
Output winner name: Nopal or Zydhan

Sample Input 0
1
Sample Output 0
Zydhan

* Explanation 0 :
Nopal can't choose any integer because there is no positive even integer <=1 so Zydhan wins.

Sample Input 1
2
Sample Output 1
Nopal

* Explanation 1 :
In the beginning, Nopal choose a=2 and subtract it from n. Now, n=0 and Zydhan can't pick any number.
*/

#include <stdio.h>
//Conclusion : Nopal even, Zydhan odd
int main()
{
	long n;
    scanf("%ld", &n);
    
    if(n%2==1) printf("Zydhan");
	else printf("Nopal");
}
