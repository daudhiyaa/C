/*
Udin merupakan seorang bajak laut yang suka tersesat di daratan. Udin merupakan anak dari ibu seorang perempuan. 
Udin juga orang yang sangat handal dalam mencari bilangan-bilangan yang hilang pada bilangan sudoku. 
Udin merasa kebingungan ternyata dia punya banyak bilangan tetapi dia ingin mencari rata-rata dari bilangan rendah dan tinggi. 
Bantulah udin untuk mewujudkan mimpinya mencari rata-rata tersebut.

* Input Format :
Diberikan masukkan berupa A, B, C, D berupa sebuah bilangan integer sembarang.

* Constraints :
0 <= A,B,C,D <= 100000

* Output Format :
Output berupa angka rata-rata terendah dijumlahkan dengan tertinggi.

Sample Input 0
1 2 3 4
Sample Output 0
2.5

Sample Input 1
8 5 9 1
Sample Output 1
5.0

*/
#include <stdio.h>

int main(){
  int a, b, c, d;
  float min, max, rata; 
  scanf("%d%d%d%d", &a, &b, &c, &d); //salah di if else nya
  
  if (a>=b && a>=c && a>=d)
  {
  	max = a; 
  } 
  else if (b>=a && b>=c && b>=d)
  {
  	max = b;
  } 
  else if (c>=a && c>=b && c>=d)
  {
  	max = c;
  }
  else if(d>=a && d>=b && d>=c)
  {
  	max = d;
  }
  
  if (a<=b && a<=c && a<=d)
  {
  	min = a;
  }
  else if (b<=a && b<=c && b<=d)
  {
  	min = b;
  } 
  else if (c<=a && c<=b && c<=d)
  {
  	min = c;
  }
  else if (d<=a && d<=b && d<=c)
  {
  	min = d;
  }
  
  rata = (min + max) / 2;
  printf("%.1f", rata);
  
  return 0;
}



