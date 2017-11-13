#include <Climbing.h>
#include <Jumping.h>
#include <Shooting.h>
#include <Walking.h>
#include <Sliding.h>
#include <Idle.h>

#include <string>

void Climbing::idle(Animation* a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Climbing::jumping(Animation* a)
{
	std::cout << "Climbing -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Climbing::shooting(Animation * a)
{
	std::cout <<"Climbing -> Shooting" << std::endl;
	a->setCurrent(new Shooting());
	delete this;
}

void Climbing::walking(Animation * a)
{
	std::cout << "Climbing -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Climbing::sliding(Animation * a)
{
	std::cout << "Climbing -> Sliding" << std::endl;
	a->setCurrent(new Sliding());
	delete this;
}
