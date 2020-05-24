#include "stdafx.h"

#include "BaseObject.h"
#include "OneStar.h"
#include "TwoStar.h"
#include "ThreeStar.h"

#define OBJECT_COUNT 20

BaseObject* objectList[OBJECT_COUNT];

void InputKey();
void Run();
void Rander();

int main()
{
	while (true)
	{
		//키보드 입력
		InputKey();

		//로직부
		Run();

		//출력부
		system("cls");
		Rander();

		Sleep(10);
	}

	delete[] objectList;
	return 0;
}

//------------------------
// 키보드 입력
//------------------------
void InputKey()
{
	int iKey;

	if (_kbhit())
	{
		iKey = _getch();

		// OneStar 생성
		if (iKey == 0x31)
		{
			for (int i = 0; i < OBJECT_COUNT; i++)
			{
				if (objectList[i] != nullptr)
				{
					continue;
				}
				else
				{
					objectList[i] = new OneStar;
					break;
				}
			}
		}

		// TwoStar 생성
		if (iKey == 0x32)
		{
			for (int i = 0; i < OBJECT_COUNT; i++)
			{
				if (objectList[i] != nullptr)
				{
					continue;
				}
				else
				{
					objectList[i] = new TwoStar;
					break;
				}
			}
		}

		// ThreeStar 생성
		if (iKey == 0x33)
		{
			for (int i = 0; i < OBJECT_COUNT; i++)
			{
				if (objectList[i] != nullptr)
				{
					continue;
				}
				else
				{
					objectList[i] = new ThreeStar;
					break;
				}
			}
		}
	}
}

//------------------------
// 로직부
//------------------------
void Run()
{
	for (int i = 0; i < OBJECT_COUNT; i++)
	{
		if (objectList[i] == nullptr)
		{
			continue;
		}

		if (objectList[i]->Run() == false)
		{
			objectList[i] = nullptr;
		}
	}
}

//------------------------
// 출력부
//------------------------
void Rander()
{
	for (int i = 0; i < OBJECT_COUNT; i++)
	{
		if (objectList[i] == nullptr)
		{
			cout << endl;
			continue;
		}
		else
		{
			objectList[i]->Rander();
		}
	}
}