#ifndef _INPUT_H
#define _INPUT_H

#include <stdio.h>
#include <conio.h>
#include "Module.h"
#include "Globals.h"

class Input : public Module {

	bool Init() {

		LOG("Input init!");
		return true;
	}

	int PreUpdate() {

		LOG("Input preupdate!");
		return
	}

	int Update() {

		LOG("Input update!");
		return
	}

	int PostUpdate() {

		LOG("Input postupdate!");
		return
	}

	bool CleanUp() {

		LOG("Input cleanup!");
		return true;
	}
};

#endif // _INPUT_H