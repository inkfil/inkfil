## C++ dump

---
```
// PythagoreanTriplet.cpp
// g++ PythagoreanTriplet.cpp -o pythagoreantriplet -Wall -Werror -Wpendantic -Wall 
// objdump
// readelf

#include<iostream>
#include<cstdlib>
#include<cmath>
#include<climits>


int main(int argc, char** argv){
	//int a=0, b=0, c=0;
  if(argc==3){
	    int la=std::atoll(argv[1]);
		int lb=std::atoll(argv[2]);
		int lc=std::atoll(argv[3]);
		for(int a=1; a<=la; a++){
			for(int b=1; b<=lb; b++){
				for(int c=1; c<=lc; c++){
					if(std::pow(a,2)+std::pow(b,2)==std::pow(c,2)){
						std::cout<<a<<"^2 + "<<b<<"^2 = "<<c<<"^2"<<std::endl;
						std::cout<<std::pow(a,2)<<" "<<std::pow(b,2)<<" "<<std::pow(c,2)<<std::endl;
					}
				}
			}
		}
	}
	else{
		std::cerr<<"Error.\nUsage: ./pythagoreantriplet arg1 arg2 arg3"<<std::endl;
		return 1;
	}
	return 0;
}
```

---
