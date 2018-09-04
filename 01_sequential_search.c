/*
 * 01
 * Sequential Search
 * Author : Nikhil M Tomy
 * 
 */

#include <stdio.h>

int main() {
	int i=0, found=0, array[100], size, element;

	printf("Enter number of elements : ");
	scanf("%d", &size);

	printf("Enter elements\n");
	for (i=0; i<size; i++) {
		scanf("%d", &array[i]);
	}

	printf("Enter element to search : ");
	scanf("%d", &element);

	for (i=0; i<size; i++) {
		if (array[i] == element) {
			found=1;
			break;
		}
	}
	if (found) {
		printf("Element found at position %d\n", i+1);
	} else {
		printf("Element not found\n");
	}
}