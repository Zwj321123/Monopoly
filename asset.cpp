//////////////////////////////////////////
//				asset.cpp				//
//			author: Wenjun Zeng			//
//			ID: 1715534					//
//		define each esset's behaviors	//
//		and attributes					//
//////////////////////////////////////////
#include"asset.h"
asset::asset(int p,  int v, int o) {
	place = p;
	value = v;
	own = o;
}

int asset::getValue() {
	return value;
}

void asset::setOwn(int num) {
	own = num;
}

int asset::getOwn() {
	return own;
}

int asset::getPlace() {
	return place;
}
void asset::addValue(int num) {
	value += num;
}