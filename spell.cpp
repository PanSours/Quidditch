#include <iostream>
#include <cstdlib>
#include <string>
#include "spell.h"

using namespace std;


Spell::Spell(void) {}

Spell::~Spell(void) {
	cout<<"A "<<spell_type<<" Timed Out"<<endl;
}

int Spell::get_resault(void) {
	return resault;
}
string Spell::get_spell_type(void) {
	return spell_type;
}

InvalidSpells::InvalidSpells() : Spell() {
	spell_type="Invalid Spell";
	resault=0;
	cout<<"A "<<spell_type<<" Has Been Used"<<endl;
}
	    
void InvalidSpells::witchcraft(Player* player) {
	cout<<"Invalid Spell Out"<<endl;
}

PenaltySpells::PenaltySpells() : Spell() {
	spell_type="Penalty Spell ";
	resault=-2;
	cout<<"A "<<spell_type<<" Has Been Used"<<endl;
}
	 
void PenaltySpells::witchcraft(Player* player) {
	 player->add_spell(resault);
}

BonusSpells::BonusSpells() : Spell() {
	spell_type="Bonus Spell";
	resault=2;
	cout<<"A "<<spell_type<<" Has Been Used"<<endl;
}

void BonusSpells::witchcraft(Player* player) {	
	player->add_spell(resault);
}

JamSpells::JamSpells() : Spell() {
	spell_type="Jam Spell";
	resault=-150;
	cout<<"A "<<spell_type<<" Has Been Used"<<endl;
}
	 
void JamSpells::witchcraft(Player* player) {
	player->add_spell(resault);
}
