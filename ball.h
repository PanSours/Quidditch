#ifndef BALL_H
#define	BALL_H

#include "player.h"

using namespace std;

class Ball {

	protected:
		int points;
		string ball_type;
	public:
		Ball(void);
		~Ball(void);

		virtual int battle (int* score1,int* score2,Player* player1,Player* player2) = 0;
		
		int get_points(void);
		string get_ball_type(void);

};

class Quaffle: public Ball {

	public:
		Quaffle();
		int battle (int* score1,int* score2,Player* player1,Player* player2);

};

class Bludger: public Ball {

	public:
		Bludger();
		int battle(int* score1,int* score2,Player* player1,Player* player2);

};

class GoldenSnitch: public Ball {

	public:
		GoldenSnitch();
		int battle(int* score1,int* score2,Player* player1,Player* player2);

};

#endif	/* BALL_H */
