#ifndef _MODULE_H
#define _MODULE_H

class Module {

public:

	virtual bool Init() { return true; }
	virtual int PreUpdate() { return update_status::UPDATE_CONTINUE; }
	virtual int Update() { return update_status::UPDATE_CONTINUE; }
	virtual int PostUpdate() { return update_status::UPDATE_CONTINUE; }
	virtual bool CleanUp() { return true; }
};

#endif // _MODULE_H