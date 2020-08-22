//////////////////////////////////////////
//				player.cpp				//
//			author: Wenjun Zeng			//
//			ID: 1715534					//
//		define player's behaviors and	//
//		attributes						//
//////////////////////////////////////////
#include"player.h"
player::player(int b, int x, int y, int ini_x, int ini_y, int w, int l, int Max_X, int Max_Y, int Place) {
	balance = b;

	X = x;
	Y = y;
	iniX = ini_x;
	iniY = ini_y;
	W = w;
	Len = l;
	Xmax = Max_X;
	Ymax = Max_Y;
	/*
	This set of integers would record the player¡¯s position and size
	on the game board:
	X, Y stand for the current position (X, Y); 
	iniX and iniY stand for the initial position;
	W and Len stand for the width and length of the figure;
	Xmax and Ymax stand for the maximum coordinates on X and Y axis.
	*/
	place = Place;
	//Each block on the game board has an index. The place would record 
	//the index of the player¡¯s current position.
}
//getter and setter:
void  player::setBalance(int money) {
	balance = money;
}

int player::getBalance() {
	return balance;
}

void player::addBalance(int money) {
	balance += money;
}

void player::withdrawBalance(int money) {
	balance -= money;
}

int player::getX() {
	return X;
}

int player::getY() {
	return Y;
}

void player::setX(int w) {
	X = w;
}

void player::setY(int l) {
	Y = l;
}
int player::get_place() {
	return place;
}

//The move method is used to define the player¡¯s movement on the game board
void player::move(int dice) {
	//1:
	if ((X + dice * W) <= Xmax && Y == iniY) {
		setX(X + dice*W);
		setY(Y);
	}
	//2:
	else if ((X + dice * W) > Xmax && Y == iniY) {
		setY(Y + (dice * W + X - Xmax)/W * Len);
		setX(Xmax);
	}

	else if (X == Xmax && (Y + dice * Len) <= Ymax) {
		setY(Y + dice * Len);
		setX(Xmax);
	}
	//3:
	else if (X ==Xmax && (Y + dice * Len) > Ymax) {
		setX(Xmax-(Y + dice * Len -Ymax)/Len*W);
		setY(Ymax);
	}

	else if (Y == Ymax && (X - (dice) * W) >= iniX) {
		setX(X - (dice) *W);
		setY(Ymax);
	}
	//4:
	else if (Y == Ymax && (X - (dice) * W) < iniX) {
		setY(Ymax - (dice * W - X + iniX)/W * Len);
		setX(iniX);
	}
	else if (X == iniX && (Y - dice * Len)>= iniY) {
		setY(Y - dice * Len);
		setX(iniX);
	}
	//1:
	else if (X == iniX && (Y - dice * Len )< iniY) {
		setX(iniX + (dice * Len-Y + iniY)/Len * W);
		setY(iniY);
	}

	if ((place + dice) <= 37) {
		place += dice;
	}
	else {
		place = place + dice - 38;
		addBalance(200);
	}

}

