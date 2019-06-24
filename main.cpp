#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <stdlib.h>
#include <ctype.h>
#include <ctime>

#include "PokemonEntris.h"

using namespace std;

void RandomFacts(string *factslist)
{
	int size = 36;
    system("cls");
    int Rnumber;
    srand((unsigned int)time( NULL ) );
    for (int i = 0; i < 3; i++)
    {
      Rnumber = (rand() % size);
    }
    cout << factslist[Rnumber] << endl;
    //cin.get();
    while (cin.get() != '\n')
    {
    }
}

void FactsList(string * factslist)
{
    ifstream InFile ("PokemonFacts.txt");
    if ( !InFile.good() )
        cout<<"There Are No Pokemon Facts Entries\n";
    else
    {
		int i = 0;
		while (!InFile.eof()) {
			getline(InFile, factslist[i]);
			i++;
		}
            
        
    }
}

int main()
{
    string trainerName;
    string pokefacts[36];
    int menuStatus;
    string menu;
    int leng;
    PokemonEntris Pokedex;
    FactsList(&pokefacts[0]);
    Pokedex.createPokedex("PokedexEntris.txt"); // txt파일에 있는 포켓몬 정보들을 가져오기
    cout << "Trainer, Please enter your name:\n";
    getline(cin, trainerName);
    leng = 26-trainerName.length();
    do {
        system("cls");
        cout << "===============Pokedex===============" << endl <<
			"- Kanto's Regional Pokedex          |" << endl <<
			"- Trainer: " << trainerName;
        for (int i = 0; i< leng-1;i++)
            cout << " ";
        cout << "|" << endl << 
			"                                    |"<<endl<<
			"- Please Select The Desired Option: |" << endl <<
			"- 1. Pokemon General Information    |" << endl <<
			"- 2. Pokemon Battle Information     |" << endl <<
			"- 3. Pokemon Distribution           |" << endl <<
			"- 4. Pokemon Facts                  |" << endl <<
			"- 5. Turn off Pokedex               |"<< endl <<
			"====================================="<< endl;
        getline(cin, menu);
        menuStatus = atoi(menu.c_str());

        switch (menuStatus){
            case 1:
                Pokedex.PokemonGeneralInformationMenu(trainerName);
                break;
            case 2:
                Pokedex.PokemonBattleInformationMenu(trainerName);
                break;
            case 3:
				Pokedex.PokemonDistribution(trainerName);
                break;
            case 4:
				RandomFacts(&pokefacts[0]);
				break;
			case 5:
				system("cls");
				cout << "Good Luck Adventurer!\nGotta catch 'em all!!" << endl;
				break;
        }
    }while (menuStatus != 5);
    return 0;
}
