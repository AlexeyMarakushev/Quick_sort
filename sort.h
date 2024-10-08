#ifndef SORT_H
#define SORT_H
#include <cstddef>
class Item {
	class Real;
	class Pair;
public:
	virtual bool operator<(const Item &other) const = 0;
	virtual Item& operator=(const Item &other) = 0;
	virtual ~Item() = default;
	void QuickSort(Item** items, size_t count);
};

class Real : public Item{
public:	
	double a;
	Real();
	Real(const Real &A);
	bool operator<(const Item &A) const override;
	Item& operator=(const Item &other);
};

class Pair : public Item{
	double x;
	double y;
public:
	Pair();
	Pair(const Pair &A);
	bool operator<(const Item &A) const override;
	Item& operator=(const Item &other);
};

#endif