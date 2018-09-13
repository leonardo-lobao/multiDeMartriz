#include<stdio.h>
#define N 800

void main(){
	int a[N][N];
	int b[N][N];
	int c[N][N];
	int i,j,k;
	
	for(i = 0;i < N;i++){
		for(j = 0;j < N;j++){
			a[i][j] = 1;
			b[i][j] = 2;
		}
	}
	
	for(i = 0; i < N;i++){
		for(j = 0;j < N;j++){
			c[i][j] = 0;
			for(k = 0;k != N;k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	for(i = 0;i < N;i++){
		for(j = 0;j < N;j++){
			printf("%i ", c[i][j]);
		}
		printf("\n");
	}
}
