/*
Di sebuah sekolah bernama Hamparan Nyamuk Terkapar, atau sering disebut HNT, hiduplah seorang pelajar bernama Bdiqz. 
Bdiqz adalah siswa yang sangat percaya diri dan tak tahu malu. Kemanapun dia pergi, dimanapun dia berada, 
kapanpun dia mau, dia selalu mengkumandangkan "Akun Ganz!" yang mana ungkapan itu semacam jargon yang menyatakan dirinya "tampan", 
setidaknya dalam perspektifnya begitu.

Namun, akibat dia selalu meneriakkan jargonnya tersebut, ia menjadi tidak fokus belajar dan menuntut ilmu, 
sehingga nilainya sangat hancur dan terancam tidak lulus. Bdiqz sangat tidak ingin tidak lulus, 
karena itu dapat menyebabkan dia tidak dapat mengkumandangkan jargonnya di jenjang pendidikan yang lebih tinggi.

Beruntung bagi Bdiqz, sekolah HNT mengadakan sebuah sayembara bagi siswa yang terancam tidak lulus. 
Yang berhasil memenangkan sayembara akan diluluskan secara langsung tanpa mempedulikan nilainya. 
Sayembara ini sangat simpel, yaitu barangsiapa yang dapat menghitung berapa kemungkinan jumlah angka cantik dengan n-digit , dinyatakan menang.

Angka cantik dengan n-digit sendiri adalah angka yang tersusun hanya dari dua angka, yaitu 6 dan 9, 
dimana untuk tiap kemungkinannya, tidak ada tiga angka sama yang berjejeran.

Bantulah Bdiqz untuk menghitung berapa kemungkinan angka cantik dengan n-digit yang dapat disusun oleh angka 6 dan 9

* Hint: gunakan fungsi fungsi dalam math.h seperti sqrt, round, dan pow

* Input Format :
Sebuah bilangan n yang menyatakan berapa digit angka cantik yang ingin dibentuk

* Constraints :
0 < n < 51

* Output Format : 
Sebuah angka yang menyatakan berapa banyak kemungkinan angka cantik dengan n-digit yang dapat dibentuk. 
Outputkan pula sebuah pesan singkat "Bdiqz tidak ganz!" tanpa tanda petik, untuk mengingatkan Bdiqz

Sample Input 0 
2
Sample Output 0
4
Bdiqz tidak ganz!

* Explanation 0 :
Terdapat 4 kemungkinan bilangan 2 digit yang dapat dibentuk angka 6 dan 9, yaitu: 69, 96, 66, 99

Sample Input 1 
3
Sample Output 1 
6
Bdiqz tidak ganz!

* Explanation 1 :
Terdapat 6 kemungkinan bilangan 3 digit yang dapat dibentuk angka 6 dan 9, yaitu: 669, 696, 966, 699, 969, 996
*/

#include <stdio.h>
#include <math.h>
//banyak peluang bil cantik 6 9
int main(){
    long n, m, hasil;
    double rumus1;
    scanf("%ld", &n);
    m = n + 1;
     
    rumus1 = (1 + sqrt(5)) / 2;
    hasil = 2*round(pow(rumus1, m) / sqrt(5)); // hint pake sqrt, pow, round 
     
    printf("%ld\n", hasil);
    printf("Bdiqz tidak ganz!");
  return 0;
}
