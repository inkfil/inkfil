

###### To include vector header.
```C++
#include<vector>
```

###### To create vector of integer.
```C++
// to create a vector of int with unknown size and initial value of elements.
std::vector<int> vec_int;

// to create a vector of int of 'n' size and all initialized to value 'v'.
std::vector<int> vec_int_with_size(n, v);

// to create a vector from another vector (copy of a vector).
std::vector<int> vec_copy(vec_int);
```

###### To iterate vector elements.
```C++
// using for loop.
for(int i=0; i<vec_int.size(); i++){
	std::cout<<v[i]<<" ";
}

// using modern for loop.
for(auto velement:vec_int){
	std::cout<<velement<<" ";
}

// using iterators.
std::vector<int>::iterator vec_iter;
for(vec_iter=vec_int.begin(); vec_iter=vec_int.end(); vec_iter++){
	std::cout<<*vec_iter<<" ";
}
```

###### To get size of a vector.
```C++
// returns an integer number ie number of elements in a vector.
int size_vec_int=vec_int.size();
```

###### To get  the start/end element of a vector.
```C++
// using indexing.
vec_int[0]; // for start element.
vec_int[vec_int.size()-1]; // for end element.

// using vector function.
vec_int.begin(); // for start element.
vec_iter.end(); // for end element.
```
