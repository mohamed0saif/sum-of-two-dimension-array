/*

 * main.c
 *
 *  Created on: Jan 28, 2023
 *      Author: mohamed
 */


#include "stdio.h"

void main(){

	float Array_1 [2][2];
	float Array_2 [2][2];
	float Sum [2][2];

    printf("Enter element of 1'st matrix : \n");
	for(int i=0 ; i < 2;i++)
		for(int j=0 ; j<2 ;j++){

			printf("Enter element [%d][%d] : ",i,j);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&Array_1[i][j]);
		}
	printf("Enter element of 2nd matrix : \n");
	for(int i=0 ; i < 2;i++)
		for(int j=0 ; j<2 ;j++){
			printf("Enter element [%d][%d] : ",i,j);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&Array_2[i][j]);
		}
	for(int i = 0 ; i<2;i++)
		for(int j=0;j<2;j++){
			Sum[i][j]=Array_1[i][j]+Array_2[i][j];
		}
	for(int i = 0 ; i<2;i++){
		printf("\n");
		for(int j=0;j<2;j++){
			printf("Element [%d][%d] = %f ",i,j,Sum[i][j]);
			printf("  ");
		}
	}
}
