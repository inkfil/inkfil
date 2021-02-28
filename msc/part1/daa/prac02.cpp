// Prac 02
// Aim:
// C++ program for Merge Sort
#include <iostream>
#include<chrono>
void merge(int *arr, int left, int middle, int right)
{
	int n1 = middle - left + 1;
	int n2 = right - middle;
	int L[n1], R[n2];
	for(int i = 0; i < n1; i++){
		L[i] = arr[left + i];
	}
	for(int j = 0; j < n2; j++){
		R[j] = arr[middle + 1 + j];
	}
	int i = 0;
	int j = 0;
	int k = left;
	while(i < n1 && j < n2){
		if(L[i] <= R[j]){
			arr[k] = L[i];
			i++;
		}
		else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while(i < n1){
		arr[k] = L[i];
		i++;
		k++;
	}
	while(j < n2){
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int *arr, int left, int right){
	if( left >= right){
		return;
	}
	int middle = (left + right - 1) / 2;
	mergeSort(arr, left, middle);
	mergeSort(arr, middle + 1, right);
	merge(arr, left, middle, right);
}

int main(int arg_count, char **arg_var){

	if(arg_count < 2){
		std::cerr<<"Pass Arguments Correctly\n\t./MergeSort {UnSortedArray}"<<std::endl;
	}
	else{
		int arr[arg_count - 1];
		for(int i = 1; i < arg_count; i++){
			arr[i-1] = std::atoi(arg_var[i]);
		}

		int arr_size = sizeof(arr) / sizeof(arr[0]);

		std::cout << "Array before sorting : " << std::endl;
		for(int i = 0; i < arr_size; i++){
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;

		auto startTime = std::chrono::high_resolution_clock::now();
		mergeSort(arr, 0, arr_size - 1);
		auto endTime = std::chrono::high_resolution_clock::now();

		std::cout << "Array after sorting : " << std::endl;
		for(int i = 0; i < arr_size; i++){
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;

		auto time_span = std::chrono::duration_cast<std::chrono::nanoseconds>(startTime - endTime);
		std::cout<<"time taken to complete merge sort for "<<arr_size<<" elements is : "<<std::abs(time_span.count())<<" nanosecond.";
	}
	return 0;
}

