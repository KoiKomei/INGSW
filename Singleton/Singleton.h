#pragma once
#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {

public:
	static Singleton* getInstance() {
		instance = new Singleton();
		
		return instance;
	}

	bool metodo() {
		return qualcosa;
	}

protected:
	bool qualcosa = true;

private:
	Singleton() {};
	static Singleton *instance;


};


#endif // !SINGLETON
