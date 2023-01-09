// C program to remove duplicates in list
#include <stdio.h>

// Function to remove duplicate elements in array

int removeDuplicates(int list[], int n) {
	// Return, if array is empty or contains a single element
	if (n == 0 || n == 1) 
		return n;
    
	int i = 0, j = 0, k;

	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (list[i] == list[j])
			{
				// Shifting elements one to the left, hence, deleting element at pos j
				for (k = j; k < n; k++)
					list[k] = list[k+1];
						
				n = n - 1;
			}
			else 
				j = j + 1;
		}
		i = i + 1;
	}
	return n;
}

int main() {
	int list1[] = {1,3,2,4,2,1,5,7,9};
	int size = sizeof(list1) / sizeof(list1[0]);
	int i;

	// removeDuplicates() returns new size of array.
	size = removeDuplicates(list1, size);

	// Print updated array
	for (i = 0; i < size; i++)
		printf("%d ", list1[i]);
    
    puts("");

	return 0;
}