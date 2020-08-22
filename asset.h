#pragma once
#ifndef ASSET_H
#define ASSET_H
class asset {
public:
	asset(int = 0, int = 0, int = 0);
	int getValue();
	void setOwn(int num);
	int getOwn();
	int getPlace();
	void addValue(int num);
private:
	int place;
	int value;
	int own;
};

#endif