#include <stdio.h>

#define MAX_DIM 2

void get_matrix_from_input(int matrix[][MAX_DIM], int max_row_capacity, int max_col_capacity);

int main(void){
	int r1, r2, c1, c2, m1[MAX_DIM][MAX_DIM], m2[MAX_DIM][MAX_DIM], i, j;

	printf("Insert values for matrix 1\n");
	get_matrix_from_input(m1, MAX_DIM, MAX_DIM);

	printf("Insert values for matrix 2\n");
	get_matrix_from_input(m2, MAX_DIM, MAX_DIM);

	return 0;
}

void get_matrix_from_input(int matrix[][MAX_DIM], int max_row_capacity, int max_col_capacity){
	int i, j, input;

	for (i = 0; i < max_row_capacity; ++i){
		for (j = 0; j < max_col_capacity; ++j){
			printf("Insert value for %dx%d : ", i, j);
			scanf("%d", &input);
			matrix[i][j] = input;
		}
	}
}



/*
	// reading the first matrix input 
	for (i = 0; i < MAX_DIM; ++i){
		for (j = 0; j < MAX_DIM; ++j){
			printf("Insert value for row %d column %d : ", i, j);
			scanf("%d", &m1[i][j]);
		}
	}

	// reading the second matrix input 
	for (i = 0; i < MAX_DIM; ++i){
		for (j = 0; j < MAX_DIM; ++j){
			printf("Insert value for row %d column %d : ", i, j);
			scanf("%d", &m2[i][j]);
		}
	}
*/