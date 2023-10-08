#pragma once
#include <cassert>

template<class T>
class BaseArray
{
private:
	int* m_array;

	int m_maxSize;
	int m_growSize;		
	int m_numElements;
};
