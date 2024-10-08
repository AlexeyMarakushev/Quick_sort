#ifndef SORT_H
#define SORT_H
#include <cstddef>
class Item {
public:
	virtual bool operator<(const Item &other) const = 0;
	virtual Item& operator=(const Item &other) = 0;
};

class Real : public Item{
	double a;
public:
	Real();
	Real(const Real &A);
	bool operator<(const Item &A) const override;
	Item& operator=(const Item &other) = 0;
};

class Pair : public Item{
	double x;
	double y;
public:
	Pair();
	Pair(const Pair &A);
	bool operator<(const Item &A) const override;
	Item& operator=(const Item &other) = 0;
};
void QuickSort(Item** items, size_t count);
#endif