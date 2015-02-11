#ifndef DICECUP_HPP_INCLUDED
#define DICECUP_HPP_INCLUDED

class DiceCup
{
	private:
		int numDice;
		int numFaces;

	public:
		DiceCup();
		DiceCup(int, int);
		void setNumDice(int);
		void setNumFaces(int);
		int rollDice();
};
#endif
