#ifndef _AUDIO_H
#define _AUDIO_H

#include <stdio.h>
#include <conio.h>
#include "Module.h"
#include "Globals.h"

class Audio : public Module {

	bool Init() {

		LOG("Audio init!");
		return true;
	}

	int PreUpdate() {

		LOG("Audio preupdate!");
		return update_status::UPDATE_CONTINUE;
	}

	int Update() {

		LOG("Audio update!");
		return update_status::UPDATE_CONTINUE;
	}

	int PostUpdate() {

		LOG("Audio postupdate!");
		return update_status::UPDATE_CONTINUE;
	}

	bool CleanUp() {

		LOG("Audio cleanup!");
		return true;
	}
};

#endif // _AUDIO_H