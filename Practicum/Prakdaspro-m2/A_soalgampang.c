/*
Soal ini sungguh straight forward, tinggal print jumlah dari bilangan yang berada diantara i dan j 

* Input Format :
Baris pertama akan diberikan N yaitu jumlah test case yang ada
Baris kedua akan diberikan M yaitu banyak elemen pada array
Baris ketiga akan diberikan A1, A2, A3, ..., AM
setelah itu diikuti baris sebanyak N dengan format i dan j

* Constraints :
1 <= N <= 50
1 <= M <= 25
1 <= Ai <= 10^9
1 <= i <= j <= M

* Output Format :
baris yang melambangkan penjumlahan dari indeks ke i sampai j

Sample Input 0
5
5
1 2 3 4 5
1 1
1 2
1 3
1 4
1 5

Sample Output 0
1
3
6
10
15

*/

#include <stdio.h>
//soal gampang
int main()
{
	long n, m;
	scanf("%ld", &n);
	scanf("%ld", &m);
	
	long A[m];
	long x;
	for(x=0;x<m;x++)
	{
		scanf("%ld", &A[x]);
	}
	
	long B[m];
	long C[m];
	
	long i;
	for(i=0;i<n;i++)
	{
		scanf("%ld", &B[i]);
		scanf("%ld", &C[i]);
	}
	
	long a, b, c, hasil;
	for(a=0;a<n;a++)
	{
		c = C[a];
		b = B[a] - 1;
		hasil = 0;
		 
		long d;
		for(d=b;d<c;d++)
		{
			hasil = hasil + A[d];
		}
		printf("%ld\n", hasil);
	}
	return 0;
}
