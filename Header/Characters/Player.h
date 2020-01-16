#ifndef PLAYER_H
#define PLAYER_H

#include "string"

class StatsComp;

class Player
{
private:
	StatsComp* stats;
	std::string name;
public:
	Player();
	Player(StatsComp statscomp, std::string cname);
};

#endif // !PLAYER_H