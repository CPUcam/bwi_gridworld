#include "agent/rAgent.h"

#include <cstdlib>

//Max's probabilistic agent - codename 007
int count = 0;
bwi_gridworld::Agent* rAgent::clone(int ) {
    for(int i=0; i<4; i++) {
    	return new rAgent(); 
	}
}

char rAgent::nextAction(const bwi_gridworld::Pos& currentPos) {
    count++;
    if (count < 6) {
        return 'n';
    }
    else if (5 < count < 11) {
        return 'e';
    }
    else if (10 < count < 16) {
        return 's';
    }
    else if (15 < count < 21) {
        return 'w';
    }
    else if (count > 20) {
        count = 0;
    }
}

void rAgent::eventFound(const bwi_gridworld::Pos &currentPos) {}
