#ifndef _APPLICATION_H
#define _APPLICATION_H

#include "Globals.h"
#include "Module.h"
#include "Render.h"
#include "Audio.h"
#include "Input.h"
#include "Window.h"

#define NUM_MODULES 4

class Application {

public:
	Module* modules[NUM_MODULES];

public:

	Application() {

		modules[0] = new Window();
		modules[1] = new Input();
		modules[2] = new Audio();
		modules[3] = new Render();
	}

	// Initialitize all modules
	bool Init() {

		for (int i = 0; i < NUM_MODULES; ++i) {

			modules[i]->Init();
		}
	}

	int PreUpdate() {

		for (int i = 0; i < NUM_MODULES; ++i) {

			modules[i]->PreUpdate();
		}
	}

	int Update() {

		for (int i = 0; i < NUM_MODULES; ++i) {

			modules[i]->Update();
		}
	}

	int PostUpdate() {

		for (int i = 0; i < NUM_MODULES; ++i) {

			modules[i]->PostUpdate();
		}
	}

	bool CleanUp() {

		for (int i = NUM_MODULES; i > 0; --i) {

			modules[i]->CleanUp();
		}
	}
};

#endif // _APPLICATION_H