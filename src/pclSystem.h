#include "pclEmitter.h"
#include "pclField.h"
#include "pclType.h"

#pragma once

#include <vector>
#include <string>


class pclSystem{

public:

	pclSystem(double systemGravityY = 0,double systemGravityX = 0) : gravityY(systemGravityY),gravityX(systemGravityX) {}

	void addParticle(pclType &part)	;
	void addEmitter(pclEmitter &emit)	;
	void addField(pclField &attract)	;

	//double getGravity

	void animate();

	void burst(pclEmitter &emit, pclType &part,int amount);


private:
	std::vector<pclType>		particles;
	std::vector<pclEmitter>		emitters;
	std::vector<pclField>		fields;

	double gravityY;
	double gravityX;
};
