#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
class StatsComp;

class Character
{
private:
	StatsComp *stats;
	std::string name;
public:
	virtual bool attack() = 0;
	virtual bool print_stats() = 0;
};

#endif // !CHARACTER_H