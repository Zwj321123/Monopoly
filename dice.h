#pragma once
#ifndef DICE_H
#define DICE_H

class dice {
public:
	dice(int, int);
	void roll_dice();
	int get_dice();
private:
	int max;
	int min;
	int number;
};
#endif