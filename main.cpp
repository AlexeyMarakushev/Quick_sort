#include "sort.h"
#include <iostream>
int main(){
	Real **items;
	size_t count = 5;
	items = new Item*[count];
	*items[0] = 3;
	*items[1] = 35;
	*items[2] = 54;
	*items[3] = 37;
	*items[4] = 0;
	QuickSort(items, count);
	return 0;
}