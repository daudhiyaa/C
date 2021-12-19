/*
Evin kesal dengan sherloc kudo karena sering memberikan test, ia pun ingin membalas sherloc kudo! 
ia memeberikan soal kepada sherloc kudo sebagai berikut:

kamu adalah seorang raja, sebagai raja kamu hanya bisa melihat kondisi peperangan hanya melalui laporan

Karena semasa menjadi pangeran kamu pernah belajar coding, maka para mentri memohon untuk membuatkan program 
agar bisa memprediksi hasil dari battle sebelum mengirim pasukan.

Dari battle-battle sebelumnya kamu menemukan pola dari pertarungan, di awal pertarungan 
monster selalu menyerang semua pasukan yang kamu kirim, kemudian jika N pasukan sudah menyerang, 
monster itu baru menyerang lagi pasukan mu secara menyeluruh. (seperti turn base game) 
Di dalam peperangan juga ada sistem armor, armor bersifat mengurangi damage yang didapat. armor tidak akan pernah hancur.

Karena sherloc kudo tidak pandai menjawab soal, bantulah sherloc kudo untuk menjawab soalnya!

* Contoh turn jika terdapat 2 pahlawan:
1. Monster menyerang pahlawan, pahlawan 1 menyerang monster
2. pahlawan 2 menyerang monster
3. monster menyerang pahlawan, pahlawan 1 menyerang monster
4. pahlawan 2 menyerang monster
dst

* Contoh turn jika terdapat 3 pahlawan:
1. Monster menyerang pahlawan, pahlawan 1 menyerang monster
2. pahlawan 2 menyerang monster
3. pahlawan 3 menyerang monster
4. monster menyerang pahlawan, pahlawan 1 menyerang monster
5. pahlawan 2 menyerang monster
dst

* Input Format :
di baris pertama ada 2 bilangan bulat N & T yang menyatakan jumlah pasukan dan turn yang dicari
kemudian ada 3 bilangan bulat yang menyatakan health, attack, dan armor dari monster.
Kemudian ada 4 bilangan bulat yang menyatakan nama, health, attack, dan armor dari tiap-tiap pasukan yang kamu kirim.

* Constraints :
0 < N < 1000000000
0 < T < 1000000000
Nama pahlawan dipastikan 1 karakter, health, attack dan armor muat dalam integer

* Output Format :
Di Akhir battle print format seperti contoh output. untuk player print "Alive" jika masih hidup, dan "Dead" jika sudah mati

Sample Input 0
5 5
10 11 1
b 100 2 1
p 100 2 1
p 100 3 1
f 100 5 1
M 99999 5 1

Sample Output 0
Monster Status
health = 0

Party Status
========================
Name: b
Attack: 2
Armor: 1
Status: Alive
========================
Name: p
Attack: 2
Armor: 1
Status: Alive
========================
Name: p
Attack: 3
Armor: 1
Status: Alive
========================
Name: f
Attack: 5
Armor: 1
Status: Alive
========================
Name: M
Attack: 5
Armor: 1
Status: Alive

*/

#include <stdio.h>

struct Monster{
    int health;
    int atk;
    int armor;
}monster;

struct Pahlawan{
    char nama;
    int health;
    int atk;
    int armor;
};

int main()
{
    int n, T, i, j;
    scanf("%d%d", &n, &T);
    
    scanf("%d%d%d", &monster.health, &monster.atk, &monster.armor);
    
    struct Pahlawan hero[n];
    
    for(i=0;i<n;i++)
    {
    	getchar();
        scanf("%c%d%d%d", &hero[i].nama, &hero[i].health, &hero[i].atk, &hero[i].armor);
    }
    
    for (i=0;T!=0;i++)
    {
        for(j=0; j<n; j++)
        {
            if (monster.atk>hero[j].armor) //monster menyerang pasukan satu satu
            {
                hero[j].health-=monster.atk;
                hero[j].health+=hero[j].armor;
            }
        }

        if (hero[0].health>0 && hero[0].atk>monster.armor) //pasukan pertama menyerang monster
        {
            monster.health-=hero[0].atk;
            monster.health+=monster.armor;
        }

        T--; //Turn berkurang satu
        if (T==0)
        {
            break;
        }

        for(j=1; j<n; j++) //mulai dari pasukan kedua menyerang monster
        {
            if (hero[j].health>0 && hero[j].atk>monster.armor)
            {
            monster.health-=hero[j].atk;
            monster.health+=monster.armor;
            }
            T--; //Turn berkurang satu
            if (T==0)
            {
              break;
            }
        }
        if(T==0)
            {
                break;
            }
    }
    if(monster.health<0)
    {
        monster.health=0;
    }
    
    printf("Monster Status\n");
    printf("health = %d\n\n", monster.health);
    printf("Party Status\n");
    
    for(i=0;i<n;i++)
    {
        printf("========================\n");
        printf("Name: %c\n", hero[i].nama);
        printf("Attack: %d\n", hero[i].atk);
        printf("Armor: %d\n", hero[i].armor);
        if(hero[i].health > 0)
        {
            printf("Status: Alive\n");
        }
        else
        {
            printf("Status: Dead\n");
        }    
    }
}
