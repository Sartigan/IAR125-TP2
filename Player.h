#ifndef PLAYER_H
#define PLAYER_H

#include "Vehicle.h"
#include "MovingEntity.h"

class SteeringBehavior;

class Player : public Vehicle
{
public:
	Player(	GameWorld* world,
			Vector2D position,
			double    rotation,
			Vector2D velocity,
			double    mass,
			double    max_force,
			double    max_speed,
			double    max_turn_rate,
			double    scale,
			int		  color);
	void HandleKeyPresses(WPARAM wParam);
};

#endif
