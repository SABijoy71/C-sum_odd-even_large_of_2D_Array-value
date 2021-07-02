// Todays lesson is about Two-Dimentinal Array;

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n;
    printf("Enter row number: ");
    fflush(stdout);
    scanf("%d", &n);

    int multiliplication_table[n][10];

    int row,col;
    for(row = 0; row < n; row++){
        for(col = 0; col < 10; col++){
            multiliplication_table[row][col] = (row+1)*(col+1);
        }
    }

    for(row = 0; row < n; row++){
        for(col = 0; col < 10; col++){
            printf("%d x %d = %d\n", row+1, col+1, multiliplication_table[row][col]);
        }
        printf("\n");
    }

    int i,j,even = 0,odd = 0,sum = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < 10; j++){
            sum += multiliplication_table[i][j];
            if(multiliplication_table[i][j]%2 == 0){
                even++;
            }else{
                odd++;
            }
        }
    }

    printf("Even number = %d\n", even);
    printf("Even number = %d\n", odd);
    printf("Sum value = %d\n", sum);


    return 0;
}