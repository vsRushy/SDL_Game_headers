#ifndef _RENDER_H
#define _RENDER_H

#include <stdio.h>
#include <conio.h>
#include "Module.h"
#include "Globals.h"

class Render : public Module {

	bool Init() {

		LOG("Render init!");
		return true;
	}

	int PreUpdate() {

		LOG("Render preupdate!");
		return update_status::UPDATE_CONTINUE;
	}

	int Update() {

		LOG("Render update!");
		return update_status::UPDATE_CONTINUE;
	}

	int PostUpdate() {

		LOG("Render postupdate!");
		return update_status::UPDATE_CONTINUE;
	}

	bool CleanUp() {

		LOG("Render cleanup!");
		return true;
	}
};

#endif // _HEADER_H