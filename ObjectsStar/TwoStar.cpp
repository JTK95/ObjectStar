#include "stdafx.h"

#include "BaseObject.h"
#include "TwoStar.h"

TwoStar::TwoStar()
{}

bool TwoStar::Run()
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

void TwoStar::Rander()
{
	for (int i = 0; i < xpos; i++)
	{
		cout << " ";
	}

	cout << "**" << endl;
}

TwoStar::~TwoStar()
{}