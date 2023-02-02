#include <FooFactory.h>

int main()
{
	auto* foo = FooFactory::Create();
	foo->Bar();
	delete foo;
}