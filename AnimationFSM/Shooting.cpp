#include <Shooting.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Walking.h>
#include <Sliding.h>
#include <Idle.h>

void Shooting::idle(Animation * a)
{
	std::cout << "Shooting -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Shooting::jumping(Animation * a)
{
	std::cout << "Shooting -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Shooting::climbing(Animation * a)
{
	std::cout << "Shooting -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Shooting::walking(Animation * a)
{
	std::cout << "Shooting -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Shooting::sliding(Animation * a)
{
	std::cout << "Shooting -> Sliding" << std::endl;
	a->setCurrent(new Sliding());
	delete this;
}
