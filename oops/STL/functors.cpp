A functor (or function object) is a C++ class that acts like a function. Functors are called using the same old function call syntax.
To create a functor, we create a object that overloads the operator().

The line,
MyFunctor(10);

Is same as
MyFunctor.operator()(10);

// C++ program to demonstrate working of 
// functors. 
#include <bits/stdc++.h> 
using namespace std; 

// A Functor 
class increment 
{ 
private: 
	int num; 
public: 
	increment(int n) : num(n) { } 

	// This operator overloading enables calling 
	// operator function () on objects of increment 
	int operator () (int arr_num) const { 
		return num + arr_num; 
	} 
}; 

// Driver code 
int main() 
{ 
	int arr[] = {1, 2, 3, 4, 5}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	int to_add = 5; 

	transform(arr, arr+n, arr, increment(to_add)); 

	for (int i=0; i<n; i++) 
		cout << arr[i] << " "; 
} 

Output:

6 7 8 9 10
Thus, here, Increment is a functor, a c++ class that acts as a function.


The line,
transform(arr, arr+n, arr, increment(to_add));

is the same as writing below two lines,
// Creating object of increment
increment obj(to_add); 

// Calling () on object
transform(arr, arr+n, arr, obj); 
Thus, an object a is created that overloads the operator(). Hence, functors can be used effectively in conjunction with C++ STLs.
