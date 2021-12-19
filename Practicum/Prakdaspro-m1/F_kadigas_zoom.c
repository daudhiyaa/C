/*
Kadigas adalah seorang mahasiswa baru Teknik Informatika di Negara Wakanda yang mempunyai hobi ngoding 
dan juga mempunyai keinginan untuk menambah teman. Pada suatu hari, dia mendapatkan undangan dari Zhard, 
teman sekelasnya, untuk datang ke Zoom agar bisa menambah relasi.

Pada Zoom tersebut terdapat passcode yang terdiri dari 3 karakter dan semuanya huruf besar. 
Kemudian, ketika memasuki Zoom, terdapat 2 breakout room, yaitu room A dan room B. 
Kadigas pun terkejut, lalu menanyakan kepada Zhard kenapa dibagi menjadi 2 room. 
Zhard pun menjelaskan bahwa untuk memasuki breakout room yang benar, 
maka semua orang harus menjumlahkan masing-masing karakter dalam passcode dengan tanggal lahir masing-masing 
lalu masuk sesuai aturan yang dituliskan di bawah.

Karena Kadigas adalah mahasiswa Teknik Informatika dan dia hobi ngoding, 
maka dia membuat program agar bisa masuk ke breakout room. Bantulah Kadigas untuk membuat program tersebut.

* Hint: Tabel ASCII

* Input Format :
Tiga buah karakter huruf besar dan sebuah angka X yang merupakan tanggal lahir

* Constraints :
0 < X < 32

* Output Format :
Jika hasil penjumlahan semua karakter merupakan huruf besar / huruf kecil, maka cetak "Kadigas Masuk Room A" tanpa tanda petik.
Namun, jika ada satu atau lebih karakter hasil penjumlahan bukan merupakan huruf, maka cetak "Kadigas Masuk Room B" tanpa tanda petik.

Sample Input 0
KDG
15
Sample Output 0
Kadigas Masuk Room A

* Explanation 0 :
Karena semua karakter passcode setelah dijumlahkan merupakan huruf, maka Kadigas Masuk Room A

Sample Input 1
ABZ
1
Sample Output 1
Kadigas Masuk Room B

*/
#include <stdio.h>

int main()
{
	int born;
	char x, y, z, x1, y1, z1;
	
	scanf("%c%c%c\n", &x, &y, &z);
	scanf("%d", &born);
	
	x1 = x + born;
	y1 = y + born;
	z1 = z + born;
	
	if (x1<'a' && x1>'Z'){
		printf("Kadigas Masuk Room B");
	}
	else if (y1<'a' && y1>'Z'){
		printf("Kadigas Masuk Room B");
	}
	else if (z1<'a' && z1>'Z'){
		printf("Kadigas Masuk Room B");
	}
	else{
		printf("Kadigas Masuk Room A");
	}
	
	return 0;
}


