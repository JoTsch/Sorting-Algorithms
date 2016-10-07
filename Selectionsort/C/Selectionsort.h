#ifndef _SELECTIONSORT_HPP_
#define _SELECTIONSORT_HPP_

void selectionsort(int *li, int size){
	for(int i = 0; i < size; i++){
		int min = i;
		for(int j = i; j < size; j++){
			if(li[min] > li[j])
				min = j;
		}
		int tmp = li[min];
		li[min] = li[i];
		li[i] = tmp;	
	}
}

#endif
