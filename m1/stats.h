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
 * @file stats.h 
 * @brief This header file will include function definitions for the stats.c
 * file.
 *
 * @author Ryan Lanciloti
 * @date 2/16/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief A function that prints the statistics of an array including minimum,
 *  maximum, mean, and median.
 *
 * @param arr Integer array containing data to generate statistics for
 * @param size Size of the provided array
 * 
 * @return N/A
 */
void print_statistics(unsigned char* arr, int size);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 * 
 * @param arr Integer array containing data to generate statistics for
 * @param size Size of the provided array
 * 
 * @return N/A
*/
void print_array(unsigned char* arr, int size);

/**
 * @brief Given an array of data and a length, returns the median value
 * 
 * @param arr Integer array containing data to generate statistics for
 * @param size Size of the provided array
 * 
 * @return Median value of the array
*/
double find_median(unsigned char* arr, int size);

/**
 * @brief Given an array of data and a length, returns the mean
 * 
 * @param arr Integer array containing data to generate statistics for
 * @param size Size of the provided array
 * 
 * @return Average value of the array
*/
double find_mean(unsigned char* arr, int size);

/**
 * @brief Given an array of data and a length, returns the maximum
 * 
 * @param arr Integer array containing data to generate statistics for
 * @param size Size of the provided array
 * 
 * @return Maximum value of the array
*/
int find_maximum(unsigned char* arr, int size);

/**
 * @brief Given an array of data and a length, returns the minimum
 * 
 * @param arr Integer array containing data to generate statistics for
 * @param size Size of the provided array
 * 
 * @return Minimum value of the array
*/
int find_minimum(unsigned char* arr, int size);

/**
 * @brief Given an array of data and a length, sorts the array from largest to
 *  smallest.  (The zeroth Element should be the largest value, and the last 
 *  element (n-1) should be the smallest value. )
 * 
 * @param arr Integer array containing data to generate statistics for
 * @param size Size of the provided array
 * 
 * @return N/A
*/
void sort_array(unsigned char* arr, int size);

#endif /* __STATS_H__ */
