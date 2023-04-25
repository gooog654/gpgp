#include <stdio.h>
void remplirmatrice(int A[][100],int N){
	int i,j,num=1;
	int direction=1; 
	for(i=0;i<N;i++){
		if(direction==1){
			for(j=0;j<N;j++){
				A[j][i]=num++;
			}
		}else{
			for(j=N-1;j>=0;j--){
				A[j][i]=num++;
			}
		}
		direction*=-1;
	}
}
void affichermatrice( int A[][100],int N){
	int i,j;
	printf ("matrice remplie:\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
		printf("%d \t",A[i][j]);
	}
	printf("\n");
}
}
int main(){
	int N;
	printf("entrez la taille de la matrice careè= ");
	scanf("%d",&N);
	int A[100][100];
	remplirmatrice (A,N);
	affichermatrice (A,N);
	return 0;
}


