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

	~Application() {

		for (int i = NUM_MODULES; i > 0; --i) {

			delete modules[i];
		}
	}

	// Initialitize all modules
	bool Init() {

		for (int i = 0; i < NUM_MODULES; ++i) {

			modules[i]->Init();
		}

		return true;
	}

	int PreUpdate() {

		for (int i = 0; i < NUM_MODULES; ++i) {

			modules[i]->PreUpdate();
		}

		return update_status::UPDATE_CONTINUE;
	}

	int Update() {

		for (int i = 0; i < NUM_MODULES; ++i) {

			modules[i]->Update();
		}

		return update_status::UPDATE_CONTINUE;
	}

	int PostUpdate() {

		for (int i = 0; i < NUM_MODULES; ++i) {

			modules[i]->PostUpdate();
		}

		return update_status::UPDATE_CONTINUE;
	}

	bool CleanUp() {

		for (int i = NUM_MODULES; i > 0; --i) {

			modules[i]->CleanUp();
		}

		return true;
	}
};

#endif // _APPLICATION_H