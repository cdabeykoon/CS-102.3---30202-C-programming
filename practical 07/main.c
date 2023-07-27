#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int ary1[3][3]={3,2,4,1,4,6,4,3,2};
    int ary2[3][3]={2,6,3,4,3,2,5,1,7};
    int sum[3][3];

    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("%d",ary1[i][j]);
    }
    printf("\t");

    for (j=0;j<3;j++){
        printf("%d",ary2[i][j]);
    }
    printf("\t");

    for(j=0;j<3;j++)
    {
        sum[i][j]=ary1[i][j]+ary2[i][j];
        printf("%d",sum[i][j]);

    }
    printf("\n");
    }

     int arr[4][4] = {
        {8, 17, 9, 6},
        {5, 2, 11, 18},
        {7, 27, 28, 0},
        {4, 1, 3, 10}
    };
    int target = 5;
    int row, col;
    int found = 0;
   // Iterate over the array to find the target value
    for (row = 0; row < 4; row++) {
        for (col = 0; col < 4; col++) {
            if (arr[row][col] == target) {
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (found)
        printf("The value %d is found at index [%d][%d]\n", target, row, col);
    else
        printf("The value %d is not found in the array\n", target);
}
