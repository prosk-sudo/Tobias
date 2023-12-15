#include <assert.h>

int pivot(int *array, int l, int h) {

	return h - 1;
}

void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}

int partition(int *array, int l, int h) {
	assert(l < h);

	int pivot_pos = pivot(array, l, h);
	assert(l <= pivot_pos && pivot_pos < h);
	int pivot = array[pivot_pos];
	
	assert(array[pivot_pos] == pivot);
#ifndef NDEBUG
#endif

	return pivot_pos;
}

void quicksort_rec(int *array, int l, int h) {
	if () {
		return;
	}

	int pos = partition(array, l, h);
}

void quicksort(int *array, int size) {
	quicksort_rec(array, 0, size);
}
