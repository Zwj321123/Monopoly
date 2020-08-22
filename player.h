#ifndef PLAYER_H
#define PLAYER_H

class player {
public:
	player(int, int, int, int, int, int, int, int, int, int);
	void setBalance(int = 0);
	int getBalance();
	int getX();
	int getY();
	void setX(int);
	void setY(int);

	int get_place();
	void addBalance(int);
	void withdrawBalance(int);
	void move(int);
private:
	int balance;
	int X;
	int Y;
	int iniX;
	int iniY;
	int W;
	int Len;
	int Xmax;
	int Ymax;
	int place;
};
#endif