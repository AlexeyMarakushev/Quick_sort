#include "sort.h"
#include <iostream>
int main(){
	Item **items;
	size_t count = 5;
	Real *A;
	A = new Real[count];
	A[0].Real.a = 3.0;
	A[1].Real.a = 6.0;
	A[2].Real.a = 4.0;
	A[3].Real.a = 5.0;
	A[4].Real.a = 1.0;
	for(size_t i = 0; i < count; i++){
		*items[i] = A[i];
	}
	items = new Item*[count];
	QuickSort(items, count);
	return 0;
}