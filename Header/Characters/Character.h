#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <StatsComp.h>

class Character
{
private:
	StatsComp *stats;
	std::string name;
public:
	virtual bool attack();
	virtual bool print_stats();
};

#endif // !CHARACTER_H