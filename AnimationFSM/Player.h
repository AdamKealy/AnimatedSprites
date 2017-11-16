#ifndef PLAYER_H
#define PLAYER_H

#include <Input.h>
#include <Animation.h>
#include <AnimatedSprite.h>

class Player
{
public:
	Player(const AnimatedSprite&);
	~Player();
	AnimatedSprite& getAnimatedSprite();
	void handleInput(Input);
	void update();
	

private:
	Animation m_animation;
	AnimatedSprite m_animated_sprite;
	Player();


};

#endif // !PLAYER_H
