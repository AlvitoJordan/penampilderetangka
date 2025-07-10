#include<stdio.h> /* singkatan dari Standard Input Output yang berfungsi untuk menginput dan menampilkan sesuatu */
#include<conio.h> /* File header yang menampilkan hasil antarmuka kepada user */
#include<math.h> /* File header yang berfungsi untuk operasi matematika seperti sqrt(), pow(), sin(), cos(), dan tan() */
#include<stdlib.h> /* File header yang berfungsi untuk clear screen, operasi pembanding, dan operasi konversi seperti max(), min(), dan lain sebagainya */
#include<unistd.h> /* File header yang menyediakan akses ke API sistem operasi POSIX seperti sleep */
#include<windows.h> /* File header yang mendefinisikan sejumlah besar fungsi khusus Windows yang dapat digunakan di C seperti gotoxy*/
#include<string.h> /* File header yang berfungsi untuk melakukan manipulasi string */

void ganjil(int n){
	for (int i=1;i<=n*2;i++){
		if(i%2!=0){
			printf("%d ",i);
		}
	}
}
	
void genap(int n){
	for (int i=2;i<=n*2;i++){
			if(i%2==0){
			printf("%d ",i);	
		}
	}
}

void kelipatan(int a, int b){
	for(int i=1;i<=a*b;i++){
		if(i%b==0){
			printf("%d ",i);
		}
	}
}

void prima(int n){
	int deret = 1;
	int angka = 1;
	int hitungbagi;
	
    while(deret<=n){
    	hitungbagi=0;
		for(int i=1;i<=angka;i++){
			if(angka%i==0){
				hitungbagi++;
			}
		}
            
		if(hitungbagi==2){
			deret++;
            printf("%d ",angka);
		}
		angka ++;
	}
}

void pangkatasli(int a,int b){
	int temp;
	for(int i=1;i<=a;i++){
		temp = pow(i,b);
		printf("%d ",temp);
	}
}

void segitiga(int n){
	int temp;
	for(int i=1;i<=n;i++){
		temp = (i*(i+1))/2;
		printf("%d ",temp);
	}
}

void PP(int n){
	int temp;
	for(int i=1;i<=n;i++){
		temp = (i*(i+1));
		printf("%d ",temp);
	}	
}

void Balok(int n){
	int temp;
	for(int i=1;i<=n;i++){
		temp = (i*(i+1)*(i+2));
		printf("%d ",temp);
	}	
}

int fibo(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return fibo(n-1)+fibo(n-2);
	}
}

void aritmatika(int awal, int beda, int banyaksuku){
	int deret = 1,temp;
	
	while(deret!=banyaksuku+1){
		temp = awal+(deret-1)*beda;
		printf("%d ",temp);
		deret++;
	}
}

void geometri(int awal, int rasio, int banyaksuku){
	int deret = 1,temp;
	
	while(deret!=banyaksuku+1){
		temp = awal*pow(rasio,(deret-1));
		printf("%d ",temp);
		deret++;
	}
}

int Faktorial(int angka){
	if(angka<=0){
		return 1;
	}
	else{
		return Faktorial(angka-1)*angka;
	}
}

int Lucas(int angka){
	if(angka==0){
		return 2;
	}
	else if (angka==1){
		return 1;
	}
	else{
		return Lucas(angka-1)+Lucas(angka-2);
	}
}

void pcl(int n){
	int temp;
	for(int i=1;i<=n;i++){
		temp = pow(2,i-1);
		printf("%d ",temp);
	}
}

void asli(int n){
	for(int i=1;i<=n;i++){
		printf("%d ",i);
	}
}

void pgktgnp(int a,int b){
	int temp ,deret=0,angka=1;
	while(deret!=a){
		if(angka%2==0){
			temp = pow(angka,b);
			printf("%d ",temp);
			deret++;
		}
		angka++;
	}
}

void pgktgnjl(int a,int b){
	int temp ,deret=0,angka=1;
	while(deret!=a){
		if(angka%2!=0){
			temp = pow(angka,b);
			printf("%d ",temp);
			deret++;
		}
		angka++;
	}
}

void pangkat(int a,int b){
	int temp;
	for(int i=1;i<=a;i++){
		temp = pow(b,i);
		printf("%d ",temp);
	}
}

int persegi(int temp){
	return pow(temp,2);
}

int kubik(int temp){
	return pow(temp,3);
}


int menu(){
	puts("|====================================================================|");
	puts("|                               M E N U                              |");
	puts("|====================================================================|");
	puts("|Selamat Datang di Program Penampil Deret Angka                      |");
	puts("|Silakan pilih salah satu pilihan deret angka berikut ini :          |");	
	puts("|1.  Deret Angka Ganjil                                              |");
	puts("|2.  Deret Angka Genap                                               |");	
	puts("|3.  Deret Bilangan Kelipatan                                        |");	
	puts("|4.  Deret Bilangan Prima                                            |");	
	puts("|5.  Deret Bilangan Asli Berpangkat                                  |");	
	puts("|6.  Deret Segitiga                                                  |");	
	puts("|7.  Deret Persegi Panjang                                           |");	
	puts("|8.  Deret Balok                                                     |");
	puts("|9.  Deret Fibonacci                                                 |");		
	puts("|10. Deret Bilangan Aritmatika                                       |");
	puts("|11. Deret Bilangan Geometri                                         |");
	puts("|12. Deret Faktorial                                                 |");
	puts("|13. Deret Lucas                                                     |");
	puts("|14. Deret Segitiga Pascal                                           |");
	puts("|15. Deret Bilangan Asli                                             |");
	puts("|16. Deret Bilangan Genap Berpangkat                                 |");
	puts("|17. Deret Bilangan Ganjil Berpangkat                                |");
	puts("|18. Deret Bilangan Berpangkat Angka Tetap                           |");
	puts("|19. Deret Persegi                                                   |");
	puts("|20. Deret Kubik                                                     |");
	puts("|21. Credit                                                          |");
	puts("|0.  Keluar                                                          |");
	puts("|====================================================================|");
	puts("|               TEKAN ENTER UNTUK MEMASUKKAN PILIHAN                 |");
	puts("|====================================================================|");
}

void gotoxy(int x, int y){ /* Fungsi yang digunakan untuk memindahkan cursor */
    COORD coord; /* COORD adalah sebuah struct yang berisikan dua variabel bertipe SHORT yaitu X dan Y */
    coord.X = x; /* x merupakan horizontal */
    coord.Y = y; /* y merupakan vertikal */
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
    /* 1. SetConsoleCursorPosition() adalah fungsi yang digunakan untuk menetapkan posisi cursor di layar. 
       2. GetStdHandle() adalah fungsi yang digunakan untuk mendapatkan handle ke layar.
          Dalam kasus ini, karena yang akan dilakukan  adalah output ke layar, maka standard device yang digunakan adalah standard output device,
          yaitu STD_OUTPUT_HANDLE. */
}

void loading(){
	char loding[]="L O A D I N G . . .";
	for(int i=0;i<strlen(loding);i++){
		printf("%c",loding[i]);
		Sleep(20); /* Fungsi yang digunakan untuk timer dengan blocking yang akan memberikan tundaan atau delay selama beberapa detik */
	}
	Sleep(50);
	printf("\n");
	printf("\n");
}

void keluar(){
	system("cls"); /* Fungsi yang digunakan untuk membersihkan layar pada program yang akan dijalankan */
	puts("|====================================================================|");
	puts("|                                                                    |");
	puts("|      << Terima Kasih sudah mencoba menggunakan program kami >>     |");
	puts("|                                                                    |");
	puts("|====================================================================|");
	printf("\n");
	Sleep(1000);
	exit(0);
}

int main(){
	int pilihan,a;
	char slct[2];
	
	menu:
	menu();	
	a = getch();
	if(a==13){
		goto choise99;
	}
	
	else{
		system("cls");
		goto menu;
	}
	
	choise99:
	printf("|Masukkan Pilihan Anda :                                             |");
	gotoxy(25,30);
	scanf("%d",&pilihan);

	printf("|Apakah Anda Yakin (Y,N) :                                           |");
	gotoxy(27,31);
	a = getche();
	printf("\n");
	printf("|====================================================================|\n");
	printf("|                                                                    |\n");
	printf("|                                                                    |\n");
	printf("|                                                                    |\n");
	printf("|====================================================================|\n");
	gotoxy(26,34); /* 	Horizontal dan Vertikal */
	loading();

	if(a==121 || a==89){
		if(pilihan==1){
			ganjil:
			system("cls");
			int angka;

			puts("======================================================================");
			puts("|                             PILIHAN 1                              |");
			puts("======================================================================");
			puts("                          DERET ANGKA GANJIL                          ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);
			puts("                                                                      ");
			puts("Output:                                                               ");
			ganjil(angka);
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			choise:
			a = getch();
			if(a==121 || a==89){
				goto ganjil; /* Perintah untuk mengarahkan eksekusi ke pernyataan yang diawali dengan suatu label */
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise;
			}
		}
		
		else if(pilihan==2){
			genap:
			system("cls");
			int angka;

			puts("======================================================================");
			puts("|                             PILIHAN 2                              |");
			puts("======================================================================");
			puts("                          DERET ANGKA GENAP                           ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);
			puts("                                                                      ");
			puts("Output:                                                               ");
			genap(angka);
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			choise2:
			a = getch();
			if(a==121 || a==89){
				goto genap;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise2;
			}
		}
		
		else if(pilihan==3){
			kelipatan:
			system("cls");
			int angka,klpt;

			puts("======================================================================");
			puts("|                             PILIHAN 3                              |");
			puts("======================================================================");
			puts("                       DERET BILANGAN KELIPATAN                       ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);			
			printf("Masukkan bilangan kelipatan : ");
			scanf("%d",&klpt);		
			puts("                                                                      ");
			puts("Output:                                                               ");
			kelipatan(angka,klpt);
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			choise3:
			a = getch();
			if(a==121 || a==89){
				goto kelipatan;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise3;
			}
		}
		
		else if(pilihan==4){
			prima:
			system("cls");
			int angka;

			puts("======================================================================");
			puts("|                             PILIHAN 4                              |");
			puts("======================================================================");
			puts("                        DERET BILANGAN PRIMA                          ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);				
			puts("                                                                      ");
			puts("Output:                                                               ");
			prima(angka);
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			
			choise4:
			a = getch();
			if(a==121 || a==89){
				goto prima;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise4;
			}
		}
		
		else if(pilihan==5){
			pangkatAS:
			system("cls");
			int angka,pgkt;

			puts("======================================================================");
			puts("|                             PILIHAN 5                              |");
			puts("======================================================================");
			puts("                     DERET BILANGAN ASLI BERPANGKAT                   ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);	
			printf("Masukan pangkat ke-n : ");
			scanf("%d",&pgkt);			
			puts("                                                                      ");
			puts("Output:                                                               ");
			pangkatasli(angka,pgkt);
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			
			choise5:
			a = getch();
			if(a==121 || a==89){
				goto pangkatAS;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise5;
			}
		}
		
		else if(pilihan==6){
			segitiga:
			system("cls");
			int angka;

			puts("======================================================================");
			puts("|                             PILIHAN 6                              |");
			puts("======================================================================");
			puts("                            DERET SEGITIGA                            ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);				
			puts("                                                                      ");
			puts("Output:                                                               ");
			segitiga(angka);
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			
			choise6:
			a = getch();
			if(a==121 || a==89){
				goto segitiga;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise6;
			}
		}
		
		else if(pilihan==7){
			PP:
			system("cls");
			int angka;

			puts("======================================================================");
			puts("|                             PILIHAN 7                              |");
			puts("======================================================================");
			puts("                         DERET PERSEGI PANJANG                        ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);				
			puts("                                                                      ");
			puts("Output:                                                               ");
			PP(angka);
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			
			choise7:
			a = getch();
			if(a==121 || a==89){
				goto PP;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise7;
			}
		}
		
		else if(pilihan==8){
			balok:
			system("cls");
			int angka;

			puts("======================================================================");
			puts("|                             PILIHAN 8                              |");
			puts("======================================================================");
			puts("                             DERET BALOK                              ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);				
			puts("                                                                      ");
			puts("Output:                                                               ");
			Balok(angka);
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			
			choise8:
			a = getch();
			if(a==121 || a==89){
				goto balok;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise8;
			}
		}
		
		else if(pilihan==9){
			fibo:
			system("cls");
			int angka,k;

			puts("======================================================================");
			puts("|                             PILIHAN 9                              |");
			puts("======================================================================");
			puts("                            DERET FIBONACCI                           ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);				
			puts("                                                                      ");
			puts("Output:                                                               ");
			k = fibo(angka);
			
			for(int i=1; i<=angka; i++){
				printf("%d ",fibo(i));
			}
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			
			choise9:
			a = getch();
			if(a==121 || a==89){
				goto fibo;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise9;
			}
		}
		
		else if(pilihan==10){
			aritmatika:
			system("cls");
			int angka,awal,beda;

			puts("======================================================================");
			puts("|                             PILIHAN 10                             |");
			puts("======================================================================");
			puts("                       DERET BILANGAN ARITMATIKA                      ");
			puts("                                                                      ");
			printf("Masukkan suku pertama : ");
			scanf("%d",&awal);
			printf("Masukkan selisih (beda) : ");
			scanf("%d",&beda);
			printf("Masukkan banyak suku : ");
			scanf("%d",&angka);				
			puts("                                                                      ");
			puts("Output:                                                               ");
			aritmatika(awal,beda,angka);
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			
			choise10:
			a = getch();
			if(a==121 || a==89){
				goto aritmatika;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise10;
			}
		}
		
		else if(pilihan==11){
			geometri:
			system("cls");
			int angka,awal,rasio;

			puts("======================================================================");
			puts("|                             PILIHAN 11                             |");
			puts("======================================================================");
			puts("                        DERET BILANGAN GEOMETRI                       ");
			puts("                                                                      ");
			printf("Masukkan suku pertama : ");
			scanf("%d",&awal);
			printf("Masukkan rasio : ");
			scanf("%d",&rasio);
			printf("Masukkan banyak suku : ");
			scanf("%d",&angka);			
			puts("                                                                      ");
			puts("Output:                                                               ");
			geometri(awal,rasio,angka);
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			
			choise11:
			a = getch();
			if(a==121 || a==89){
				goto geometri;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise11;
			}
		}
		
		else if(pilihan==12){
			faktorial:
			system("cls");
			int angka,k;

			puts("======================================================================");
			puts("|                            PILIHAN 12                              |");
			puts("======================================================================");
			puts("                           DERET FAKTORIAL                            ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);
			puts("                                                                      ");
			puts("Output:                                                               ");
			
			if(angka<0){
				printf("Tidak Terdefinisi");
			}
			else{
				for(int i=1; i<=angka; i++){
					printf("%d ",Faktorial(i));
				}
			}
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			choise12:
			a = getch();
			if(a==121 || a==89){
				goto faktorial;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise12;
			}
		}
		
		else if(pilihan==13){
			Lucas:
			system("cls");
			int angka,k;

			puts("======================================================================");
			puts("|                            PILIHAN 13                              |");
			puts("======================================================================");
			puts("                             DERET LUCAS                              ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);
			puts("                                                                      ");
			puts("Output:                                                               ");
			
			if(angka<0){
				printf("Tidak Terdefinisi");
			}
			else{
				for(int i=0; i<angka; i++){
					printf("%d ",Lucas(i));
				}
			}
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			choise13:
			a = getch();
			if(a==121 || a==89){
				goto Lucas;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise13;
			}
		}
		
		else if(pilihan==14){
			paskal:
			system("cls");
			int angka;

			puts("======================================================================");
			puts("|                             PILIHAN 14                             |");
			puts("======================================================================");
			puts("                          DERET SEGITIGA PASCAL                       ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);
			puts("                                                                      ");
			puts("Output:                                                               ");
			pcl(angka);
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			choise14:
			a = getch();
			if(a==121 || a==89){
				goto paskal;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise14;
			}
		}
		
		else if(pilihan==15){
			asli:
			system("cls");
			int angka;

			puts("======================================================================");
			puts("|                             PILIHAN 15                              |");
			puts("======================================================================");
			puts("                         DERET BILANGAN ASLI                          ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);
			puts("                                                                      ");
			puts("Output:                                                               ");
			asli(angka);
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			choise15:
			a = getch();
			if(a==121 || a==89){
				goto asli;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise15;
			}
		}
		
		else if(pilihan==16){
			pangkatgenap:
			system("cls");
			int angka,pgkt;

			puts("======================================================================");
			puts("|                             PILIHAN 16                             |");
			puts("======================================================================");
			puts("                    DERET BILANGAN GENAP BERPANGKAT                   ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);	
			printf("Masukan pangkat ke-n : ");
			scanf("%d",&pgkt);			
			puts("                                                                      ");
			puts("Output:                                                               ");
			pgktgnp(angka,pgkt);
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			
			choise16:
			a = getch();
			if(a==121 || a==89){
				goto pangkatgenap;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise16;
			}
		}
		
		else if(pilihan==17){
			pangkatganjil:
			system("cls");
			int angka,pgkt;

			puts("======================================================================");
			puts("|                             PILIHAN 17                             |");
			puts("======================================================================");
			puts("                    DERET BILANGAN GANJIL BERPANGKAT                  ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);	
			printf("Masukan pangkat ke-n : ");
			scanf("%d",&pgkt);			
			puts("                                                                      ");
			puts("Output:                                                               ");
			pgktgnjl(angka,pgkt);
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			
			choise17:
			a = getch();
			if(a==121 || a==89){
				goto pangkatganjil;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise17;
			}
		}
		
		else if(pilihan==18){
			pangkat:
			system("cls");
			int angka,pgkt;

			puts("======================================================================");
			puts("|                             PILIHAN 18                             |");
			puts("======================================================================");
			puts("                  DERET BILANGAN BERPANGKAT ANGKA TETAP               ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);	
			printf("Masukan angka ke-n : ");
			scanf("%d",&pgkt);			
			puts("                                                                      ");
			puts("Output:                                                               ");
			pangkat(angka,pgkt);
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			
			choise18:
			a = getch();
			if(a==121 || a==89){
				goto pangkat;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise18;
			}
		}
		
		else if(pilihan==19){
			persegi:
			system("cls");
			int angka;

			puts("======================================================================");
			puts("|                             PILIHAN 19                              |");
			puts("======================================================================");
			puts("                             DERET PERSEGI                            ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);				
			puts("                                                                      ");
			puts("Output:                                                               ");
			
			for(int i=1; i<=angka; i++){
				printf("%d ",persegi(i));
			}
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			
			choise19:
			a = getch();
			if(a==121 || a==89){
				goto persegi;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise19;
			}
		}
		
		else if(pilihan==20){
			kubik:
			system("cls");
			int angka;

			puts("======================================================================");
			puts("|                             PILIHAN 20                             |");
			puts("======================================================================");
			puts("                              DERET KUBIK                             ");
			puts("                                                                      ");
			printf("Masukkan jumlah deret yang diinginkan : ");
			scanf("%d",&angka);				
			puts("                                                                      ");
			puts("Output:                                                               ");
			
			for(int i=1; i<=angka; i++){
				printf("%d ",kubik(i));
			}
			printf("\n");
			puts("======================================================================");
			puts("| MENU [Backspace] |         | TRY AGAIN [Y] |          | QUIT [Esc] |");
			puts("======================================================================");			
			
			choise20:
			a = getch();
			if(a==121 || a==89){
				goto kubik;
			}
			else if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise20;
			}
		}
		
		else if(pilihan==21){
			pilihan21:
			system("cls");

			puts("======================================================================");
			puts("|                             PILIHAN 21                             |");
			puts("======================================================================");
			puts("|                               CREDIT                               |");
			puts("======================================================================");
			puts("|                             KELOMPOK 3                             |");
			puts("|                      1. 171111369 - Kamrozi                        |");
			puts("|                      2. 201110586 - Alvito Jordan                  |");
			puts("|                      3. 201111614 - Fendy Sanjaya                  |");
			puts("|                      4. 201111621 - Edward Tionadi                 |");
			puts("|                      5. 201110440 - Evander                        |");
			puts("|                      6. 201111777 - Felix Winston                  |");
			puts("|                                                                    |");
			puts("======================================================================");
			puts("| MENU [Backspace] |                                    | QUIT [Esc] |");
			puts("======================================================================");			
			
			choise21:
			a = getch();
			if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise21;
			}
		}
		
		else if(pilihan==0){
			keluar();
		}
		
		else{
			int a;
			system("cls");
			puts("|====================================================================|");
			puts("|                                                                    |");
			puts("|                 << Pilihan yang dimasukkan salah >>                |");
			puts("|                                                                    |");
			puts("|====================================================================|");
			puts("| MENU [Backspace] |                                    | QUIT [Esc] |");
			puts("|====================================================================|");	
			choise0:
			a = getch();
			if(a==8){
				system("cls");
				goto menu;
			}
			else if(a==27){
				keluar();
			}
			else{
				goto choise0;
			}
		}	
	}
	
	else{
		system ("cls");
		goto menu;
	}
	getch();
	return 0;
}
