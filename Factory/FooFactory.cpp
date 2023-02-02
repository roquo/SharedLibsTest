#include "FooFactory.h"

#include <Foo.h>

IFoo* FooFactory::Create()
{
	return new Foo();
}
