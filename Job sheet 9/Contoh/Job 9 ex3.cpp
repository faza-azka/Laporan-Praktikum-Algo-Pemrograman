/*
Nama  : Faza Azka Mahasya
NIM   : 23343038
Prodi : Informatika
*/

#include <stdio.h>

void add_score(int score){
	
	score = score + 5;
	printf("Score dibuah ke %d\n", score);
	}
	
int main(){
	int score = 0;
	printf("score sebelum diubah: %d\n", score);
	add_score(score);
	printf("score setelah diubah: %d\n", score);

}

