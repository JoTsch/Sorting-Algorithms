#ifndef _HEADER_HPP_
#define _HEADER_HPP_

#include <stdio.h>

int getPivInd(int li[], int left, int right);

void quicksort(int li[], int first, int last){
	if(first < last){
		int piv = getPivInd(li, first, last);
		quicksort(li, first, piv - 1);
		quicksort(li, piv + 1, last);		
	}
}

int getPivInd(int li[], int left, int right){
	int pivEl = li[right];
	int wallInd = left;

	for(int i = left; i < right; i++){
		if(li[i] < pivEl){
			int temp = li[i];
			li[i] = li[wallInd];
			li[wallInd] = temp;
			wallInd++;		
		}
	}

	int temp = li[right];
	li[right] = li[wallInd];
	li[wallInd] = temp;

	return wallInd;
}

#endif
