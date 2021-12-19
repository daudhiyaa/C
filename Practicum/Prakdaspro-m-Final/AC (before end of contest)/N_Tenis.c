/*
Tennis is a racket sport that is played by two opposing players on S sets. Each set consists of at least K games. 
A set is won by a player if that player wins at least K games and at least 2 games more than the opponent. 
Once a set is won, the set is ended and the match continues to a new set (if any) where both players start from 0 game won for that new set.

For example, let K=6, then a set can be ended with any of the following.
- P1 (Player 1) wins 6 games while P2 (Player 2) wins 3 games => P1 wins the set.
- P1 wins 7 games while P2 wins 9 games => P2 wins the set.

On the other hand, a set cannot be ended with any of the following.
- P1 wins 6 games while P2 wins 5 games => no player wins at least 2 games more than the opponent.
- P1 wins 0 game while P2 wins 5 games => no player wins K=6 games.
- P1 wins 7 games while P2 wins 0 games => the set is already ended when P1 won the first 6 games.
- P1 wins 8 games while P2 wins 5 games => the set must already be ended before it reaches this state,

e.g., the set can be ended at 7-5, 6-4, 6-3, etc.

You are given K, S, and N, determine whether there could be such a tennis match with S sets to ends exactly with N games. 
If there is such a tennis match, then output YES (without quotes) in a single line, otherwise, output NO (without quotes) in a single line.

For example, let K=4, S=2, and N=14. It is possible to have such a tennis match. One the possibilities is as follows.
- Set 1 : P1 wins 6 games while P2 wins 4 games.
- Set 2 : P1 wins 4 games while P2 wins 0 games.
There are a total of N = 6+4+4+0 = 14 games on S=2 sets where each set is won if a player won at least K=4 games and at least 2 games more than the opponent.

* Input Format :
Input contains three integers K, S, N in a line representing the minimum number of games to win a set, 
the total number of sets, and the total number of games, respectively.

* Constraints :
2 <= K <= 10^9
1 <= S,N <= 10^9

* Output Format :
Output in a line a string YES or NO (without quotes) whether it is possible to have such a tennis match.

Sample Input 0
4 2 14
Sample Output 0
YES

* Explanation 0 :
This is the example from the problem description.

Sample Input 1
3 1 2
Sample Output 1
NO

* Explanation 1 :
To win a set, a player should win at least 3 games. In this case, the match cannot be ended with exactly  games

Sample Input 2
6 5 181
Sample Output 2
YES

* Explanation 2 :
One example match is as follows.
Set 1 : P1 wins 6 games while P2 wins 4 games.
Set 2 : P1 wins 3 games while P2 wins 6 games.
Set 3 : P1 wins 5 games while P2 wins 7 games.
Set 4 : P1 wins 7 games while P2 wins 5 games.
Set 5 : P1 wins 70 games while P2 wins 68 games.

*/

#include <stdio.h>

int main() 
{
    long k, s, n;
    scanf("%ld%ld%ld", &k, &s, &n);
    
    if(n<k)
    {
        printf("NO\n");
    }
    else if(n<k*s)
    {
        printf("NO\n");
    }
    else if(n==k && s>1)
    {
        printf("NO\n");
    }
    else if(n-k>=1 && s>(n/k))
    {
        printf("NO\n");
    }
    else if(n>=k*s)
    {
        if(k==2)
        {
            if(n%2 != 0)
            {
                printf("NO");
            }
            else{printf("YES");}
        }
        else if(s==1)
        {
            if(n>2*(k-1) && n%2 == 1)
            {
                printf("NO");
            }
            else{printf("YES");}
        }
        else{printf("YES");}
    }
}
