#include <stdio.h> 
int main() { 
int i,j,k;
int r1, c1, r2, c2; 
scanf("%d %d", &r1, &c1); 
int A[10][10], B[10][10], C[10][10]; 
for (i = 0; i < r1; i++) { 
for (j = 0; j < c1; j++) { 
scanf("%d", &A[i][j]); 
} 
} 
scanf("%d %d", &r2, &c2); 
for (i = 0; i < r2; i++) { 
for (j = 0; j < c2; j++) { 
scanf("%d", &B[i][j]); 
} 
} 
if (c1 != r2) { 
printf("Invalid Input"); 
return 0; 
} 
for (i = 0; i < r1; i++) { 
for (j = 0; j < c2; j++) { 
C[i][j] = 0; 
for (k = 0; k < c1; k++) { 
C[i][j] += A[i][k] * B[k][j]; 
} 
} 
} 
for (i = 0; i < r1; i++) { 
for (j = 0; j < c2; j++) { 
printf("%d ", C[i][j]); 
} 
printf("\n"); 
} 
return 0; 
}
