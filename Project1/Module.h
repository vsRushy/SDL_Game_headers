#ifndef _MODULE_H
#define _MODULE_H

class Module {

public:

	virtual bool Init() {}
	virtual int PreUpdate() {}
	virtual int Update() {}
	virtual int PostUpdate() {}
	virtual bool CleanUp() {}
};

#endif // _MODULE_H