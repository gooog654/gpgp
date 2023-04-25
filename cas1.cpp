#include<stdio.h>
int main () {
	int n; int mat=1;
	printf (" entrez lordre de la matrice:");
	scanf ("%d",&n);
	int M[n][n];
	int k , i , j ; 
	for ( k=0;k<n;k++)
	{ for ( i=0,j=k;j>=0;i++,j--){
		M[j][i]=mat++;
		}
    }
    for( k=1;k<n;k++){
    	for( i=k,j=n-1;i<n;i++,j--){
    		M[j][i] = mat++;
		}
	}
	for( i=0;i<n;i++){
		for( j=0;j<n;j++){
			printf("%d\t",M[i][j]);
		}
		printf("\n");
	}
	return 0;
}
