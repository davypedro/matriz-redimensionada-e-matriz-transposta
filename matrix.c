
//Aluno: Davy Pedro Moreira de Moura
//Matricula: 20170115635

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LIMITES 20

int print_matriz(int linha, int coluna, int array[linha][coluna]);

int redimencionar(int i, int j, int array[i][j], int ni, int nj, int narray[ni][nj]);

void transposta(int array[LIMITES][LIMITES], int rows, int columns);

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int array[LIMITES][LIMITES] =  {{1,2}, {3,4}, {5,6}, {7,8}}; //LINHAS E COLUNAS EM SUA FORMA ABSTRATA 
						
	int narray[LIMITES][LIMITES];
	
	print_matriz(4, 2, array);
	redimencionar(4, 2, array, 2, 4, narray);
	transposta(array, 4, 2);
	}

int print_matriz(int linha, int coluna, int array[linha][coluna]){
	
	int s = 0;
	int *p;
	int count = 0;
	printf("\n\t\tMATRIZ PARAMETRO!\n\n");
	
	while(s < linha){
		
		for(p = array[s]; p <= array[s] + coluna-1; p++){
			count++;			
			printf("%5d", count);
		}
		s++;
		printf("\n");		
	}
}

int redimencionar(int i, int j, int array[i][j], int ni, int nj, int narray[ni][nj]){
																						
	int p, f1, n, count = 0, *ponteiro, *p2;
	int dim1 = i * j, dim2 = ni * nj;
	
	if(dim1 =! dim1){
		printf("\n\t\tERRO! NÃO É POSSÍVEL REDIMENSIONAR UM ARRAY COM UMA QUANTIDADE DIFERENTES DE ELEMTENTOS DO ARRAY ORIGINAL. POR FAVOR, TENTE NOVAMENTE\n");

	}else{
		for(f1 = 0; f1 < i; f1++){
			for(ponteiro = array[f1]; ponteiro <= array[f1] + j-1; ponteiro++){
				count++;			
				narray[n][count] = count;
			}
			printf("\n");
		}
		printf("\t\tMATRIZ REDIMENSIONADA!\n\n");
		for(f1 = 0; f1 < ni; f1++){
				for(p2 = narray[f1]+1; p2 <= narray[f1] + nj; p2++){			
					printf("%5d", *p2);
				}
				putchar('\n');
			}
	}
}

void transposta(int array[LIMITES][LIMITES], int rows, int columns){
	
    int i, j;
    int array_t[LIMITES][LIMITES];
    
    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j = j + 1) array_t[j][i] = array[i][j];
    printf("\n\n\t\tTRANSPOSTA DA MATRIZ!\n\n");
    for (i = 0; i < columns; i = i + 1){
        for (j = 0; j < rows; j = j + 1){
			printf("%5d", array_t[i][j]);
		}
		putchar('\n');
	}
}
