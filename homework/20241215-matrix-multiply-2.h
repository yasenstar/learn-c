# include <stdio.h>
# pragma warning (disable: 4996)
void mul(int n, int m, int k, float *p[], float *q[]){
	int i, j, x;
	float c[5][5] = {0.0f};
	for(i = 0; i < n; i++){
		for(j = 0; j < k ; j++){
			for(x = 0; x < m; x++){
				c[i][j] += p[i][x] * q[x][j];
			}
			printf("%lf ", c[i][j]);
		}
		printf("\n");
	}
}
void main(){
	int n, m, k, i, j;
	float *p[5], *q[5], a[5][5] = {0.0f}, b[5][5] = {0.0f};
	printf("Please input the number of the lines of the first matrix: \n");
	scanf("%d", &n);
	printf("Please input the number of the roles of the first matrix: \n");
	scanf("%d", &m);
	printf("Please input the number of the roles of the second matrix: \n");
	scanf("%d", &k);
	printf("Please input the first matrix: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%f", &a[i][j]);
		}
	}
	printf("Please input the second matrix: \n");
	for(i = 0; i < m; i++){
		for(j = 0; j < k; j++){
			printf("b[%d][%d] = ", i, j);
			scanf("%f", &b[i][j]);
		}
	}
	for(i = 0; i < 5; i++){
		p[i] = &a[i][0];
		q[i] = &b[i][0];
	}
	mul(n, m, k, p, q);
}