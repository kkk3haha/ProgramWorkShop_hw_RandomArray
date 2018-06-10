#pragma once

#include <vector>

class RandomArray
{
private:
	std::vector<int> m_array;
	float m_avarage;
public:
	RandomArray(int Num);
	
	void ShowAll();
	
};