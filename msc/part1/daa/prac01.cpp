// Prac 01
// Aim:
#include<iostream>
#include<chrono>

void insertionSort(int *arr, int n){
	int i, key, j;
	for (i = 1; i < n; i++){
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
int main(int arg_count, char **arg_var){
	
	if(arg_count < 2){
		std::cerr<<"Pass Arguments Correctly\n\t./InsertionSort {UnSortedArray}"<<std::endl;
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
		insertionSort(arr, arr_size);
		auto endTime = std::chrono::high_resolution_clock::now();
		
		std::cout << "Array after sorting : " << std::endl;
		for(int i = 0; i < arr_size; i++){
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
		
		auto time_span = std::chrono::duration_cast<std::chrono::nanoseconds>(endTime - startTime);
		std::cout<<"time taken to complete insertion sort for "<<arr_size<<" elements is : "<<std::abs(time_span.count())<<" nanosecond.";
		
	}
	return 0;
}
