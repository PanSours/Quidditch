#include <iostream>
#include <cstdlib>
#include <string>
#include "ball.h"

using namespace std;

Ball::Ball(void) {}

Ball::~Ball(void) {
	cout<<"A "<<ball_type<<" Is Out Of The Game"<<endl;
}

int Ball::get_points(void) {
	return points;
}
string Ball::get_ball_type(void) {
	return ball_type;
}

Quaffle::Quaffle() : Ball() {
	ball_type="Quaffle";
	points=10;
	cout<<"A "<<ball_type<<"Is In The Game "<<endl;
}
		

int Quaffle::battle(int* score1,int* score2,Player* player1,Player* player2) {
        
	if(player1->get_power()>player2->get_power()) {

		   if(player1->get_position()!="Keeper") *score1 = *score1 + points;
		   else {
			cout<<"Draw"<<endl;
		   }

	}
		
	if(player1->get_power()<0 && player2->get_position()!="Keeper") {
		cout<<"Draw"<<endl;
	}
        
        if(player1->get_power()<player2->get_power()) {
	
		if(player2->get_position()!="Keeper") *score2 = *score2 + points;
		else {
              		cout<<"Draw"<<endl;
		}

	}
		
	if(player2->get_power()<0 && player1->get_position()!="Keeper") {
        	cout<<"Draw"<<endl;
	}

        if(player1->get_power()==player2->get_power()) {
		cout<<"Draw"<<endl;
	}

	return 0;
	
}

Bludger::Bludger() : Ball() {
	ball_type="Bludger";
	points=-2;
	cout<<"A "<<ball_type<<" Is In The Game"<<endl;
}

int Bludger::battle(int* score1,int* score2,Player* player1,Player* player2) {

	if(player1->get_position()=="Beater" && player2->get_position()=="Beater") {
		
		if(player1->get_power()>=0) {
	      		
			if(player1->get_power()>player2->get_power()) {
				cout<<"Bludger Hits Player2"<<endl;
				return 2;
			}
	      		else if(player1->get_power()<player2->get_power()) {
                		cout<<"Bludger Hits Player1"<<endl;
                		return 1;
			}
		  	else {
				cout<<"Draw"<<endl;
				return 0;
			}
	   	}
	   
	   	if(player2->get_power()>=0) {
		
			if(player1->get_power()<player2->get_power()) {
                		cout<<"Bludger Hits Player1"<<endl;
                		return 1;
			}
	      		else if(player1->get_power()>player2->get_power()){
                  		cout<<"Bludger Hits Player2"<<endl;
				return 2;
			}
		  	else {
				cout<<"Draw"<<endl;
				return 0;
			}

	   	}

	   	if(player1->get_power()==player2->get_power()) {
		  	cout<<"Draw"<<endl;
		  	return 0;
		}

	}
	   
	if(player1->get_position()!="Beater" && player2->get_position()=="Beater") {
	
		if(player2->get_power()<0) {
            		cout<<"Draw"<<endl;
            		return 0;
	    	}
 		else {
                	cout<<"Bludger Hits Player1"<<endl;
                	return 1;
		}

    	}

	if(player2->get_position()!="Beater" && player1->get_position()=="Beater") {

		if(player1->get_power()<0) {
            		cout<<"Draw"<<endl;
            		return 0;
		}
          	else {
                	cout<<"Bludger Hits Player2"<<endl;
			return 2;
		}

	}

	if(player1->get_position()!="Beater" && player2->get_position()!="Beater") {
		cout<<"Draw"<<endl;
        	return 0;
	}

	return 0;
	
}

GoldenSnitch::GoldenSnitch() : Ball() {
	ball_type="GoldenSnitch";
	points=150;
	cout<<"A "<<ball_type<<"Is In The Game "<<endl;
}

int GoldenSnitch::battle(int* score1,int* score2,Player* player1,Player* player2) {

	if(player1->get_position()=="Seeker" && player2->get_position()=="Seeker") {
	
		if(player1->get_power()>=0) {
	      	
			if(player1->get_power()>player2->get_power()) {
		  		*score1=*score1 +points;
		  		return 3;
			}
	      		else if(player1->get_power()<player2->get_power()) {
				*score2=*score2 +points;
		       		return 3;
			}
		       	else {
                    		cout<<"Draw"<<endl;
            			return 0;
			}

	   	}

	   	if(player2->get_power()>=0) {

	      		if(player1->get_power()<player2->get_power()) {
		  		*score2=*score2 +points;
		    		return 3;
		  	}
	      		else if(player1->get_power()>player2->get_power()) {
				*score1=*score1 +points;
		      		return 3;
			}
			else {
                		cout<<"Draw"<<endl;
            			return 0;
			}

	   	}

	   	if(player1->get_power()==player2->get_power()) {
			cout<<"Draw"<<endl;
			return 0;
		}

	}

	if(player1->get_position()!="Seeker" && player2->get_position()=="Seeker") {
		
		if(player2->get_power()<0) {
            		cout<<"Draw"<<endl;
            		return 0;
	    	}
 		else {
			*score2=*score2 +points;
			return 3;
		}

    	}

	if(player2->get_position()!="Seeker" && player1->get_position()=="Seeker") {
		
		if(player1->get_power()<0) {
            		cout<<"Draw"<<endl;
            		return 0;
		}
          	else {
			*score1=*score1 +points;
		       	return 3;
		}

	}

	if(player1->get_position()!="Seeker" && player2->get_position()!="Seeker") {
        	cout<<"Draw"<<endl;
        	return 0;
	}

	return 0;
	
}

