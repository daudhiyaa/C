/*
Kuliah sudah kembali offline dan Kadigas pun bersama teman-temannya akhirnya bisa ke kampus tercinta untuk pertama kalinya. 
Kemudian sesampai di kampus, Kadigas, Zhard, dan beberapa teman lainnya saling berkenalan satu sama lain secara langsung.
Namun, ternyata ada beberapa temannya yang tidak hadir pada waktu itu. Oleh karena itu, agar lebih mudah berkenalan, 
Zhard mempunyai ide untuk mengumpulkan KTM semua mahasiswa. Setelah dikumpulkan, Zhard akan menginput data teman-temannya.

Kemudian Zhard mempunyai ide untuk bermain tebak-tebakan sambil mengenal teman-temannya satu sama lain. 
Zhard akan menyebutkan salah satu atribut data kemudian yang lain akan menebak siapa orangnya dan
menyebutkan semua identitas orang tersebut. Kebetulan Kadigas belum terlalu menghafal data teman-temannya. 
Bantulah Kadigas agar dia bisa menyebutkan data teman-temannya dengan benar.

* Input Format :
Baris pertama adalah N yang merupakan banyaknya data
N baris berikutnya berisi data berupa NRP dan Nama, angkatan, dan umur
Baris terakhir adalah salah satu atribut dari data KTM

* Constraints :
N < 50

* Output Format :
Jika terdapat data yang sesuai dengan input pencarian, maka tampilkan seluruh datanya

Sample Input 0
2
0021272311930022 Yabay Yatoy
2021 20 Konoha
0053272311930100 Ole Out
3153 190 Wakanda
Konoha

Sample Output 0
Nama:        Yabay Yatoy
NRP :        0021272311930022
Angkatan:    2021
Umur:        20
Asal:        Konoha

Sample Input 1
4
0021272311930022 Koeman Out
2021 20 Konoha
0052272311930120 Ole Stay
3152 190 Suna
0019272311930045 Yabay Stay
2019 190 Kumo
0053272311930100 Ole Out
3153 190 Wakanda
0052272311930120

Sample Output 1
Nama:        Ole Stay
NRP :        0052272311930120
Angkatan:    3152
Umur:        190
Asal:        Suna

*/

#include <stdio.h>
#include <string.h>

struct Mahasiswa 
{
    char nama[100];
    char nrp[20];
    char ang[10];
    char umur[5];
    char asal[50];
}mhs[50];

int main()
{
    int n, i;
    scanf("%d", &n);
    
    for(i=0;i<n;i++)
    {
        scanf("%s",mhs[i].nrp);
        gets(mhs[i].nama);
        scanf("%s",mhs[i].ang);
        scanf("%s",mhs[i].umur);
        scanf("%s",mhs[i].asal);
    }
    
    char input[100];
    scanf("%s", input);
    
    for(i=0;i<n;i++)
    {
    	if((strcmp(mhs[i].nrp, input)==0) || 
		(strcmp(mhs[i].nama, input)==0) || 
		(strcmp(mhs[i].ang, input)==0) || 
		(strcmp(mhs[i].umur, input)==0) || 
		(strcmp(mhs[i].asal, input)==0))
	    {
	        printf("Nama:       %s\n", mhs[i].nama);
	        printf("NRP :        %s\n", mhs[i].nrp);
	        printf("Angkatan:    %s\n", mhs[i].ang);
	        printf("Umur:        %s\n", mhs[i].umur);
	        printf("Asal:        %s\n", mhs[i].asal);
	    }
	}
    
}

