#include "MyClass.h"

#include <vector>
#include <random>
#include <iostream>


void RandomArray::AddArray(int _NumOfArray)
{
	for (int i = 0; i < _NumOfArray; i++) 
	{
		m_array.push_back(rand100(mt)%100);
	}
	MaxOfArray = _NumOfArray;
}

void RandomArray::InitializeRandomTable()
{
	std::random_device rnd;
	std::mt19937 mt(rnd());
	std::uniform_int_distribution<> rand100(RandomMin, RandomMax);
}

void RandomArray::ShowArrayAll()
{
	for (int i = 0; i < MaxOfArray; i++) 
	{
		std::cout << i << "�ځF" << m_array[i] << "\n";
	}
}

void RandomArray::ShowArrayAvarage()
{
	std::cout << m_avarage;
}

int RandomArray::ShowArrayIndex(int _NumOfIndex)
{
	if (_NumOfIndex < MaxOfArray)
	{
		if (_NumOfIndex >= 0) 
		{
			return m_array[_NumOfIndex];
		}
		else
		{
			return -1;
		}
	}
	else
	{
		return -1;
	}
}

void RandomArray::CalculateAverage()
{
	float sum = 0;
	for (int i = 0; i < MaxOfArray; i++)
	{
		sum += m_array[i];
	}
	m_avarage = sum / MaxOfArray;
}

void RandomArray::ResetArray()
{
	for (int i = 0; i < MaxOfArray; i++)
	{
		m_array[i] = rand100(mt) % 100;
	}
}