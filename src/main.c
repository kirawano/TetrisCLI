#include<stdio.h>
#include"tetromino.h"

int main(void){
	//Defines the playing board - a 10 x 20 grid
	//The extra row is the floor row - for collision detecting
	int BOARD[20][11];
	for(int i = 0; i < sizeof(BOARD)/sizeof(BOARD[0]); i++){
		for(int j = 0; j < sizeof(BOARD[0])/sizeof(BOARD[0][1]); j++){
			if(i != sizeof(BOARD)/sizeof(BOARD[0]) - 1){
				BOARD[i][j] = 0;
			}
			else{
				BOARD[i][j] = 1;
			}
		}
	}

	
	for(int i = 0; i < sizeof(BOARD)/sizeof(BOARD[0]); i++){
		printf("\033[1;31m[*]\033[0m");
		for(int j = 0; j < sizeof(BOARD[0])/sizeof(BOARD[0][0]); j++){
			if(i != sizeof(BOARD)/sizeof(BOARD[0]) - 1){
				printf("[%d]",BOARD[i][j]);
			}
			else{
				printf("\033[1;31m[*]\033[0m");
			}
		}
		printf("\033[1;31m[*]\033[0m\n");
	}
	return 0;
} 

