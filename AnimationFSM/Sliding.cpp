#include <Sliding.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Shooting.h>
#include <Walking.h>
#include <Idle.h>

void Sliding::idle(Animation * a)
{
	std::cout << "Sliding -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Sliding::jumping(Animation * a)
{
	std::cout << "Sliding -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Sliding::climbing(Animation * a)
{
	std::cout << "Sliding -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Sliding::walking(Animation * a)
{
	std::cout << "Sliding -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Sliding::shooting(Animation * a)
{
	std::cout << "Sliding -> Shooting" << std::endl;
	a->setCurrent(new Shooting());
	delete this;
}