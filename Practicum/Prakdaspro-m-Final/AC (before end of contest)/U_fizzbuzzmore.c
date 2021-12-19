/*
FizzBuzzMore adalah versi lebih dari permainan klasik Fizz Buzz, dimana dalam Fizz Buzz klasik, 
kedua pemain bergantian mengucapkan angka berurutan dari 1 - n, dan dimana ada angka 
yang merupakan kelipatan dari 3, akan diganti dengan kata Fizz, dan dimana ada angka 
yang merupakan kelipatan dari 5, akan diganti dengan Buzz, dan ketika ada kelipatan dari keduanya, 
akan menjadi FizzBuzz, urutan keluar sesuai dengan urutan input.

Namun, versi ini akan lebih banyak, karena jumlah angka yang dites akan bervariasi.

* Input Format :
Baris pertama merupakan T, dimana T adalah jumlah angka kelipatan yang akan diganti dengan sesuatu
Sebanyak T baris akan berupa:
X yaitu sebuah integer yang akan dicek apakah kelipatannya keluar,
Y yaitu sebuah String yang akan menggantikan angka yang merupakan kelipatan dari X.
Baris selanjutnya adalah N

* Constraints :
1 <= T <= 100
1 <= N <= 1000
1 <= X <= 100
Y < 20

* Output Format :
Output 1 sampai N

Sample Input 0
3
3
Aku
5
Capek
15
Praktikum
20

Sample Output 0
1
2
Aku
4
Capek
Aku
7
8
Aku
Capek
11
Aku
13
14
AkuCapekPraktikum
16
17
Aku
19
Capek

* Explanation 0 :
cape ga praktikum?
*/

#include <stdio.h>
#include <string.h>

struct{
    int a;
    char kata[30];
}game[1000];

int main()
{
	int j;
	for(j=0;j!=1;j--)
	{
		int t;
	    scanf("%d", &t);
	    if(t==0)
	    {
	    	return 0;
		}
	    
	    int i;
	    for(i=0;i<t;i++)
	    {
	        scanf("%d", &game[i].a);
	        scanf("%s", game[i].kata);
	    }
	    
	    int n;
	    scanf("%d", &n);
	    
	    int j, tanda;
	    for(i=1;i<=n;i++)
	    {
	        tanda = 0;
	        for(j=0;j<t;j++)
	        {
	            if(i % game[j].a == 0)
	            {
	                printf("%s", game[j].kata);
	                tanda = 1;
	            }
	        }
	        
	        if(tanda == 0)
	        {
	            printf("%d", i);
	        }
	        printf("\n");
	    }
	}   
}
