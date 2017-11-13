#include <Hammering.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Idle.h>

void Hammering::idle(Animation * a)
{
	std::cout << "Hammering -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Hammering::jumping(Animation * a)
{
	std::cout << "Hammering -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Hammering::climbing(Animation * a)
{
	std::cout << "Hammering -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
