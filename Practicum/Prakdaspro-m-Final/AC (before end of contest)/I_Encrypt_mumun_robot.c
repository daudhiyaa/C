/*
Sebelumnya kita tahu bahwa Mumun berteman baik dengan robot luar angkasa. 
Kali ini, masalah terjadi, Xenomorph salah satu alien terkuat meretas pesan yang dikirim Mumun. 
Untuk itu, Mumun mengubah cara dia melakukan enkripsi pada pesan.

* Hint : A != a
Untuk berkomunikasi dengan robot, Robot harus melakukan decrypt pada pesan yang dikirim Mumun. 
Sebaliknya, jika robot membalas pesannya ia harus melakukan encrypt. 
Baik Robot maupun Mumun sama-sama menggunakan N yaitu kode biner empat digit sebagai identitas. 
Pesan yang dikirimkan dienkripsi berdasarkan key K tertentu. 
Ketentuan pesan yang dikirim adalah sebagai berikut:

1. Apabila kodenya bukan merupakan bilangan prima berarti Mumun yang mengirim pesan, maka lakukan decrypt.
2. Apabila kodenya merupakan bilangan prima berarti Robot yang mengirim pesan, maka lakukan encrypt.
3. Pesan akan selesai jika kodenya adalah -1.

* Input Format :
K merupakan key yang akan digunakan untuk encrypt dan decrypt pesan.
N merupakan kode biner. Baris berikutnya merupakan pesan yang dikirimkan. 
Pesan akan berhenti jika N adalah -1.

* Constraints :
0 < K < 1000
0 < N <= 16
20 < panjang string < 10000

* Output Format :
Hasil encrypt maupun decrypt dengan format:
Mumun: <isi pesan>
Robot: <isi pesan>

Sample Input 0
22
0101
Wpad pepzpw zpbj qxhp btbqprp ethpczj?
-1

Sample Output 0
Mumun: Halo apakah kamu bisa membaca pesanku?

Sample Input 1
14
0010
Itlmbdtg lxfnt utbd utbd ltct rt!
0100
Ya, aku dapat membaca pesanmu
-1

Sample Output 1
Mumun: Pastikan semua baik baik saja ya!
Robot: Rt, tdn wtitm fxfutvt ixltgfn
*/

#include <stdio.h>
#include <string.h>
  
void mumun(int k)
{
    char mumun[10000];
    getchar();
    gets(mumun);
    printf("Mumun: ");
    int i;
    for (i = 0; i < strlen(mumun); i++)
    {
        if(mumun[i]>='A' && mumun [i]<='Z')
        {
            if (mumun[i]+(k/2)<=90)
            {
                mumun[i]+=(k/2);
            }
            else if (mumun[i]+(k/2)>=90)
            {
                mumun[i]+=(k/2);
                mumun[i]-=90;
                mumun[i]+=64;
            }
        }
        else if(mumun[i]>='a' && mumun[i]<='z')
        {
            if (mumun[i]+(k/2)<=122)
            {
                mumun[i]+=(k/2);
            }
            else if (mumun[i]+(k/2)>=122)
            {
                mumun[i]+=(k/2);
                mumun[i]-=122;
                mumun[i]+=96;
            }
        }
    }
    printf("%s", mumun);
}

void robot(int k)
{
    char robot[10000];
    getchar();
    gets(robot);
    printf("Robot: ");

    int i;
    for (i = 0; i < strlen(robot); i++)
    {
        if(robot[i]>='A' && robot [i]<='Z')
        {
            if (robot[i]-(k/2)>=65)
            {
                robot[i]-=(k/2);
            }
            else if (robot[i]-(k/2)<=65)
            {
                robot[i]-=(k/2);
                robot[i]+=90;
                robot[i]-=64;
            }
        }
        else if(robot[i]>='a' && robot[i]<='z')
        {
            if (robot[i]-(k/2)>=97)
            {
                robot[i]-=(k/2);
            }
            else if (robot[i]-(k/2)<=97)
            {
                robot[i]-=(k/2);
                robot[i]+=122;
                robot[i]-=96;
            }
        }
    }
    printf("%s", robot);
}

void mumun_ganjil(int k)
{
    char mumun[10000];
    getchar();
    gets(mumun);
    printf("Mumun: ");

    int i;
    for (i = 0; i < strlen(mumun); i++)
    {
        if(mumun[i]>='A' && mumun [i]<='Z')
        {
            if(mumun[i]+(k/2)+32<=122)
            {
                mumun[i]+=(k/2)+32;
            }
            else if (mumun[i]+(k/2)+32>=122)
            {
                mumun[i]+=(k/2)+32;
                mumun[i]-=122;
                mumun[i]+=96;
            }
        }
        else if(mumun[i]>='a' && mumun[i]<='z') 
        {
            if(mumun[i]+(k/2)-31<=90)
            {
                mumun[i]+=(k/2)-31;
            }
            else if (mumun[i]+(k/2)-31>=90)
            {    
                mumun[i]+=(k/2)-31;
                mumun[i]-=90;
                mumun[i]+=64;
            }
        } 
    }
    printf("%s", mumun);
}

void robot_ganjil(int k)
{
    char robot[10000];
    getchar();
    gets(robot);
    printf("Robot: ");

    int i;
    for (i = 0; i < strlen(robot); i++)
    {
        if(robot[i]>='A' && robot[i]<='Z')
        {
            if(robot[i]-(k/2)+31>=97)
            {
                robot[i]=robot[i]-(k/2)+31;
            }
            else if (robot[i]-(k/2)+31<=97)
            {
                robot[i]=robot[i]-(k/2)+31;
                robot[i]+=122;
                robot[i]-=96;
            }
        }
        else if(robot[i]>='a' && robot[i]<='z')
        {
            if (robot[i]-(k/2)-32>=65)
            {
                robot[i]=robot[i]-(k/2)-32;
            }
            else if (robot[i]-(k/2)-32<=65)
            {
                robot[i]=robot[i]-(k/2)-32;
                robot[i]+=90;
                robot[i]-=64;
            }
        }
    }
    printf("%s", robot);
}

int main()
{
    int key, n, ribuan, ratusan, puluhan, satuan, bilangan, angka, stat = 0;
    scanf("%d", &key);
    
    key = key%52;
    
    int i;
    for(i=0;i>=0;i++)
    {
        scanf("%d", &n);
        
        if(n==-1)
        {
            return 0;
        }
        
        ribuan = (n/1000)%10;
        ratusan = (((n/100)%100)%10);
        puluhan = ((((n/10)%1000)%100)%10);
        satuan = ((((n%10000)%1000)%100)%10);
        
        bilangan = (ribuan*2*2*2) + (ratusan*2*2) + (puluhan*2) + satuan;
        if(key%2==0)
        {
            if(bilangan == 2)
            {
                mumun(key);
            }
            else
            {
                for(angka=2; angka<bilangan; angka++)
                {
                    if(bilangan%angka == 0)
                    {
                        stat = 0;
                        break;
                    }
                    else
                    {
                        stat = 1;
                    }
                }
                   
                if(stat == 0)
                {
                    robot(key);
                }
                else
                {
                    mumun(key);
                }
            }
        }
        else if(key%2!=0)
        {
            if(bilangan == 2)
            {
                mumun_ganjil(key);
            }
            else
            {
                for(angka=2; angka<bilangan; angka++)
                {
                    if(bilangan%angka == 0)
                    {
                        stat = 0;
                        break;
                    }
                    else
                    {
                        stat = 1;
                    }
                }
                   
                if(stat == 0)
                {
                    robot_ganjil(key);
                }
                else
                {
                    mumun_ganjil(key);
                }
            }
        }
        printf("\n");
    }
}
