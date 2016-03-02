#define _makhluk_h
#ifndef _makhluk_h

using namespace std;

class Makhluk{
	public:
		Makhluk();
		
		virtual void gerak(); 
	private:
		int id //id makhluk 
		int x, y; //posisi makhluk pada board
		char karakter;

};

class hewan : public Makhluk{
	void gerak(){

	}
};

class tumbuhan : public Makhluk{
	void gerak(){

	}
};


#endif