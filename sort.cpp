#include "sort.h"
#include <iostream>
Real::Real(){
	a = 0;
}
Real::Real(const Real &A){
	a = A.a;
}

Pair::Pair(){
	x = 0;
	y = 0;
}

Pair::Pair(const Pair &A){
	x = A.x;
	y = A.y;
}

bool Real::operator<(const Item &A) const{
	const Real* other;
	other = dynamic_cast<const Real*>(&A);
	if(other == nullptr){
        exit(-1);
	}
	return this < other;
}

Item& Real::operator=(const Item &A){
	const Real* other;
	other = dynamic_cast<const Real*>(&A);
	if(other == nullptr){
        exit(-1);
	}
	a = other->a;
	return *this;
}

bool Pair::operator<(const Item &A) const{
	const Pair* other;
	other = dynamic_cast<const Pair*>(&A);
	if(other == nullptr){
        exit(-1);
	}
	if(this->x == other->x){
		return this->y < other->y;
	}
	else{
		return this->x < other->x;
	}
}

Item& Pair::operator=(const Item &A){
	const Pair* other;
	other = dynamic_cast<const Pair*>(&A);
	if(other == nullptr){
        exit(-1);
	}
	x = other->x;
	y = other->y;
	return *this;
}


void QuickSort(Item** items, size_t count) {
    if (count <= 1) {
        return;
    }
    Item* q = items[0];
    size_t number = 0;
    for (size_t i = 1; i < count; i++) {
        if (*items[i] < *q) {
            std::swap(items[++number], items[i]);
        }
    }
    std::swap(items[0], items[number]);
	
    Item** part1 = new Item*[number];
    Item** part2 = new Item*[count - number - 1];
    for (size_t i = 0; i < number; i++) {
        part1[i] = items[i];
    }
    for (size_t i = number + 1; i < count; i++) {
        part2[i - number - 1] = items[i];
    }
    QuickSort(part1, number);
    QuickSort(part2, count - number - 1);
    delete[] part1;
    delete[] part2;
}
	