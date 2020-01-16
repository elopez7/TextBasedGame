#include <algorithm>

#include "StatsComp.h"


float StatsComp::take_damage(float damage_amount)
{
	if (damage_amount <= defense)
	{
		damage_amount = 1.0f;
		currrent_health -= damage_amount;
		return std::clamp(currrent_health, 0.0f, max_health);
	}

	float actual_damage = damage_amount - defense;
	currrent_health -= actual_damage;
	return std::clamp(currrent_health, 0.0f, max_health);
}

bool StatsComp::kill_player()
{
	return false;
}