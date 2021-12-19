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
