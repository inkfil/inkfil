// Prac 10
// Aim:
#include<iostream>
using namespace std;
int findMinX(int num[], int rem[], int k){
	int x = 1;
	while(true){
		int j;
		for(j=0; j<k; j++){
			if(x%num[j] != rem[j]){
				break;
			}
		}

		// If all remainders matched, we found x
		if(j == k){
			return x;
		}
		x++;
	}
	return x;
}

int main(void){
	int num[] = {3, 4, 5};
	int rem[] = {2, 3, 1};
	int k = sizeof(num)/sizeof(num[0]);
	std::cout << "x is " << findMinX(num, rem, k);
	return 0;
}

