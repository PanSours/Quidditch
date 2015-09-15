#ifndef SPELL_H
#define	SPELL_H

#include "player.h"

using namespace std;

class Spell {

	protected:
		int resault;
	    	string spell_type;
	public:
		Spell(void);
		~Spell(void);

		virtual void witchcraft(Player* player) = 0;

		int get_resault(void);
		string get_spell_type(void);

};

class InvalidSpells: public Spell {
	
	public:
		InvalidSpells();

	    	void witchcraft(Player* player);

};

class PenaltySpells: public Spell {
	
	public:
		PenaltySpells();

	 	void witchcraft(Player* player);

};

class BonusSpells: public Spell {
	
	public:
		BonusSpells();

	 	void witchcraft(Player* player);

};

class JamSpells: public Spell {

	public:
		JamSpells();

	 	void witchcraft(Player* player);

};

#endif	/* SPELL_H */
