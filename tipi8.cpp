#include<stdio.h>
int main () {
	int n; int mat=1;
	printf (" entrez lordre de la matrice:");
	scanf ("%d",&n);
	int M[n][n];
	for (int k=0;k<n;k++)
	{ for (int i=0,j=k;j>=0;i++,j--){
		M[j][i]=mat++;
		}
    }
    for(int k=1;k<n;k++){
    	for(int i=k,j=n-1;i<n;i++,j--){
    		M[j][i] = mat++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",M[i][j]);
		}
		printf("\n");
	}
	return 0;
}
