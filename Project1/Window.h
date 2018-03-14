#ifndef _WINDOW_H
#define _WINDOW_H

#include <stdio.h>
#include <conio.h>
#include "Module.h"
#include "Globals.h"

class Window : public Module {

	bool Init() {

		LOG("Window init!");
		return true;
	}

	int PreUpdate() {

		LOG("Window preupdate!");
		return
	}

	int Update() {

		LOG("Window update!");
		return
	}

	int PostUpdate() {

		LOG("Window postupdate!");
		return
	}

	bool CleanUp() {

		LOG("Window cleanup!");
		return true;
	}
};

#endif // _WINDOW_H