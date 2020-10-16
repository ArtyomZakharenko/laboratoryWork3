#include <stdio.h>
#include <stdlib.h>

void FillArray (int *, int, int);
void ShowArray (int *, int, int);

int main()
{
    int row, column;
    int *array = NULL;
    printf("Enter amount of rows: ");
    scanf("%d", &row);
    printf("Enter amount of columns: ");
    scanf("%d", &column);
    array = (int*)calloc(row*column, sizeof(int));
    
    FillArray(array, row, column);
    ShowArray(array, row, column);

    return 0;
}

void FillArray (int *arr, int height, int width){
    int i;
    int rowCounter = 1, elementCounter = 1;
    
    for (i = 0; i < height*width; i++){
        printf("row %d, element %d: ", rowCounter, elementCounter);
        scanf("%d", arr+i);
        elementCounter++;
        
        if((i+1) % width == 0){
            printf("\n");
            rowCounter++;
            elementCounter = 1;
        }
    }
}

void ShowArray (int *arr, int height, int width){
    int i;
    printf("Your array:\n");
    for (i = 0; i < height*width; i++){
            printf("%4d", *(arr+i));
            if((i+1) % width == 0){
        printf("\n");
        }
    }
}
