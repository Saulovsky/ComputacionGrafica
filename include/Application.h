#pragma once

#include <iostream>
#include "Object3D.h"

class Application {
public:
	Application();
	~Application();

	GLint uAngle;
	float fAngle;
	void setup();
	void display();
	void reshape(int w, int h);
	void loadShaders();
	void update();


private:	
	Object3D triangle;
};

