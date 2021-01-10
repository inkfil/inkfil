# C++ dump

---
## C++ Tools:

	gcc(g++):
	gdb:
	gsl:
	valgrind:
	gpof:
	objdump:
	readelf:
	

---

## C++ Snipets

```C++
#include<iostream>
#include<climits>	// Climits : limits of standard data types
void printLimits(){
	//Integer
	std::cout<<"Limits of int\n\tMax:\t"<<INT_MAX<<"\n\tMin:\t"<<INT_MIN<<"\n";
	std::cout<<"Limits of unsigned int\n\tMax:\t"<<UINT_MAX<<"\n\tMin:\t"<<0<<"\n";
	std::cout<<"Limits of short\n\tMax:\t"<<SHRT_MAX<<"\n\tMin:\t"<<SHRT_MIN<<"\n";
	std::cout<<"Limits of unsigned short\n\tMax:\t"<<USHRT_MAX<<"\n\tMin:\t"<<0<<"\n";
	std::cout<<"Limits of Long\n\tMax:\t"<<LONG_MAX<<"\n\tMin:\t"<<LONG_MIN<<"\n";
	std::cout<<"Limits of unsigned long\n\tMax:\t"<<ULONG_MAX<<"\n\tMin:\t"<<0<<"\n";
	std::cout<<"Limits of long long\n\tMax:\t"<<LLONG_MAX<<"\n\tMin:\t"<<LLONG_MIN<<"\n";
	std::cout<<"Limits of unsigned long long\n\tMax:\t"<<ULLONG_MAX<<"\n\tMin:\t"<<0<<"\n";

	//Char
	std::cout<<"Limits of char\n\tMax:\t"<<CHAR_MAX<<"\n\tMin:\t"<<CHAR_MIN<<"\n";
}

// sizeof standard data types
void printSizeof(){
	//Bool
	std::cout<<"size of bool: "<<sizeof(bool)<<"\n";
	
	//Char
	std::cout<<"Size of char: "<<sizeof(char)<<"\n";
	std::cout<<"size of unsigned char: "<<sizeof(unsigned char)<<"\n";
	std::cout<<"size of signed char: "<<sizeof(signed char)<<"\n";
	std::cout<<"size of wchar_t: "<<sizeof(wchar_t)<<"\n";
	//std::cout<<"size of char8_t: "<<sizeof(char8_t)<<"\n";
	std::cout<<"size of char16_t: "<<sizeof(char16_t)<<"\n";
	std::cout<<"size of char32_t: "<<sizeof(char32_t)<<"\n";

	//Integers, Floats, Doubles
	std::cout<<"size of short / short int / signed short / signed short int: "<<sizeof(short)<<"\n";
	std::cout<<"size of unsigned short / unsigned short int: "<<sizeof(unsigned short)<<"\n";
	std::cout<<"size of int / signed / signed int: "<<sizeof(int)<<"\n";
	std::cout<<"size of unsigned / unsigned int: "<<sizeof(unsigned int)<<"\n";
	std::cout<<"size of long / long int / signed long / signed long int: "<<sizeof(long)<<"\n";
	std::cout<<"size of unsigned long / unsigned long int: "<<sizeof(unsigned long)<<"\n";
	std::cout<<"size of long long / long long int / signed long long / signed long long int: "<<sizeof(long long)<<"\n";
	std::cout<<"size of unsigned long long / unsigned long long int: "<<sizeof(unsigned long long)<<"\n";
	std::cout<<"size of float: "<<sizeof(float)<<"\n";
	std::cout<<"size of double: "<<sizeof(double)<<"\n";
	std::cout<<"size of long double: "<<sizeof(long double)<<"\n";
}

int main(){
	printLimits();
	printSizeof();
	return 0;
}
```

```C++
bool
char
unsigned char
signed char
wchar_t
char8_t
char16_t
char32_t
short
unsigned short
int 
unsigned int
long
unsigned long
long long
unsigned long long
float
double
long double
```


```C++
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


```C++
// Unfinished
// Linear Algebra:
// 	scalar operations
// 	vector operations
// 	matrix operations

#include<iostream>
#include<vector>

//Matrix Class
class Matrix{
	public:
		Matrix(): m_row(3), m_col(3), m_data(m_row * m_col)
		Matrix(size_t row, size_t col): m_row(row), m_col(col), m_data(m_row * m_col){}
		size_t getRow() const {return m_row;}
		size_t getCol() const {return m_col;}
		double& operator()(size_t i, size_t j){return m_data[i*m_col+j];}
		const double& operator()(size_t i, size_t j) const {return m_data[i*m_col+j];}
		
	private:
		size_t m_row, m_col;
		std::vector<double> m_data;
};

//Vector class
class Vector_c{
	public:
		Vector_c(): m_row(3){}
		Vector_c(size_t row): m_row(row), m_data(m_row){}
		size_t getRow() const {return m_row;}
		double& operator()(size_t i){return m_data[i];}
		const double& operator()(size_t i) const {return m_data[i];}
		
	private:
		size_t m_row;
		std::vector<double> m_data;
}

void matMul(const Matrix& mata, const Matrix& matb, Matrix& resmat){

}

void LUFactorization(Matrix& A){
	size_t m=A.getRowNum(), n=A.getColNum();
	for(size_t k=0; k<m-1; ++k){
		for(size_t i=k+1; i<m; ++i){
			double z=A(i, k)/A(k, k);
			A(i, k)=z;
			for(size_t j=k+1; j<n; ++j){
				A(i, j) -= z*A(k, j);
			}
		}
	}


}

int main(){

	return 0;
}
```


```C++
// Unfinished
// Number Theory

#include<iostream>
#include<vector>
#include<climits>
#include<cmath>

///////////////////////////////////////////////
// NUMBER THOERY
///////////////////////////////////////////////

// is odd
// all odd
// is even
// all even
// is prime
// all prime
// is composite
// is coprime
// is perfect number
// gcd (Euler's algorithm, Euler's extended formula)
// lcm
// factorial (with and without recursion)
// calculating pi (liebniz method, ...)
// chinese remainder theorem
// combination (n C r)
// permutation (n P r)
// pythagoras theorem
// pythagorean triplet
// 
// sieve of eratosthenes

///////////////////////////////////////////////
// GEOMETRY
///////////////////////////////////////////////
/*
	1D objects:
		arc length of circle
		length of a line (length of sides of polygons and polyhedrons)
		radius/diameter of circle
	2D objects:
		triangle
		square
		rectangle
		circle
		rhombus
		trapezium/trapezoid
		parallelogram
		
	3D objects:
		n sided pyramid
		cone
		cube
		cuboid
		cylinder
		sphere
		rhombohedron
		3D-trapezoid
	Types of triangles:
		equilateral triangles
		isoscales triangle
		scalene triangles
		right angled triangles
		obtuse angled triangles
		accute angled triangles
*/
// Areas (2D and 3D shapes)
// Volumes (3D shapes)
// Perimeters (2D and 3D shapes)
// Line (distance [co-ordinate diatance, polar distance, parametrix distance])
// Conics (parabola, hyperbola, ellipse, circle)

///////////////////////////////////////////////
// Analytical Geometry
///////////////////////////////////////////////

int main(){

	return 0;
}
```

