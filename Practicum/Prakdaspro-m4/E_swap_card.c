/*
Diberikan input bilangan bulat t. t merupakan jumlah kartu pada sebuah tumpukan kartu. 
Kartu yang pertama dimasukan akan menjadi tumpukan teratas, kemudian diikutti oleh kartu selanjutnya. 
Setiap kartu yang ada memiliki nama berupa s dan bilangan bulat a yang menunjukan poin serang. 
Dari tumpukan kartu tersebut memungkinkan untuk menukar kartu pada 2 posisi yang berbeda.

* Input Format :
Baris pertama berupa bilangan bulat t menunjukan jumlah kartu.
Untuk masing-masing t dibutuhkan input berupa 2 baris data yaitu string s dan bilangan bulat a.
Kemudian baris-baris selanjutnya terdiri dari perintah perintah berikut

s -> perintah untuk melakukan swap. Baris selanjutnya berisi integer x dan y yang menunjukan posisi kartu yang ingin di swap.
p -> perintah untuk mencetak semua tumpukan kartu dari atas ke bawah.
x -> perintah untuk mengakhiri program.

* Constraints :
1<=t<=1000
perintah = {s,p,x}
1<=x,y<1000

Nilai attribut pada kartu:
panjang string nama < 1000
nilai poin serang <= 100000

* Output Format :
format keluaran untuk setiap kartu pada perintah p adalah 'nama poinserang'
jika x atau y melebihi index yang ada maka keluarkan "Index diluar batas\n"
jika x dan y sama maka keluarkan "Index tidak boleh sama\n"

Sample Input 0
2
Blue Eyes
3000
Red Eyes
2400
p
s
0 1
p
s
1 0
p
x

Sample Output 0
Blue Eyes 3000
Red Eyes 2400
Red Eyes 2400
Blue Eyes 3000
Blue Eyes 3000
Red Eyes 2400

Sample Input 1
1
White Night
3000
p
s
0 0
s
0 1
x

Sample Output 1
White Night 3000
Index tidak boleh sama
Index diluar batas
*/

#include <stdio.h>
#include <string.h>

struct {
    char nama[1000];
    char atk[100000];
}kartu[1000];
    

int main()
{
    int t, i, j;
    char awal;
    scanf("%d", &t);

    
    for (i=0;i<t;i++)
    {
        scanf("%c", &awal);
        gets(kartu[i].nama);
        scanf("%s", kartu[i].atk);
    }
    
    int x, y;
    char temp[1000];
    char tem[100000];
    char perintah;
    for(i=0;i>=0;i++)
    {
        scanf("%c", &awal);
        scanf("%c", &perintah);
        if(perintah == 'p')
        {
            for(j=0;j<t;j++)
            {
                printf("%s %s\n", kartu[j].nama, kartu[j].atk);
            }
        }
        else if(perintah == 's')
        {
            scanf("%d%d", &x, &y);
            if(x==y)
            {
                printf("Index tidak boleh sama\n");
            }
            else if(x>t-1 || y>t-1)
            {
                printf("Index diluar batas\n");
            }
            else
            {
                strcpy(temp, kartu[x].nama);
                strcpy(kartu[x].nama, kartu[y].nama);
                strcpy(kartu[y].nama, temp);
                strcpy(tem, kartu[x].atk);
                strcpy(kartu[x].atk, kartu[y].atk);
                strcpy(kartu[y].atk, tem);
            }
        }
        else if(perintah == 'x')
        {
            return 0;
        }
    }
    
}
