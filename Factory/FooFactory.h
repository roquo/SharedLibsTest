#pragma once

#include <IFoo.h>

class EXPORT FooFactory
{
public:
	static IFoo* Create();
};