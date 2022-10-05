#include <iostream>

using namespace std;

class movement
{
	public:
		movement() { cout << "movement class used" << endl; }
		void moveUp() { location[0]++; }
		void moveDown() { location[0]--; }
		void moveLeft() { location[1]--; }
		void moveRight() { location[1]++; }

	protected:
		// x, y
		int location[3] = { 0,0 };

	private:
		
};

class character: public movement
{
	public:
		character() { cout << "character class used" << endl; }
		void printLocation() { cout << "X: " << location[0] << " " << "Y: " << location[1] << endl; }

	private:
		
		

};

int main()
{
	character player;
	int input = 0;
	while (1) 
	{
		cout << "what to do? " << endl;
		cout << "1 = move up, 2 = move down, 3 = move right, 4 = move left" << endl;
		cin >> input;

		if (input == 1)
		{
			player.moveUp();
			player.printLocation();
		}
		else if (input == 2)
		{
			player.moveDown();
			player.printLocation();
		}
		else if (input == 3)
		{
			player.moveRight();
			player.printLocation();
		}
		else if (input == 4)
		{
			player.moveLeft();
			player.printLocation();
		}
		else
		{
			cout << "input doesnt do anything..." << endl;
		}
	}
	
	return 0;
}
