// Based on youtube serie
// https://www.youtube.com/watch?v=QKCfQtSX8Rg

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// ENCAPSULATION = Combine what the object is with what it does
// ADT = Abstract Data Type 
//--------------------------------------------------------------------
// Base class (parrent)
class Monster
{
	public:
		// Constructor
		Monster() { cout << "\n\n\tBuilding a Monster"; }
		// Destructor
		~Monster() { cout << "\n\n\tDestroying a Monster"; }
		
		// Member methods
		void Rampage() { cout << "\n\n\tMonster rampaging through the city!"; }
		void DisplayStats()
		{
			cout << "\n\n\t-------------------Monster Stats---------------------";
			cout << "\n\tName: " << MonsterName;
			cout << "\n\tLife: " << LIFE;
			cout << "\n\tSize: " << SIZE;
			cout << "\n\tWeight: " << WEIGHT;
			cout << "\n\t-----------------------------------------------------\n";
		}
		
		// Accessor Methods
		int getLife() { return LIFE; }
		void setLife(int x) { LIFE = x; }
		double getSize() { return SIZE; }
		void setSize(double x) { SIZE = x; }		
		double getWeight() { return WEIGHT; }
		void setWeight(double x) { WEIGHT = x; }
		string getMonsterName() { return MonsterName; }
		void setMonsterName(string x) { MonsterName = x; }			
				
	private:
		int LIFE;
		double SIZE;
		double WEIGHT;
		string MonsterName;
			
};

// subclass (chaild class)
class Dragon : public Monster 
{
	public:
		// Constructor and Destructor
		Dragon () { cout << "\n\n\tBuidling a Dragon.";	}
		~Dragon () { cout << "\n\n\tDestroying a Dragon."; }
		
		// Memeber methods
		void BreatheFire() { cout << "\n\n\tDragon breathing.";	}
	
	//private:
};

class Unicorn : public Monster 
{
	public:
		// Constructor and Destructor
		Unicorn () { cout << "\n\n\tBuidling a Unicorn.";	}
		~Unicorn () { cout << "\n\n\tDestroying a Unicorn."; }
		
		// Memeber methods
		void Prance() { cout << "\n\n\tUnicorn prancing.";	}
	
	//private:
};
//--------------------------------------------------------------------

int main(int argc, char** argv) {
	
	cout << "\n\n\tWelcome to CLASSES! In main().";
	
	// Stack	
	Monster Godzilla;
	Godzilla.setLife(500);
	Godzilla.setSize(1000);
	Godzilla.setWeight(5000.5);
	Godzilla.setMonsterName("Godzilla");
	
	Godzilla.DisplayStats();
	
	// The Heap (Free Store)
//	Monster * Mothra = new Monster();
//	Mothra->setLife(430);
//	Mothra->setSize(860);
//	Mothra->setWeight(3477);
//	Mothra->setMonsterName("Mothra");
//	
//	Mothra->DisplayStats();	

	Dragon * Sue = new Dragon();
	Unicorn * Bob = new Unicorn();
	Sue->setLife(450);
	Sue->setSize(230);
	Sue->setWeight(320);
	Sue->setMonsterName("Sue");	
	
	Sue->DisplayStats();
	Sue->BreatheFire();	
	
	Bob->setLife(650);
	Bob->setSize(50);
	Bob->setWeight(34);
	Bob->setMonsterName("Bob");	
	
	Bob->DisplayStats();
	Bob->Prance();	
	
// Delete objects in the Heap
	delete Sue;
	delete Bob;	
//	delete Mothra;
	
//----------------------------------------------------------------------	
	cout<< "\n\n\t";
	system("pause");
	return 0;
}