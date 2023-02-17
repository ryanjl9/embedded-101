/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file Ryan Lanciloti
 * @brief Program which runs a variety of statistics on an array of data.
 *
 * @author Ryan Lanciloti
 * @date 2/16/2023
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

	unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
								114, 88,   45,  76, 123,  87,  25,  23,
								200, 122, 150, 90,   92,  87, 177, 244,
								201,   6,  12,  60,   8,   2,   5,  67,
								7,  87, 250, 230,  99,   3, 100,  90};
	print_array(test, SIZE);
	sort_array(test, SIZE);
	print_array(test, SIZE);
	print_statistics(test, SIZE);
}

void print_statistics(unsigned char* arr, int size){
	printf(
		"Min: %d\nMax: %d\nMean: %0.2lf\nMedian: %0.1lf\n",
		find_minimum(arr, size),
		find_maximum(arr, size),
		find_mean(arr, size),
		find_median(arr, size)
	);
}

void print_array(unsigned char* arr, int size){
	int i;
	printf("[");
	for(i = 0; i < size-1; i++){
		printf("%u, ", arr[i]);
	}
	printf("%u]\n", arr[i]);
}

double find_median(unsigned char* arr, int size){
	printf("%d | %d\n", arr[size/2-1], arr[size/2]);
	if(!(size % 2)) return (double)(arr[size/2-1] + arr[size/2])/2;
	return arr[size/2];
}

double find_mean(unsigned char* arr, int size){
	unsigned long total = 0;
	int i;
	for(i = 0; i < size; i++) total += arr[i];
	return (double)total / size;
}

int find_maximum(unsigned char* arr, int size){
	int max = arr[0];
	int i;
	for(i = 1; i < size; i++){
		if(arr[i] > max) max = arr[i];
	}
	return max;
}

int find_minimum(unsigned char* arr, int size){
	int min = arr[0];
	int i;
	for(i = 1; i < size; i++){
		if(arr[i] < min) min = arr[i];
	}
	return min;
}

void sort_array(unsigned char* arr, int size){
	int i,j;
	for(i = 0; i < size; i++){
		for(j = i+1; j < size; j++){
			if(arr[i] < arr[j]){
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
