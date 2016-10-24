#include "Player.h"


Player::Player	(GameWorld* world, Vector2D position,	double rotation, Vector2D velocity,	double mass, 
				double max_force, double max_speed, double max_turn_rate, double scale, int color) : 
	Vehicle(world, position, rotation, velocity, mass, max_force, max_speed, max_turn_rate,	scale, color)
{
}


void Player::HandleKeyPresses(WPARAM wParam)
{
	if (wParam == 'Z') {
		Vector2D v = m_vVelocity;
		Vector2D newv = VectorToWorldSpace(Vector2D(MaxSpeed() / 5, 0), m_vHeading, m_vSide);
		SetVelocity(Vector2D(v.x + newv.x, v.y + newv.y));
	}
	if (wParam == 'Q') {
		RotateHeadingToFacePosition(PointToWorldSpace(Vector2D(1, -0.2), Heading(), Side(), Pos()));
	}
	if (wParam == 'S') {
		Vector2D v = m_vVelocity;
		if (v.Length() > 0) {
			double slow = MaxSpeed() / 5;
			if (v.Length() < slow) {
				slow = v.Length();
			}
			Vector2D newv = VectorToWorldSpace(Vector2D(-slow, 0), m_vHeading, m_vSide);
			SetVelocity(Vector2D(v.x + newv.x, v.y + newv.y));
		}
	}
	if (wParam == 'D') {
		RotateHeadingToFacePosition(PointToWorldSpace(Vector2D(1, 0.2), Heading(), Side(), Pos()));
	}
}