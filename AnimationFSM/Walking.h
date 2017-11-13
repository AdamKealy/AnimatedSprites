#ifndef WALKING_H
#define WALKING_H

#include <State.h>

class Walking : public State
{
public:
	Walking() {};
	~Walking() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void climbing(Animation* a);
	void shooting(Animation* a);
	void sliding(Animation* a);
};

#endif // !WALKING_H