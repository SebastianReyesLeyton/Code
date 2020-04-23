#pragma once
#include "../glm/glm.h"
#include <iostream>
#include <string>
#include <vector>

class Malla {
	
	public:
		Malla();
		GLMmodel* objmodel_ptr;
		char* name;
		void dibujarMalla();
		void dibujarMallaTextura();
		void transformaciones(std::vector< GLfloat > transformation);
		void abrirMalla();
		~Malla();
};