#include "MyClass.h"
#include <iostream>

enum Action
{
	Action_End,
	Action_PointAtIndexFromArray,
	Action_AllArray,
	Action_AverageOfArray,
	Action_ResetArray	
};

int main()
{
	bool isValidInput = false;
	int InputNum = 0;

	RandomArray *randomArray;
	Action action = Action_PointAtIndexFromArray;

	randomArray = new RandomArray;

	randomArray->InitializeRandomTable();
	
	while (!isValidInput)
	{
		std::cout << "確保する配列の量を入力してください ->";
		std::cin >> InputNum;
		std::cout << "\n";

		if (InputNum > 0)
		{
			isValidInput = true;
			randomArray->AddArray(InputNum);
			std::cout << "確保に成功しました。\n";
		}
		else
		{
			std::cout << "不正な値です。\n";
			
		}
	}

	while (action != Action_End)
	{
		std::cout << "\n";
		std::cout << "1 : インデックス指定\n";
		std::cout << "2 : 配列内の要素すべて表示\n";
		std::cout << "3 : 平均値を表示\n";
		std::cout << "4 : 要素をすべて入れなおす\n";
		std::cout << "0 : 終了\n";
		std::cout << "操作に対応したキーを入力してください ->";

		std::cin >> InputNum;
		std::cout << "\n";

		action = (Action)InputNum;

		switch (action)
		{

		case Action_End:
			break;

		case Action_PointAtIndexFromArray:
			int InputIndex;
			std::cout << "指定するインデックス ->";
			std::cin >> InputIndex;
			std::cout <<"インデックス:"<<InputIndex<< randomArray->ShowArrayIndex(InputIndex);
			break;

		case Action_AllArray:
			randomArray->ShowArrayAll();
			break;

		case Action_AverageOfArray:
			randomArray->CalculateAverage();
			randomArray->ShowArrayAvarage();
			break;

		case Action_ResetArray :
			randomArray->ResetArray();
			break;

		}
	}

	delete randomArray;

	return 0;
}