#include "stdafx.h"

#include "BaseObject.h"
#include "ThreeStar.h"

ThreeStar::ThreeStar()
{}

bool ThreeStar::Run()
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

void ThreeStar::Rander()
{
	for (int i = 0; i < xpos; i++)
	{
		cout << " ";
	}

	cout << "***" << endl;
}

ThreeStar::~ThreeStar()
{}