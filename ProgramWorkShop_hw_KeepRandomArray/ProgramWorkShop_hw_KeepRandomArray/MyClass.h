#pragma once

#include <vector>
#include <random>

#define RandomMax 100
#define RandomMin 1

class RandomArray
{
private:
	std::vector<int> m_array;
	float m_avarage;

	int MaxOfArray;

	std::random_device rnd;
	std::mt19937 mt;
	std::uniform_int_distribution<> rand100;

public:
	RandomArray();
	void AddArray(int _NumOfArray);
	void InitializeRandomTable();
	void CalculateAverage();
	void ResetArray();
	void ShowArrayAll();
	void ShowArrayAvarage();

	int ShowArrayIndex(int _NumOfIndex);
	
};