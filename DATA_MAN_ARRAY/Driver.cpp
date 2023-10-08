#include <iostream>
//#include "UnorderedArray.h"
#include "OrderedArray.h"
#include "UnorderedArray.h"

using namespace std;

int main()
{
	OrderedArray<int> array(3);
	UnorderedArray<int> uarray(3);

	array.push(4);
	array.push(33);
	array.push(90);
	array.push(23);
	array.push(82); 
	
	uarray.push(1);
	uarray.push(10);
	uarray.push(24);
	uarray.push(7); 
	uarray.push(42);
	
	cout << "Ordered array contents: "; // Ordered Array output

	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;

	cout << "Unordered array contents: "; // Unordered Array output

	for (int i = 0; i < uarray.GetSize(); i++)
	{
		cout << uarray[i] << " ";
	}

	cout << endl;
}