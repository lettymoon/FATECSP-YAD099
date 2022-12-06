#include <stdio.h>
//Faça um programa que leia duas matrizes de dimensão 3x3 e encontre a soma delas.

/* 
  Mat1 = [[2, 3, 7], 
          [1, 0, -2], 
          [5, 8, 3]]

  Mat2 = [[7, 2, 8], 
          [5, 9, 4], 
          [1, 2, 3]]
        
  MatrizLinha = [1,2,3,4]

  MatrizColuna = [[1],[2],[3],[4]]
*/

int main(){
  int mat1[2][2] = { {2, 3, 7}, {1, 0, -2}, {5, 8, 3} };
  int mat2[2][2] = { {7, 2, 8}, {5, 9, 4}, {1, 2, 3} };
  int resultado[3][3];

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      resultado[i][j] = mat1[i][j] + mat2[i][j];
      printf("%d ", resultado[i][j]);
    }    
    printf("\n");
  }
  
  return 0;
}