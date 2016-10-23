#ifndef LEADER_H
#define LEADER_H
#pragma warning (disable:4786)
//------------------------------------------------------------------------
//
//  Name:   Leader.h
//
//  Desc:   Definition of a simple vehicle that uses steering behaviors
//
//  Author: Mat Buckland 2002 (fup@ai-junkie.com)
//
//------------------------------------------------------------------------
#include "MovingEntity.h"
#include "2d/Vector2D.h"
#include "misc/Smoother.h"
#include "Vehicle.h"

#include <vector>
#include <list>
#include <string>

class GameWorld;
class SteeringBehavior;
class Vehicle;


class Leader : public Vehicle
{
private:
	Vehicle* following;

public:

	Leader(GameWorld* world,
		Vector2D position,
		double    rotation,
		Vector2D velocity,
		double    mass,
		double    max_force,
		double    max_speed,
		double    max_turn_rate,
		double    scale,
		int		  color);

	~Leader();
};


#endif