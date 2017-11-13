#ifndef SLIDING_H
#define SLIDING_H

#include <State.h>

class Sliding : public State
{
public:
	Sliding() {};
	~Sliding() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void climbing(Animation* a);
	void walking(Animation* a);
	void shooting(Animation* a);

private:

};
#endif // !SLIDING_H