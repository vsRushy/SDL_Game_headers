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
		return update_status::UPDATE_CONTINUE;
	}

	int Update() {

		LOG("Input update!");
		return update_status::UPDATE_CONTINUE;
	}

	int PostUpdate() {

		LOG("Input postupdate!");
		return update_status::UPDATE_CONTINUE;
	}

	bool CleanUp() {

		LOG("Input cleanup!");
		return true;
	}
};

#endif // _INPUT_H