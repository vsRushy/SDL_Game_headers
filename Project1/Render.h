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
		return
	}

	int Update() {

		LOG("Render update!");
		return
	}

	int PostUpdate() {

		LOG("Render postupdate!");
		return
	}

	bool CleanUp() {

		LOG("Render cleanup!");
		return true;
	}
};

#endif // _HEADER_H