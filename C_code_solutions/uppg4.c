// C program for binary search on sorted 2D list
#include <stdio.h>
#define MAX 100
// X - the element we need to find
void binSearchOnMatrix(int matrix[][MAX], int X, int rows, int cols) {
    int i;

    for (i = 0; i < rows; i++)
    {
        int start = 0; 
        int end = cols-1; // 5
        int mid;
 
        while (start <= end)
        {
            mid = start + (end-start)/2; // To avoid overflow by (start + end)
 
            if (matrix[i][mid] == X)
            {
                printf("Found at row %d col %d", i+1, mid+1); // i+1,mid+1 to get element position and not index position
                return;
            }
            else
            {
                if (matrix[i][mid] < X)
                    start = mid + 1; // search in right half
                else
                    end = mid - 1; // search in left half
            }
        }
    }
    printf("NOT FOUND");
}

int main() {
    int matrix[][MAX] = { {3, 5, 7, 8, 11, 14},
                        {22, 25, 35, 36, 47, 50},
                        {76, 86, 94, 96, 100, 102} };    
    int searchNum;
    printf("Search for a number: ");
    scanf("%d", &searchNum);

    binSearchOnMatrix(matrix, searchNum, 3, 6);

    puts("");
    return 0;
}