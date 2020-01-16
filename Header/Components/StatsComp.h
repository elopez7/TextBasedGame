#ifndef STATSCOMP_H
#define STATSCOMP_H

class StatsComp
{
private:
	float currrent_health;
	float max_health;
	float attack;
	float defense;
public:
	StatsComp();
	StatsComp(float initial_health, float initial_max_health, float initial_attack, float initial_defense);
	~StatsComp();
	float take_damage(float damage_amount);
	bool kill_player();
};
#endif // !STATSCOMP_H