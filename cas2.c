#include <stdio.h>

int main(){
	int N;
	printf("entrez la taille de la matrice careè= ");
	scanf("%d",&N);
	int A[100][100];
	int i,j,num=1;
	for(i=0;i<N;i++){
		if(i % 2 == 0){
			for(j=0;j<N;j++){
				A[j][i]=num++;
			}
		}else{
			for(j=N-1;j>=0;j--){
				A[j][i]=num++;
			}
		}
	}
	printf ("matrice remplie:\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
		printf("%d \t",A[i][j]);
	}
	printf("\n");
}
	return 0;
}


