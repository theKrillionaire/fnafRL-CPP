#ifndef ANIMATRONIC_H
#define ANIMATRONIC_H

class animatronic {
	private:
		int timer = 1000;
		int diff = 20;
		int position = 0;
	public:
		void update();
		void forcePos(int force);
};

#endif
