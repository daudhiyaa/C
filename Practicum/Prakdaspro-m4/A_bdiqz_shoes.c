/*
Setelah kemarin sukses membuka ladang padi, Bdikz menjadi sultan Mojokerto dan memutuskan untuk membuka sebuah toko sepatu. 
Ia membeli supply sepatu dari toko kawan karibnya, yaitu 202 Shoes.

Pemilik 202 Shoes agak kesulitan dalam menuliskan sesuatu, sehingga ketika dia mengirimkan list supply sepatu, 
listnya agak kurang jelas, tetapi berpola. Setiap list yang dikirim, pasti berisi huruf-huruf random, 
tetapi di dalamnya terdapat angka-angka yang menunjukkan ukuran sepatu. Untuk setiap listnya, 
pemilik 202 Shoes selalu ingat untuk memberi keterangan kanan atau kirinya.

Sebagi contoh, ADJKYU46HHGJASAGW R. Dari list tersebut, dapat diterjemahkan bahwa sebuah Sepatu kanan berukuran 46 telah dikirim.

Tentunya akan sangat menghabiskan waktu apabila sepatu yang dikirim banyak dan harus diterjemahkan satu-satu. 
Oleh karena itu, bantulah Bdiqz menghitung total jumlah pasangan sepatu yang dapat dijual dari seluruh supply dari 202 Shoes.

Pasangan sepatu yang dapat dijual sendiri adalah dua sepatu dengan ukuran sama, tetapi 1 kiri, 1 kanan.

Jika ada setidaknya 1 pasangan sepatu, maka outputkan jumlah pasangan sepatu yang bisa dijual. 
Jika tidak ada satupun pasangan sepatu yang dapat dijual, outputkan "Ini, apa, itu, apa, gabisa jual", dengan \n dan tanpa tanda petik.

* Input Format :
Baris pertama berisi sebuah bilangan N, menyatakan banyaknya sepatu yang akan dikirim.
N baris berikutnya, berisi sebuah paket tulisan dengan format : KODESEPATU JENIS, 
yang mana KODESEPATU adalah sebuah string random dan JENIS hanya berkemungkinan R (kanan) atau L (kiri).
Untuk setiap KODESEPATU, dipastikan terdapat sebuah bilangan U, yang menyatakan ukuran sepatu tersebut.

* Constraints :
2 <= N <= 100
1 <= KODESEPATU <= 300
0 <= U <= 1000
 
* Output Format :
Jika setidaknya ada 1 pasangan sepatu, outputkan total jumlah pasangan sepatu.
Jika tidak, outputkan : "Ini, apa, itu, apa, gabisa jual", dengan \n dan tanpa tanda petik.

Sample Input 0
5
RgaYAJAajsa4aPQLjaU7 L
yahA4amskKAKSnajUA7 R
YAMNAFagdjDil0awAHAJDKnaq8 R
raNDalsWPALAMqwytuwqpAAJ7 R
alAKSNJDNASMSN3ALMSDKSAN0 L

Sample Output 0
1

* Explanation 0 :
Dapat dilihat bahwa sepatu pertama dan sepatu kedua dapat membentuk 1 pasangan, sisanya tidak bisa karena tidak memiliki pasangan.

Sample Input 1
5
RgaYAJAajsa4aPQLjaU6 L
yahA4amskKAKSnajUA7 R
YAMNAFagdjDil0awAHAJDKnaq8 R
raNDalsWPALAMqwytuwqpAAJ7 R
alAKSNJDNASMSN3ALMSDKSAN0 L

Sample Output 1
Ini, apa, itu, apa, gabisa jual

* Explanation 1 :
Karena tidak ada pasangan sepatu dengan ukuran sama, maka tidak ada yang bisa dijual.
*/

#include <stdio.h>
#include <string.h>

struct{
    char ukuran[300];
    char kode;
    int pasangan;
}sepatu[1000];

int main()
{
    char input[1000];
    int t, i, j;
    
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%s %c", input, &sepatu[i].kode);
        sepatu[i].pasangan = 0;
		
		int length = strlen(input);
        for(j=0;j<length;j++)
        {
            if(input[j] < 58 && input[j] > 47)
            {
                strncat(sepatu[i].ukuran, &input[j], 1);
            }
        }
    }
    
    int hasil = 0; 

    for(i=0;i<t;i++)
    {
        for(j=i+1;j<t;j++)
        {
            if(strcmp(sepatu[i].ukuran, sepatu[j].ukuran)==0 && sepatu[i].pasangan==0 && sepatu[j].pasangan==0)
            {
                if(sepatu[i].kode == 'R' && sepatu[j].kode == 'L')
                {
                    sepatu[j].pasangan = 1;
                    sepatu[i].pasangan = 1;
                    hasil++;    
                }
                else if(sepatu[i].kode == 'L' && sepatu[j].kode == 'R')
                {
                    sepatu[j].pasangan = 1;
                    sepatu[i].pasangan = 1;
                    hasil++;
                }
            }
        }
    }
    
    if(hasil==0)
    {
        printf("Ini, apa, itu, apa, gabisa jual\n");
    }
    else
    {
        printf("%d", hasil);
    }
    return 0;
}
