/*
Sum and Average using array

Sample Input :
5
Score number 1 : 2
Score number 2 : 6.7
Score number 3 : 8
Score number 4 : 4
Score number 5 : 1.9

Sample Output :
Total = 22.60
Average = 4.52

*/

#include <stdio.h>

int main(){ 
	int n;
	scanf("%d", &n);
	float nilai[n], jumlah=0, rata;
	
	for (int i=1;i<=n;i++) {
		printf("Score number %d : ", i);
		scanf("%f", &nilai[i]);
		jumlah += nilai[i];
	}
	
	rata = jumlah/n;
	printf("\nTotal = %.2f", jumlah);
	printf("\nAverage = %.2f", rata);
	getch();
}
