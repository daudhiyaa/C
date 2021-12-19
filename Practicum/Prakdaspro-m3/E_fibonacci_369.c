/*
Bilangan yang sangat Indah menyebabkan seseorang yang bernama Berry bertanya-tanya dengan pola yang ingin disampaikan. 
Pola tersebut memiliki keunikan yang membuat orang-orang melamun memikirkannya bak kan angka tersebut bisa menghipnotis orang. 
Berry membutuhkan orang-orang yang bisa menemukan pola-pola hipnotis tersebut sehingga bisa dipecahkan. Temukan pola seperti berikut :

0 3 3 6 9 .............

* Input Format :
Baris X merupakan Jumlah Deret yang diinginkan

* Constraints
0 <= X <= 100 
0 <= Hasil <= 10000000

* Output Format
Output berupa deret bilangan yang berjumlah X

Sample Input 0
1
Sample Output 0
0

Sample Input 1
2
Sample Output 1
0 3

Sample Input 2
5
Sample Output 2
0 3 3 6 9

*/

#include <stdio.h>
#define PR (void)printf(
#define SC (void)scanf(

void fibo(int n)
{
	int i, hasil;
	if(n==1)
    {
    	PR"0");
	}
	else
    {
    	PR"0 3 ");
    	int a = 0, b = 3;
    	for(i=0;i<n-2;i++)
    	{	
    		hasil = a + b;
    		a = b;
    		b = hasil;
    		PR"%d ", hasil);
		}
	}
}

int main()
{
    int x;
    SC"%d", &x);
    fibo(x);
	return 0;
}
