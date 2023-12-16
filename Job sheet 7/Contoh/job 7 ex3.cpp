/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include <stdio.h>
#include <string.h>

int main(){
	char usr[50] = "faza777";
	char pw [20] = "azka777";
	char usr_lgn[50];
	char pw_lgn[20];
	
	printf("Login Akun\n");
	printf("Username : ");
	scanf("%s", &usr_lgn);
	printf("Pasword : ");
	scanf("%s", &pw_lgn);
	
	if(strcmp(usr_lgn, usr) == 0 && strcmp(pw_lgn, pw) == 0){
		printf("Berhasil login");
	}
	else{
		printf("pasword salah");
	}
return 0;
}

