/*
Perusahaan A merupakan perusahaan yang sangat handal dalam pembuatan website. 
Perusahaan A memiliki banyak karyawan dan Tim Pengembang. 
Suatu Ketika ada proyek yang dihandle oleh Tim Udin untuk menyelesaikan website kota kotok.
Kota kotok seperti diketahui memiliki banyak kekayaan serta ingin kemewahan di dalam websitenya. 
Setelah Tim Udin menyelesaikan pembuatan website tersebut. 
Pejabat Kota Kotok sangat mengapresiasi kinerja Tim Udin dalam pembuatan website,
sehingga Perusahaan A menjadi Vendor tetap di Kota Kotok. Perusahaan A sangat bangga dengan kinerja karyawannya. 
Oleh karena itu, Perusahaan A ingin memberikan ke pada karyawannya. 
Perusahaan A memberikan syarat bahwa anggota Tim Udin bebas memilih hadiah manapun, 
satu anggota hanya bisa satu hadiah, tapi jika digabungkan semua pilihan maka anggota 
harus membentuk urutan yang tidak terputus. Maksudnya adalah jika anggota memilih hadiah ke 2 
dan tidak ada anggota memilih hadiah pertama, anggota lainnya pasti memilih hadiah ke 3, ke 4 
dan seterusnya tanpa terputus sampai hadiah ke-(N+1).

Anggota Tim Udin mengetahui bahwa Perusahaan A menyiapkan hadiah dengan nilai yang berbeda beda. 
Anggota Tim Udin sepakat untuk memilih hadiah sehingga apabila ditotalkan menghasilkan nilai yang maksimal.

Anggota Tim Udin kebingunga, meminta bantuan Anda sang programmer handal. 
Sebagai informasi Anggota Tim Udin pasti akan mendapatkan hadiahnya walaupun hadiahnya tidak disukai. 
Karena Anggota Tim Udin memegang teguh norma-norma kesopanan.

* Input Format : 
Ada dua buah bilangan di baris pertama yaitu M, N. 
Dilanjutkan dibaris kedua meruapakan M Buah Bilangan yang merupakan nilai dari hadiah yang diberikan perusahaan A dari hadiah pertama sampai ke N.

* Constraints :
1 <= M <= 100.000
1 <= N <= M
Nilai setiap hadiah adalah antara -100.000 sampai 100.000 (mungkin ada hadiah yang malah rugi jika dipilih)

* Output Format :
Sebuah bilangan bulat yang meruapakan nilai total maksimal yang dapat Anggota Tim Udin Raih.

Sample Input 0
10 2
4 13 34 123 5 1 2 3 5 1

Sample Output 0
157

*/
#include <stdio.h>

int main()
{
	int m, n, x;
	scanf("%d", &m); // banyak bilangan
	scanf("%d", &n); // banyak penjumlahan

	int arr[m]; //array
	
	for(x=0;x<m;x++)
	{
		scanf("%d", &arr[x]); //input array
	}
	
	int y = m - n + 1; //pola banyak penjumlahan
	int k = 0; //
	int a; //cuman buat for
	int i = 0; //paling tinggi
	int hasil = 0; //hasil
	int z; //cuman buat for
	
	for(a=0;a<y;a++)
	{
		for(z=0;z<n;z++)
		{
			hasil = hasil + arr[k];	
			k++;
			/*
			bakal ke loop nilai hasilnya
			1. 0 + arr1
			2. (0 + arr1) + arr2 [hasil = 0 + arr1, didapatkan dari hasil = hasil + arr[k] sebelumnya
			dst (nilai k bertambah trs [k++]
			*/
		}
		
		if(hasil >= i)
		{
			i = hasil;
		}
	
		hasil = 0;
		k = k - (n - 1);
		z = 0; //balik lagi klo g memenuhi if trs compare siapa yg paling gede
	}
	
	printf("%d", i);
	return 0;
}
