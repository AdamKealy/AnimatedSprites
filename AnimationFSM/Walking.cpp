#include <Walking.h>
#include <Shooting.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Sliding.h>
#include <Idle.h>

void Walking::idle(Animation * a)
{
	std::cout << "Walkinging -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Walking::jumping(Animation * a)
{
	std::cout << "Walkinging -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Walking::climbing(Animation * a)
{
	std::cout << "Walkinging -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Walking::shooting(Animation * a)
{
	std::cout << "Walkinging -> Shooting" << std::endl;
	a->setCurrent(new Shooting());
	delete this;
}

void Walking::sliding(Animation * a)
{
	std::cout << "Walkinging -> Sliding" << std::endl;
	a->setCurrent(new Sliding());
	delete this;
}

