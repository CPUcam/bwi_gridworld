#include "agent/rAgent.h"

#include <cstdlib>

//Max's probabilistic agent - codename 007

bwi_gridworld::Agent* rAgent::clone(int ) {
    for(int i=0; i<4; i++) {
    	return new rAgent(); 
	}
}

char rAgent::nextAction(const bwi_gridworld::Pos& currentPos) {

    int move = std::rand() % 4;
    // std::cout << "move: " << move << std::endl;
    switch(move) {
        case 0 : return 'n'; break;
        case 1 : return 's'; break;
        case 2 : return 'e'; break;
        case 3 : return 'w'; break;
      }
}

void rAgent::eventFound(const bwi_gridworld::Pos &currentPos) {}
