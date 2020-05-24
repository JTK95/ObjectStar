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
		//Ű���� �Է�
		InputKey();

		//������
		Run();

		//��º�
		system("cls");
		Rander();

		Sleep(10);
	}

	delete[] objectList;
	return 0;
}

//------------------------
// Ű���� �Է�
//------------------------
void InputKey()
{
	int iKey;

	if (_kbhit())
	{
		iKey = _getch();

		// OneStar ����
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

		// TwoStar ����
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

		// ThreeStar ����
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
// ������
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
// ��º�
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