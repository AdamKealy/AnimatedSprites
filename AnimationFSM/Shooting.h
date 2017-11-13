#ifndef SHOOTING_H
#define SHOOTING_H

#include <State.h>

class Shooting : public State
{
public:
	Shooting() {};
	~Shooting() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void climbing(Animation* a);
	void walking(Animation* a);
	void sliding(Animation* a);

};
#endif // !SHOOTING_H