/*
Evin adalah seorang pencari jalan handal jika diberikan suatu peta. Teman Evin, Sherlock Kudo, ingin menantang Evin

Sherlock Kudo memberikan peta sebagai berikut
1	2	4	7	11	...
3	5	8	12	...
6	9	13	...
10	14	...
15	...
...

Dengan ... melambangkan seterusnya, kotak berisi angka 1 kita anggap sebagai titik (1,1). 
titik sesuai dengan bidang kartesian (jika ke kanan maka x + 1, jika ke bawah maka y+1)

Adapun tantangan dari Sherlock Kudo yakni Setiap melewati suatu kotak, 
Evin akan menjumlahkan bilangan yang ada di kotak yang dilewati dengan kotak sebelum - sebelumnya. 
Jika Evin melewati jalan yang jumlahnya sudah pernah dilewati, 
maka ia tidak akan menganggap jalan tersebut jalan baru,
dan Evin hanya dapat bergerak ke kanan dan ke bawah saja.

Evin pun kebingungan, tetapi kamu adalah teman baik Evin, 
ayo bantu Evin dalam mencari tahu ada berapa jalan yang ada dari titik (X1, Y1) ke (X2, Y2)

* Input Format :
akan diberikan 4 bilangan yakni (X1, Y1) dan (X2, Y2)  

* Constraints :
1 <= X1 <= X2 <= 10^9
1 <= Y1 <= Y2 <= 10^9 

* Output Format :
sebuah bilangan yang menyatakan banyaknya jalan

Sample Input 0
3 5 4 10
Sample Output 0
6

Sample Input 1
15 16 30 35
Sample Output 1
286

*/

#include <stdio.h>
int main()
{
	long long x1, y1, x2, y2, banyak_cara;
	scanf("%lld%lld%lld%lld", &x1, &y1, &x2, &y2);
	
	banyak_cara = (x2-x1) * (y2-y1) + 1;
	printf("%lld", banyak_cara);
	return 0;
}


