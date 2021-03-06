// jim and the orders.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


struct order {
	int id, start, end;
};

bool comp(order &o1, order &o2)
{
	return(o1.end < o2.end || (o1.end == o2.end && o1.id < o2.id));
}


int main()
{
	int n, d;
	cin >> n;
	vector<order> orders(n);
	for (int i = 0; i < n; i++) {
		cin >> orders[i].start;
		cin >> d;
		orders[i].end = orders[i].start + d;
		orders[i].id = i + 1;
	}
	sort(orders.begin(), orders.end(), comp);
	for (int i = 0; i < n; i++)
		cout << orders[i].id << " ";

    return 0;
}

