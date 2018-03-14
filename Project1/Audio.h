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
		return 
	}

	int Update() {

		LOG("Audio update!");
		return 
	}

	int PostUpdate() {

		LOG("Audio postupdate!");
		return 
	}

	bool CleanUp() {

		LOG("Audio cleanup!");
		return true;
	}
};

#endif // _AUDIO_H