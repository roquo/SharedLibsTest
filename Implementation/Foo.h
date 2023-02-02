#pragma once

#include <IFoo.h>

class EXPORT Foo : public IFoo
{
public:
	void Bar() override;
};
