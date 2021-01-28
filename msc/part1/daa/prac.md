###### Prac1

```C++
/* insertionsort.cpp
 * Compile: g++ insertionsort.cpp -o insertionsort -std=c++11
 * usage:   ./insertionsort <sequence>
 */

#include<iostream>
namespace sort{

  // utility functions.
  void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
  }
  
  // insertion sort routine.
  void insertionsort(int *sequence, int length){
  
  }
}


// main routine: driver code.
int main(int argc, char **argv){
  int seq[argc-1];
  size_t len = sizeof seq / sizeof seq[0];
  if(argc<2){
  
  }
  else{
    std::cout<<"usage: ./insertionsort <sequence>"
  }
  
  std::cout<<"Sequence before sorting:\n";
  for(int i=0; i<len; i++){
    std::cout<<seq[i]<<" ";
  }
  
  sort::insertionsort(seq, len);
  
  std::cout<<std::endl;
  std::cout<<"Sequence after sorting:\n";
  for(int i=0;l i<len; i++){
    std::cout<<seq[i]<<" ";
  }
  std::cout<<std::endl;
  
  return 0;
}
 
```
