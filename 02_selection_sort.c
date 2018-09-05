/*
 * 02
 * Selection Sort
 * Author : Nikhil M Tomy
 * 
 */

#include <stdio.h>

int main() {
	int i, j, pos, array[100], temp, size;

	printf("Enter number of elements in the array : ");
	scanf("%d", &size);

	printf("Enter the array\n");
	for (i=0; i<size; i++) {
		scanf("%d", &array[i]);
	}
	
	for (i=0; i<size; i++) {
		pos = i;

		for (j=i; j<size; j++) {
			if (array[j] < array[pos]) {
				pos =j;
			}
		}
		if (i != pos) {
			temp = array[i];
			array[i] = array[pos];
			array[pos] = temp;
		}
	}

	printf("Sorted array \n");
	for (i=0; i<size; i++) {
		printf("%d\n", array[i]);
	}
}