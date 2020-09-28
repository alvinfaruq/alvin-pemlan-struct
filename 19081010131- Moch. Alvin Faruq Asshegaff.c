#include <stdio.h>

struct mahasiswa{
	int npm;
	char nama[25];
};

typedef struct mahasiswa mhs;

main(){
	mhs m1;
	
	printf("Masukkan npm : ");
	scanf("%d", &m1.npm);
	printf("Masukkan nama : ");
	scanf(" %[^\n]c", &m1.nama);
	
	printf("\n\nNPM : %d\n", m1.npm);
	printf("Nama :  %s\n", m1.nama);
}
