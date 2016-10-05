#ifndef _QUICKSORT_HPP_
#define _QUICKSORT_HPP_

#include <iostream>

int getPivotInd(int* li, std::size_t leftInd, std::size_t rightInd);
void quicksort(int *li, int startInd, int endInd);


void quicksort(int *li, int startInd, int endInd){
	if (startInd < endInd){
		int piv = getPivotInd(li, startInd, endInd);
		quicksort(li, startInd, piv - 1);
		quicksort(li, piv + 1, endInd);
	}
}

int getPivotInd(int* li, std::size_t leftInd, std::size_t rightInd){
	int pivEl = li[rightInd];
	int wallEl = leftInd;

	for (int i = leftInd; i < rightInd; i++){
		if (li[i] < pivEl){
			int tmp = li[wallEl];
			li[wallEl] = li[i];
			li[i] = tmp;
			wallEl++;
		}
	}

	int tmp = li[wallEl];
	li[wallEl] = li[rightInd];
	li[rightInd] = tmp;

	return wallEl;
}

#endif