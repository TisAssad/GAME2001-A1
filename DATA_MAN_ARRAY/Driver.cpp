#include <iostream>
//#include "UnorderedArray.h"
#include "OrderedArray.h"
#include "UnorderedArray.h"

using namespace std;

int main()
{
	OrderedArray<int> array(3);
	UnorderedArray<int> uarray(3);

	array.push(3);
	array.push(53);
	array.push(83);
	array.push(23); // Should expand here
	array.push(82); // Should expand here
	
	uarray.push(1);
	uarray.push(10);
	uarray.push(24);
	uarray.push(17); // Should expand here
	uarray.push(2);
	
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

	//cout << "Serach for 53 was found at index: ";
	//cout << array.search(53) << endl; // -1
	//cout << "Serach for 23 was found at index: ";
	//cout << array.search(23) << endl; // 1
}