#include "sort.h"
#include <iostream>
int main(){
	Item **items;
	size_t count = 2;
	Real *A;
	A = new Real[count];
	A[0].a = 3.0;
	A[1].a = 6.0;
	for(size_t i = 0; i < count; i++){
		*items[i] = A[i];
	}
	items = new Item*[count];
	QuickSort(items, count);
	return 0;
}