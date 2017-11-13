#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Shooting.h>
#include <Walking.h>
#include <Sliding.h>

#include <string>

void Idle::handleInput() {}
void Idle::update() {}

void Idle::jumping(Animation* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Idle::climbing(Animation* a)
{
	std::cout << "Idle -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Idle::shooting(Animation * a)
{
	std::cout << "Idle -> Shooting" << std::endl;
	a->setCurrent(new Shooting());
	delete this;
}

void Idle::walking(Animation * a)
{
	std::cout << "Idle -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Idle::sliding(Animation * a)
{
	std::cout << "Idle -> Sliding" << std::endl;
	a->setCurrent(new Sliding());
	delete this;
}
