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
		std::cout << "�m�ۂ���z��̗ʂ���͂��Ă������� ->";
		std::cin >> InputNum;
		std::cout << "\n";

		if (InputNum > 0)
		{
			isValidInput = true;
			randomArray->AddArray(InputNum);
			std::cout << "�m�ۂɐ������܂����B\n";
		}
		else
		{
			std::cout << "�s���Ȓl�ł��B\n";
			
		}
	}

	while (action != Action_End)
	{
		std::cout << "\n";
		std::cout << "1 : �C���f�b�N�X�w��\n";
		std::cout << "2 : �z����̗v�f���ׂĕ\��\n";
		std::cout << "3 : ���ϒl��\��\n";
		std::cout << "4 : �v�f�����ׂē���Ȃ���\n";
		std::cout << "0 : �I��\n";
		std::cout << "����ɑΉ������L�[����͂��Ă������� ->";

		std::cin >> InputNum;
		std::cout << "\n";

		action = (Action)InputNum;

		switch (action)
		{

		case Action_End:
			break;

		case Action_PointAtIndexFromArray:
			int InputIndex;
			std::cout << "�w�肷��C���f�b�N�X ->";
			std::cin >> InputIndex;
			std::cout <<"�C���f�b�N�X:"<<InputIndex<< randomArray->ShowArrayIndex(InputIndex);
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