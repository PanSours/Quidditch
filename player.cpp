#include <iostream>
#include <cstdlib>
#include <string>
#include "player.h"

using namespace std;

Player::Player(void) {}

Player::~Player(void) {
	cout<<"A "<<position<<" Is Out Of The Game,with power "<<power<<endl;
}
		
int Player::get_power(void) {
	return power;
}
		
string Player::get_position(void) {
	return position;
}

void Player::add_spell(int y) {
	power = power + y;
}

Chasers::Chasers() : Player(){
	position="Chaser";
	power=rand()%9+2;
	cout<<"A "<<position<<" Is In The Game,with power "<<power<<endl;
}

Beaters::Beaters() : Player(){
	position="Beater";
	power=rand()%3+1;
	cout<<"A "<<position<<" Is In The Game,with power "<<power<<endl;
}

Keepers::Keepers() : Player() {
	position="Keeper";
	power=rand()%5+6;
	cout<<"A "<<position<<" Is In The Game,with power "<<power<<endl;
}

Seekers::Seekers() : Player() {
	position="Seeker";
	power=rand()%2+11;
	cout<<"A "<<position<<" Is In The Game,with power "<<power<<endl;
}

		
