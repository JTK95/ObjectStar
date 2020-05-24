#pragma once

class BaseObject
{
public:
	BaseObject();
	virtual bool Run() = 0;
	virtual void Rander() = 0;
	~BaseObject();

protected:
	int xpos;
};