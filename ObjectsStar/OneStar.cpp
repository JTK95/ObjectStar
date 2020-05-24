#include "stdafx.h"

#include "BaseObject.h"
#include "OneStar.h"

OneStar::OneStar()
{}

bool OneStar::Run()
{
	if (xpos > 75)
	{
		return false;
	}
	else
	{
		++xpos;

		return true;
	}
}

void OneStar::Rander()
{
	for (int i = 0; i < xpos; i++)
	{
		cout << " ";
	}

	cout << "*" << endl;
}

OneStar::~OneStar()
{}