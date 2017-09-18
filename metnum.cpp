/* Nama		: Nurul Af'Idah
   Kelas		: SIE-A
   NIM		: 3411151008
*/

#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<math.h>

int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
int pangkat(int a, int b);
void Fx(int a, int b);
void utama();

int main(){
	int a,b,pilih,hasil;

   utama:
   utama();
   printf("\n\n\t Masukkan Pilihan : "); scanf("%d", &pilih);
	switch(pilih){
	case 1:
   	system("cls");
		printf("---------------OPERASI PENJUMLAHAN----------------");
		printf("\n\nMasukkan bilangan 1 : "); scanf("%d", &a);
		printf("\nMasukkan bilangan 2 : "); scanf("%d", &b);
		hasil = tambah(a,b);
		printf("\n%d + %d = %d",a,b,hasil);

      getch();
      system("cls");
      goto utama;

    case 2:
   	system("cls");
		printf("---------------OPERASI PENGURANGAN----------------");
		printf("\n\nMasukkan bilangan 1 : "); scanf("%d", &a);
		printf("\nMasukkan bilangan 2 : "); scanf("%d", &b);
		hasil = kurang(a,b);
		printf("\n%d - %d = %d",a,b,hasil);

      getch();
      system("cls");
      goto utama;

    case 3:
   	system("cls");
		printf("---------------OPERASI PERKALIAN----------------");
		printf("\n\nMasukkan bilangan 1 : "); scanf("%d", &a);
		printf("\nMasukkan bilangan 2 : "); scanf("%d", &b);
		hasil = kali(a,b);
		printf("\n%d * %d = %d",a,b,hasil);

      getch();
      system("cls");
      goto utama;

    case 4:
   	system("cls");
		printf("---------------OPERASI PANGKAT----------------");
		printf("\n\nMasukkan bilangan 1 : "); scanf("%d", &a);
		printf("\nMasukkan bilangan pangkat : "); scanf("%d", &b);
		hasil = pangkat(a,b);

      getch();
      system("cls");
      goto utama;

    case 5:
   	system("cls");
		printf("---------------OPERASI FUNGSI----------------");
		printf("\n\nMasukkan bilangan 1 : "); scanf("%d", &a);
		printf("\nMasukkan bilangan 2 : "); scanf("%d", &b);
      Fx(a,b);

      getch();
      system("cls");
      goto utama;

    case 6:
    	system("cls");
    	printf("TERIMAKASIH");
      getch();
    	return 0;
      break;
      default: printf("\n\t\tPilihan anda tidak diterima!!!");

      getch();
      system("cls");
      goto utama;

    }
}

void utama(){
	int pilih;

	printf("--------------------SELAMAT DATANG--------------------");
	printf("\n-----------------TUGAS METODE NUMERIK-----------------");
	printf("\t\n\n1. Tambah");
	printf("\t\n2. Kurang");
	printf("\t\n3. Kali");
	printf("\t\n4. Pangkat");
	printf("\t\n5. F(x)");
   printf("\t\n6. Keluar");
}

int tambah(int a, int b){
	int hasil;

	hasil = a + b;
	return(hasil);
}

int kurang(int a, int b){
	int hasil;

	hasil = a - b;
	return(hasil);
}

int kali(int a, int b){
	int hasil;

	hasil = a * b;
	return(hasil);
}

int pangkat(int a, int b){
	int hasil;

	hasil = pow(a,b);
	printf("\n%d ^ %d = %d", a, b, hasil);
}

void Fx(int a, int b){
	int q,hasil;

	for(q=a;q<=b;q++){
		hasil = (2*(q*q)) - ((3*q) + 1);
      printf("\n2x^2-3x+1 : %d", hasil);
	}
}
