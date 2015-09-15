#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include "ball.h"
#include "spell.h"

using namespace std;

int main (int argc, char** argv) {
	
	int N;	//mber of rounds
	int score1 = 0,score2 = 0;
	int result = 0;
	int i;
	
	Player* player1;
	Player* player2;
	Ball* ball;
	Spell* spell;
	
	if(argc==1) {
        	srand (time(NULL));
        	N = -1;
	}

	if(argc==2) {
		srand (time(NULL));
        	N = atoi(argv[1]);
	}

	if(argc==3) {
		srand (atoi(argv[2]));
        	N = atoi(argv[1]);
	}

	for (i=0; i=N-1; i++) {

        	int random = rand()%4;

		if(random==0) player1= new Chasers;
		else if(random==1) player1= new Beaters;
		else if(random==2) player1= new Keepers;
		else player1= new Seekers;
		
		random=rand()%4;
		if(random==0) player2= new Chasers;
		else if(random==1) player2= new Beaters;
		else if(random==2) player2= new Keepers;
		else player2= new Seekers;
		
		random=rand()%4;
		if(random==0) spell= new InvalidSpells;
		else if(random==1) spell= new PenaltySpells;
		else if(random==2) spell= new BonusSpells;
		else spell= new JamSpells;
		
		random=rand()%3;
		if(random==0) ball= new Quaffle;
		else if(random==1) ball= new Bludger;
		else ball= new GoldenSnitch;
		
		if(result==1) {
			player1->add_spell(-2);
		}

		if(result==2) {
			player2->add_spell(-2);
		}

		result = 0;
		
		random=rand()%2;
		
		if(random==0) spell->witchcraft(player1);
		else spell->witchcraft(player2);
	    	result= ball->battle(&score1,&score2,player1,player2);
		
		delete player1;
		delete player2;
		delete spell;
		delete ball;
		
		cout<<result<<endl;
		if(result==3) break;

	}

	cout<<" Team1 "<<score1<<" ,"<<" Team2 "<<score2<<endl;
	
	return 0;

}


