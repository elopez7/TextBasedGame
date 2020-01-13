#ifndef HEALTHCOMP_H
#define HEALTHCOMP_H

class HealthComp
{
private:
	float currrent_health;
	float max_health;
public:
	bool take_damage(float damage_amount);
	bool kill_player();
};
#endif // !HEALTHCOMP_H