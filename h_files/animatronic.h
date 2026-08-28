#ifndef ANIMATRONIC_H
#define ANIMATRONIC_H

class animatronic {
	private:
		int timer = 1000;
		int diff = 1;
		int position;
	public:
		void update();
};

#endif
