#ifndef PLAYER_H
#define	PLAYER_H

using namespace std;

class Player {

	protected:
		int power;
		string position;
	public:
		Player(void);
		~Player(void);

		int get_power(void);
		string get_position(void);

		void add_spell(int y);
};

class Chasers: public Player {
	public:
		Chasers();
};

class Beaters: public Player {
	public:
		Beaters();
};

class Keepers: public Player {
	public:
		Keepers();
};

class Seekers: public Player {
	public:
		Seekers();
};
		
#endif	/* PLAYER_H */
