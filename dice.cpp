//////////////////////////////////////////
//				player.cpp				//
//			author: Wenjun Zeng			//
//			ID: 1715534					//
//		define behaviors and			//
//		variables of a dice				//
//////////////////////////////////////////
#include<stdlib.h>
#include <time.h>
#include "dice.h";
using namespace std;


dice::dice(int r, int m) {
	max = r;
	min = m;
	srand(time(NULL));
	roll_dice();
	get_dice();
}
void dice::roll_dice() {
	number = rand() % max + min;
}
int dice::get_dice() {
	roll_dice();
	return number;
}