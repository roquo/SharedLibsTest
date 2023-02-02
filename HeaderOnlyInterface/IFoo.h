#pragma once

#include "DLLExport.h"

class EXPORT IFoo
{
public:
	virtual ~IFoo() = 0 {}

	virtual void Bar() = 0;
};
