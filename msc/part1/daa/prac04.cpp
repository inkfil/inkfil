// Prac 04
// Aim:
#include<iostream> 
#include<algorithm> 
#include<chrono>

struct Job{
    char id;
    int dead;
    int profit;
};

bool comparison(Job a, Job b){ 
	return (a.profit > b.profit);
} 

void printJobScheduling(Job arr[], int n){ 
	std::sort(arr, arr+n, comparison); 

	int result[n];
	bool slot[n];

	for(int i=0; i<n; i++){
		slot[i] = false;
    }

	for(int i=0; i<n; i++){ 
	    for(int j=std::min(n, arr[i].dead)-1; j>=0; j--){ 
            if(slot[j]==false){ 
                result[j] = i;
                slot[j] = true;
                break; 
            }
        } 
	}

	for(int i=0; i<n; i++){
        if (slot[i]){
            std::cout << arr[result[i]].id << " ";
        }
    } 
}

int main(){ 
	Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, {'d', 1, 25}, {'e', 3, 15}}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	std::cout << "Following is maximum profit sequence of jobs \n"; 
	
    auto startTime = std::chrono::high_resolution_clock::now();
	printJobScheduling(arr, n);
    auto endTime = std::chrono::high_resolution_clock::now();
    auto diff = std::chrono::duration_cast<std::chrono::nanoseconds>(endTime-startTime);
	std::cout<<"\nTime taken by Hiring Problem to finish is : "<<diff.count()<<" nanoseconds."<<std::endl;
    return 0; 
} 

