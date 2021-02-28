// Extra 1
// Aim:
#include<iostream>
#include<mutex>
#include<thread>
#include<chrono>
// REFERENCE: https://stackoverflow.com/questions/30243779/c-matrix-multiplication-with-multithreads-and-semaphore
int const size = 3;
std::mutex someMutex[size][size];
std::thread someThread[size];

void MatrixMultiplication(int const * const * matrixA, int const * const * matrixB,int** matrixC, int row, int col, int i){
	someMutex[row][col].lock();
	matrixC[row][col] += matrixA[row][i]*matrixB[i][col];
	someMutex[row][col].unlock();
}

int main(){

	// int size =3;
	int** matrixA;
	int** matrixB;
	int** matrixC;

	matrixA = new int*[size];
	matrixB = new int*[size];
	matrixC = new int*[size];

	for(int i = 0; i<size; i++){
		matrixA[i] = new int[size];
		matrixB[i] = new int[size];
		matrixC[i] = new int[size];
	}

	int count = 1;
	for(int i = 0; i<size; i++){
		for(int j = 0; j<size; j++){
			matrixA[i][j] = count;
			matrixB[i][j] = count*3;
			count++;
		}
	}

	auto starttime = std::chrono::high_resolution_clock::now();
	for(int row=0; row<size; row++){
		for(int col=0; col<size;col++){
			for(int i=0;i<size;i++){
				someThread[i] = std::thread(MatrixMultiplication, matrixA, matrixB, matrixC, row, col, i);
				someThread[i].join();
			}
		}
	}
	auto endtime = std::chrono::high_resolution_clock::now();

	std::cout<<"This is Matrix A:"<<std::endl;
	for(int i = 0; i<size; i++){
		for(int j = 0; j<size; j++){
			std::cout<<matrixA[i][j]<<"\t";
		}
		std::cout<<std::endl;
	}
	std::cout<<std::endl;

	std::cout<<"This is Matrix B:"<<std::endl;
	for(int i = 0; i<size; i++){
		for(int j = 0; j<size; j++){
			std::cout<<matrixB[i][j]<<"\t";
		}
		std::cout<<std::endl;
	}
	std::cout<<std::endl;

	std::cout<<"This is Matrix C (product of matrix A and matrix B):"<<std::endl;
	for(int i = 0; i<size; i++){
		for(int j = 0; j<size; j++){
			std::cout<<matrixC[i][j]<<"\t";
		}
		std::cout<<std::endl;
	}
	std::cout<<std::endl;
	auto diff = std::chrono::duration_cast<std::chrono::microseconds> (endtime - starttime);
	std::cout<<"Time to multiply matrix : "<<diff.count()<<" microseconds";

	return 0;
}
