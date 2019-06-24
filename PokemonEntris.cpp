#include "PokemonEntris.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <ctype.h>


PokemonEntris::PokemonEntris()
{
	
    //ctor
}

PokemonEntris::~PokemonEntris()
{
    //dtor
}

void PokemonEntris :: createPokedex(string txtName)
{
    //Takes all the info of the Pokemon and puts them into an array and puts the Pokemon types into a linked list
    string Aux;
    int i = 0;
    ifstream InFile (txtName);
    if ( !InFile.good() )
        cout<<"There Are No Pokemon Entries\n";
    else
    {
        for(i=0 ; !InFile.eof(); i++)
        {
            getline (InFile,pokedex[i].Name,','); // 이름 입력
            getline (InFile,Aux,','); // 도감 번호 입력
            pokedex[i].PokedexNumber = atoi(Aux.c_str()); // string -> char* -> int 변환


            getline (InFile,pokedex[i].type1,','); // 첫번째 타입 입력
            if (pokedex[i].type1 == " Fire")
            {
				distribution["Fire"].push_back(pokedex[i].Name);
                if(Fire == NULL)
                    Fire = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Fire;
                    Fire = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Grass")
            {
				distribution["Grass"].push_back(pokedex[i].Name);
                if(Grass == NULL)
                    Grass = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Grass;
                    Grass = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Water")
            {
				distribution["Water"].push_back(pokedex[i].Name);
                if(Water == NULL)
                    Water = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Water;
                    Water = &pokedex[i];
                }

            }

            else if (pokedex[i].type1 == " Dragon")
            {
				distribution["Dragon"].push_back(pokedex[i].Name);
                if(Dragon == NULL)
                    Dragon = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Dragon;
                    Dragon = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Rock")
            {
				distribution["Rock"].push_back(pokedex[i].Name);
                if(Rock == NULL)
                    Rock = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Rock;
                    Rock = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Ground")
            {
				distribution["Ground"].push_back(pokedex[i].Name);
                if(Ground == NULL)
                    Ground = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Ground;
                    Ground = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Electric")
            {
				distribution["Electric"].push_back(pokedex[i].Name);
                if(Electric == NULL)
                    Electric = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Electric;
                    Electric = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Poison")
            {
				distribution["Poison"].push_back(pokedex[i].Name);
                if(Poison == NULL)
                    Poison = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Poison;
                    Poison = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Ice")
            {
				distribution["Ice"].push_back(pokedex[i].Name);
                if(Ice == NULL)
                    Ice = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Ice;
                    Ice = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Normal")
            {
			distribution["Normal"].push_back(pokedex[i].Name);
                if(Normal == NULL)
                    Normal = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Normal;
                    Normal = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Flying")
            {
			distribution["Flying"].push_back(pokedex[i].Name);
                if(Flying == NULL)
                    Flying = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Flying;
                    Flying = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Bug")
            {
			distribution["Bug"].push_back(pokedex[i].Name);
                if(Bug == NULL)
                    Bug = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Bug;
                    Bug = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Psychic")
            {
			distribution["Psychic"].push_back(pokedex[i].Name);
                if(Psychic == NULL)
                    Psychic = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Psychic;
                    Psychic = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Fighting")
            {
			distribution["Fighting"].push_back(pokedex[i].Name);
                if(Fighting == NULL)
                    Fighting = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Fighting;
                    Fighting = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Ghost")
            {
			distribution["Ghost"].push_back(pokedex[i].Name);
                if(Ghost == NULL)
                    Ghost = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Ghost;
                    Ghost = &pokedex[i];
                }

            }

            getline (InFile,pokedex[i].type2,','); // 2번째 타입 입력

            if(pokedex[i].type1 != pokedex[i].type2) // 중복 입력 방지
            {
                if (pokedex[i].type2 == " Fire")
                {
					distribution["Fire"].push_back(pokedex[i].Name);
                    if(Fire == NULL)
                        Fire = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Fire;
                        Fire = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Grass")
                {
					distribution["Grass"].push_back(pokedex[i].Name);
                    if(Grass == NULL)
                        Grass = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Grass;
                        Grass = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Water")
                {
					distribution["Water"].push_back(pokedex[i].Name);
                    if(Water == NULL)
                        Water = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Water;
                        Water = &pokedex[i];
                    }

                }

                else if (pokedex[i].type2 == " Dragon")
                {
					distribution["Dragon"].push_back(pokedex[i].Name);
                    if(Dragon == NULL)
                        Dragon = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Dragon;
                        Dragon = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Rock")
                {
					distribution["Rock"].push_back(pokedex[i].Name);
                    if(Rock == NULL)
                        Rock = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Rock;
                        Rock = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Ground")
                {
					distribution["Ground"].push_back(pokedex[i].Name);
                    if(Ground == NULL)
                        Ground = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Ground;
                        Ground = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Electric")
                {
					distribution["Electric"].push_back(pokedex[i].Name);
                    if(Electric == NULL)
                        Electric = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Electric;
                        Electric = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Poison")
                {
					distribution["Poison"].push_back(pokedex[i].Name);
                    if(Poison == NULL)
                        Poison = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Poison;
                        Poison = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Ice")
                {
					distribution["Ice"].push_back(pokedex[i].Name);
                    if(Ice == NULL)
                        Ice = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Ice;
                        Ice = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Normal")
                {
				distribution["Normal"].push_back(pokedex[i].Name);
                    if(Normal == NULL)
                        Normal = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Normal;
                        Normal = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Flying")
                {
				distribution["Flying"].push_back(pokedex[i].Name);
                    if(Flying == NULL)
                        Flying = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Flying;
                        Flying = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Bug")
                {
				distribution["Bug"].push_back(pokedex[i].Name);
                    if(Bug == NULL)
                        Bug = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Bug;
                        Bug = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Psychic")
                {
				distribution["Psychic"].push_back(pokedex[i].Name);
                    if(Psychic == NULL)
                        Psychic = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Psychic;
                        Psychic = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Fighting")
                {
				distribution["Fighting"].push_back(pokedex[i].Name);
                    if(Fighting == NULL)
                        Fighting = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Fighting;
                        Fighting = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Ghost")
                {
				distribution["Ghost"].push_back(pokedex[i].Name);
                    if(Ghost == NULL)
                        Ghost = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Ghost;
                        Ghost = &pokedex[i];
                    }

                }
            }
            getline (InFile,pokedex[i].species,','); // 포켓몬 종 입력
            getline (InFile,Aux,','); // 키 입력
            pokedex[i].height = (float)atoi(Aux.c_str());
            pokedex[i].height = pokedex[i].height/100;

            getline (InFile,Aux,','); // 몸무게 입력
            pokedex[i].weight = (float)atoi(Aux.c_str());
            pokedex[i].weight = pokedex[i].weight/1000;

            getline (InFile,pokedex[i].GrowthRate,','); // 성장속도 입력

            getline (InFile,Aux,','); // 체력 입력
            pokedex[i].BaseHp = atoi(Aux.c_str());

            getline (InFile,Aux,','); // 공격력 입력
            pokedex[i].BaseAttack = atoi(Aux.c_str());

            getline (InFile,Aux,','); // 방어력 입력
            pokedex[i].BaseDef = atoi(Aux.c_str());

            getline (InFile,Aux,','); // 특수공격력 입력
            pokedex[i].BaseSpAttack = atoi(Aux.c_str());

            getline (InFile,Aux,','); // 특수방어력 입력
            pokedex[i].BaseSpDef = atoi(Aux.c_str());

            getline (InFile,Aux,','); // 스피드 입력
            pokedex[i].BaseSpeed = atoi(Aux.c_str());

            getline (InFile,Aux,','); // 능력치 총합 입력
            pokedex[i].BaseTotal = atoi(Aux.c_str());

            getline (InFile,pokedex[i].eggGroup1,','); // 1번째 난자군 입력

            getline (InFile,pokedex[i].eggGroup2,','); // 2번째 난자군 입력

            getline (InFile,Aux,','); // 수컷 비율 입력
            pokedex[i].malePercent = (float)atoi(Aux.c_str());
            pokedex[i].malePercent = (float)pokedex[i].malePercent/100;

            getline (InFile,Aux,','); // 암컷 비율 입력
            pokedex[i].femalePercent = (float)atoi(Aux.c_str());
            pokedex[i].femalePercent = pokedex[i].femalePercent/100;

            getline (InFile,pokedex[i].DescriptionText); // 포켓몬에 대한 설명 입력
        }
        //for (i=0; i<6; i++)
        //{
        //cout << pokedex[i].Name << endl;
        //cout << pokedex[i].PokedexNumber << endl;
        //cout << pokedex[i].type1 << endl;
        //cout << pokedex[i].type2 << endl;
        //cout << pokedex[i].species << endl;
        //cout << pokedex[i].height << endl;
        //cout << pokedex[i].weight << endl;
        //cout << pokedex[i].GrowthRate << endl;
        //cout << pokedex[i].BaseHp << endl;
        //cout << pokedex[i].BaseAtack << endl;
        //cout << pokedex[i].BaseDef << endl;
        //cout << pokedex[i].BaseSpAtack << endl;
        //cout << pokedex[i].BaseSpDef << endl;
        //cout << pokedex[i].BaseSpeed << endl;
        //cout << pokedex[i].BaseTotal << endl;
        //cout << pokedex[i].eggGroup1 << endl;
        //cout << pokedex[i].eggGroup2 << endl;
        //cout << pokedex[i].malePercent << endl;
        //cout << pokedex[i].femalePercent << endl;
        //cout << pokedex[i].DescriptionText << endl;
        //}
    }
}

void PokemonEntris::Compare()
/*
1) 체력
2) 공격력
3) 방어력
4) 특수공격력
5) 특수방어력
6) 스피드
7) 능력치 총합
*/
{
    //Compares the battle stats of two Pokemon
    system("cls");
    const char *inpute;
    string input;
    int inputN;
    PokemonInfo *Actual = NULL;
	while (Actual == NULL) {
		cout << "Please enter the name or the ID of the first Pokemon you would like to compare:\n";
		getline(cin, input);
		inpute = input.c_str();
		stringstream ss(input);
		if (!((ss >> inputN).fail()))
		{
			inputN = atoi(inpute) - 1;
			if (inputN >= 0 && inputN <= 150)
			{
				Actual = &pokedex[inputN];
			}
		}
		else
		{
			for (int i = 0; i < 151; i++)
			{
				if (pokedex[i].Name == input)
				{
					Actual = &pokedex[i];
					break;
				}
			}
		}
		if (Actual == NULL)
		{
			system("cls");
			cout << "Please enter a valid Pokemon name of ID!\n\n";
		}
	}
    
    PokemonInfo *Actual2 = NULL;
	while (Actual2 == NULL) {
		cout << "Please enter the name or the ID of the second Pokemon you would like to compare:\n";
		getline(cin, input);
		inpute = input.c_str();
		stringstream ss(input);
		if (!((ss >> inputN).fail()))
		{
			inputN = atoi(inpute) - 1;
			if (inputN >= 0 && inputN <= 150)
			{
				Actual2 = &pokedex[inputN];
			}
		}
		else
		{
			for (int i = 0; i < 151; i++)
			{
				if (pokedex[i].Name == input)
				{
					Actual2 = &pokedex[i];
					break;
				}
			}
		}
		while (Actual2 == NULL)
		{
			system("cls");
			cout << "Please enter a valid Pokemon name or ID!\n\n";
		}
	}
    
    if (Actual -> BaseHp > Actual2 -> BaseHp)
    {
        cout << Actual -> Name << " has " << Actual -> BaseHp << " base HP." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseHp << " base HP." << endl;
        cout << Actual -> Name << " has " << Actual -> BaseHp - Actual2 -> BaseHp << " more base HP than " << Actual2 -> Name << "." << endl;
    }
    else if (Actual -> BaseHp < Actual2 -> BaseHp)
    {
        cout << Actual -> Name << " has " << Actual -> BaseHp << " base HP." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseHp << " base HP." << endl;
        cout << Actual -> Name << " has " << Actual2 -> BaseHp - Actual -> BaseHp << " less base HP than " << Actual2 -> Name << "." << endl;
    }
    else
    {
        cout << Actual -> Name << " has " << Actual -> BaseHp << " base HP." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseHp << " base HP." << endl;
        cout << Actual -> Name << " has the same amount of base HP as " << Actual2 -> Name << "." << endl;
    }
    cout << endl;
    if (Actual -> BaseAttack > Actual2 -> BaseAttack)
    {
        cout << Actual -> Name << " has " << Actual -> BaseAttack << " base attack damage." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseAttack << " base attack damage." << endl;
        cout << Actual -> Name << " has " << Actual -> BaseAttack - Actual2 -> BaseAttack << " more base attack damage than " << Actual2 -> Name << "." << endl;
    }
    else if (Actual -> BaseAttack < Actual2 -> BaseAttack)
    {
        cout << Actual -> Name << " has " << Actual -> BaseAttack << " base attack damage." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseAttack << " base attack damage." << endl;
        cout << Actual -> Name << " has " << Actual2 -> BaseAttack - Actual -> BaseAttack << " less base attack damage than " << Actual2 -> Name << "." << endl;
    }
    else
    {
        cout << Actual -> Name << " has " << Actual -> BaseAttack << " base attack damage." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseAttack << " base attack damage." << endl;
        cout << Actual -> Name << " has the same amount of base attack damage as " << Actual2 -> Name << "." << endl;
    }
    cout << endl;
    if (Actual -> BaseDef > Actual2 -> BaseDef)
    {
        cout << Actual -> Name << " has " << Actual -> BaseDef << " base defense." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseDef << " base defense." << endl;
        cout << Actual -> Name << " has " << Actual -> BaseDef - Actual2 -> BaseDef << " more base defense than " << Actual2 -> Name << "." << endl;
    }
    else if (Actual -> BaseDef < Actual2 -> BaseDef)
    {
        cout << Actual -> Name << " has " << Actual -> BaseDef << " base defense." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseDef << " base defense." << endl;
        cout << Actual -> Name << " has " << Actual2 -> BaseDef - Actual -> BaseDef << " less base defense than " << Actual2 -> Name << "." << endl;
    }
    else
    {
        cout << Actual -> Name << " has " << Actual -> BaseDef << " base defense." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseDef << " base defense." << endl;
        cout << Actual -> Name << " has the same amount of base defense as " << Actual2 -> Name << "." << endl;
    }
    cout << endl;
    if (Actual -> BaseSpAttack > Actual2 -> BaseSpAttack)
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpAttack << " base special attack damage." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpAttack << " base special attack damage." << endl;
        cout << Actual -> Name << " has " << Actual -> BaseSpAttack - Actual2 -> BaseSpAttack << " more base special attack damage than " << Actual2 -> Name << "." << endl;
    }
    else if (Actual -> BaseSpAttack < Actual2 -> BaseSpAttack)
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpAttack << " base special attack damage." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpAttack << " base special attack damage." << endl;
        cout << Actual -> Name << " has " << Actual2 -> BaseSpAttack - Actual -> BaseSpAttack << " less base special attack damage than " << Actual2 -> Name << "." << endl;
    }
    else
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpAttack << " base special attack damage." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpAttack << " base special attack damage." << endl;
        cout << Actual -> Name << " has the same amount of base special attack damage as " << Actual2 -> Name << "." << endl;
    }
    cout << endl;
    if (Actual -> BaseSpDef > Actual2 -> BaseSpDef)
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpDef << " base special defense." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpDef << " base special defense." << endl;
        cout << Actual -> Name << " has " << Actual -> BaseSpDef - Actual2 -> BaseSpDef << " more base special defense than " << Actual2 -> Name << "." << endl;
    }
    else if (Actual -> BaseSpDef < Actual2 -> BaseSpDef)
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpDef << " base special defense." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpDef << " base special defense." << endl;
        cout << Actual -> Name << " has " << Actual2 -> BaseSpDef - Actual -> BaseSpDef << " less base special defense than " << Actual2 -> Name << "." << endl;
    }
    else
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpDef << " base special defense." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpDef << " base special defense." << endl;
        cout << Actual -> Name << " has the same amount of base special defense as " << Actual2 -> Name << "." << endl;
    }
    cout << endl;
    if (Actual -> BaseSpeed > Actual2 -> BaseSpeed)
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpeed << " base speed." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpeed << " base speed." << endl;
        cout << Actual -> Name << " has " << Actual -> BaseSpeed - Actual2 -> BaseSpeed << " more base speed than " << Actual2 -> Name << "." << endl;
    }
    else if (Actual -> BaseSpeed < Actual2 -> BaseSpeed)
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpeed << " base speed." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpeed << " base speed." << endl;
        cout << Actual -> Name << " has " << Actual2 -> BaseSpeed - Actual -> BaseSpeed << " less base speed than " << Actual2 -> Name << "." << endl;
    }
    else
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpeed << " base speed." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpeed << " base speed." << endl;
        cout << Actual -> Name << " has the same amount of base speed as " << Actual2 -> Name << "." << endl;
    }
    cout << endl;
    if (Actual -> BaseTotal > Actual2 -> BaseTotal)
    {
        cout << Actual -> Name << " has " << Actual -> BaseTotal << " base power." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseTotal << " base power." << endl;
        cout << Actual -> Name << " has " << Actual -> BaseTotal - Actual2 -> BaseTotal << " more base power than " << Actual2 -> Name << "." << endl;
    }
    else if (Actual -> BaseTotal < Actual2 -> BaseTotal)
    {
        cout << Actual -> Name << " has " << Actual -> BaseTotal << " base power." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseTotal << " base power." << endl;
        cout << Actual -> Name << " has " << Actual2 -> BaseTotal - Actual -> BaseTotal << " less base power than " << Actual2 -> Name << "." << endl;
    }
    else
    {
        cout << Actual -> Name << " has " << Actual -> BaseTotal << " base power." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseTotal << " base power." << endl;
        cout << Actual -> Name << " has the same amount of base power as " << Actual2 -> Name << "." << endl;
    }
    //cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris :: PokemonGeneralInformationMenu(string trainerName)
{
    //This is the general info menu. You can access general info about the Pokemon here.
    int leng = 26-trainerName.length();
    int menuStatus;
    string menu;
    do
    {
        system("cls");
        cout << "===============Pokedex===============" << endl <<
			"- Kanto's Regional Pokedex          |" << endl <<
			"- Trainer: " << trainerName;
        for (int i = 0; i< leng-1; i++)
            cout << " ";
		cout << "|" << endl <<
			"                                    |" << endl <<
			"- Please Select The Search Method:  |" << endl <<
			"- 1. Search Pokemon by Height       |" << endl <<
			"- 2. Search Pokemon by Weight       |" << endl <<
			"- 3. Search Pokemon by Name/Number  |" << endl <<
			"- 4. Check Breedability             |" << endl <<
            "- 5. Go Back to Previous Menu       |" << endl <<
			"=====================================" << endl;
        getline(cin, menu);
        menuStatus = atoi(menu.c_str());
        switch (menuStatus)
        {
        case 1:
            SearchByHeight();
            break;
        case 2:
            SearchByWeight();
            break;
        case 3:
            SearchByNNGeneral();
            break;
        case 4:
            Breedable();
            break;
        case 5:
            break;
        }
    }
    while (menuStatus != 5);
}

void PokemonEntris :: PokemonBattleInformationMenu(string trainerName)
{
    //This is the battle info menu. You can access battle info about the Pokemon here.
    int leng = 26-trainerName.length();
    int menuStatus;
    string menu;
    do
    {
        system("cls");
        cout << "===============Pokedex===============" << endl <<
			"- Kanto's Regional Pokedex          |" << endl <<
			"- Trainer: " << trainerName;
        for (int i = 0; i< leng-1; i++)
            cout << " ";
        cout << "|" << endl <<
			"                                    |" << endl <<
			"- Please Select The Search Method:  |" << endl <<
			"- 1. Search by HP                   |\n- 2. Search by ATK                  |" << endl <<
			"- 3. Search by DEF                  |\n- 4. Search by SpA                  |" << endl <<
			"- 5. Search by SpD                  |\n- 6. Search by SPD                  |" << endl <<
			"- 7. Search by Name/Number          |\n- 8. Compare Two Pokemon            |\n" <<
			"- 9. Go Back to Previous Menu       |"<< endl <<
			"====================================="<< endl;

        getline(cin, menu);
        menuStatus = atoi(menu.c_str());
        switch (menuStatus)
        {
        case 1:
            SearchHP();
            break;
        case 2:
            SearchATK();
            break;
        case 3:
            SearchDEF();
            break;
        case 4:
            SearchSpA();
            break;
        case 5:
            SearchSpD();
            break;
        case 6:
            SearchSPD();
            break;
        case 7:
            SearchByNNBattle();
            break;
        case 8:
            Compare();
            break;
        case 9:
            break;
        }
    }
    while (menuStatus != 9);
}

void PokemonEntris::PokemonDistribution(string trainerName) {
	int leng = 26 - trainerName.length();
	int menuStatus = 0;
	string menu;
	do
	{
		system("cls");
		cout << "===============Pokedex===============" << endl <<
			"- Kanto's Regional Pokedex          |" << endl <<
			"- Trainer: " << trainerName;
		for (int i = 0; i < leng - 1; i++)
			cout << " ";
		cout << "|" << endl <<
			"                                    |" << endl <<
			"- Please Select The Search Method:  |" << endl <<
			"- 1. Search Amount of Pokemon       |" << endl <<
			"- 2. See All Pokemon by Type        |" << endl <<
			"- 3. Go Back to Previous Menu       |" << endl <<
			"=====================================" << endl;

		getline(cin, menu);
		menuStatus = atoi(menu.c_str());
		switch (menuStatus) {
		case 1:
			SearchAmount();
			break;
		case 2:
			SeeAllPokemon();
			break;
		case 3:
			break;
		}
	} while (menuStatus != 3);
}

void PokemonEntris :: SearchHP()
{
	
    //searches for the base HP of a certain Pokemon.
    system("cls");
    string LorH;
    string Type;
    PokemonInfo *Actual;
    bool heightStatus = false;
    bool typeStatus = false;
    while (heightStatus == false)
    {
        cout << "Would you like to search for the Pokemon with Highest (H) or Lowest (L) HP Stat?\n";
        cin >> LorH;
        if (LorH != "H" && LorH != "L")
        {
            cout << "Please enter a valid option for searching!" << endl;
        }
        else
            heightStatus = true;
    }
    PokemonInfo *temp = new PokemonInfo;
    while (typeStatus != true)
    {
        cout << "What Pokemon type would you like to search by? (i.e. Fire, Grass, etc.)\n";
        cin >> Type;
        if (Type == "Fire")
        {
            temp = Fire;
            typeStatus = true;
        }
        else if (Type == "Grass")
        {
            temp = Grass;
            typeStatus = true;
        }
        else if (Type == "Water")
        {
            temp = Water;
            typeStatus = true;
        }
        else if (Type == "Dragon")
        {
            temp = Dragon;
            typeStatus = true;
        }
        else if (Type == "Rock")
        {
            temp = Rock;
            typeStatus = true;
        }
        else if (Type == "Ground")
        {
            temp = Ground;
            typeStatus = true;
        }
        else if (Type == "Electric")
        {
            temp = Electric;
            typeStatus = true;
        }
        else if (Type == "Poison")
        {
            temp = Poison;
            typeStatus = true;
        }
        else if (Type == "Ice")
        {
            temp = Ice;
            typeStatus = true;
        }
        else if (Type == "Normal")
        {
            temp = Normal;
            typeStatus = true;
        }
        else if (Type == "Flying")
        {
            temp = Flying;
            typeStatus = true;
        }
        else if (Type == "Bug")
        {
            temp = Bug;
            typeStatus = true;
        }
        else if (Type == "Psychic")
        {
            temp = Psychic;
            typeStatus = true;
        }
        else if (Type == "Fighting")
        {
            temp = Fighting;
            typeStatus = true;
        }
        else if (Type == "Ghost")
        {
            temp = Ghost;
            typeStatus = true;
        }
        else
        {
            cout << "Please enter a valid Pokemon type!" << endl;
        }
    }
    Actual = temp;
    //string aux = " ";
    //Type = aux.append(Type);
    Type = " "+Type;

    if (LorH == "L")
    {
        while (temp != NULL)
        {
            if (temp->BaseHp < Actual->BaseHp)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
        system("cls");
        cout << " The " << Type << " type Pokemon with the Lowest HP stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }

    else if (LorH == "H")
    {
        while (temp != NULL)
        {
            if (temp->BaseHp > Actual->BaseHp)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
        system("cls");
        cout << " The " << Type << " type Pokemon with the Highest Hp stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }
    cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris :: SearchATK()
{
    //searches for the base attack of a certain Pokemon.
    system("cls");
    string LorH;
    string Type;
    PokemonInfo *Actual;
    bool heightStatus = false;
    bool typeStatus = false;
    while (heightStatus == false)
    {
        cout << "Would you like to search for the Pokemon with Highest (H) or Lowest (L) ATK Stat?\n";
        cin >> LorH;
        if (LorH != "H" && LorH != "L")
        {
            cout << "Please enter a valid option for searching!" << endl;
        }
        else
            heightStatus = true;
    }
    PokemonInfo *temp = new PokemonInfo;
    while (typeStatus != true)
    {
        cout << "What Pokemon type would you like to search by? (i.e. Fire, Grass, etc.)\n";
        cin >> Type;
        if (Type == "Fire")
        {
            temp = Fire;
            typeStatus = true;
        }
        else if (Type == "Grass")
        {
            temp = Grass;
            typeStatus = true;
        }
        else if (Type == "Water")
        {
            temp = Water;
            typeStatus = true;
        }
        else if (Type == "Dragon")
        {
            temp = Dragon;
            typeStatus = true;
        }
        else if (Type == "Rock")
        {
            temp = Rock;
            typeStatus = true;
        }
        else if (Type == "Ground")
        {
            temp = Ground;
            typeStatus = true;
        }
        else if (Type == "Electric")
        {
            temp = Electric;
            typeStatus = true;
        }
        else if (Type == "Poison")
        {
            temp = Poison;
            typeStatus = true;
        }
        else if (Type == "Ice")
        {
            temp = Ice;
            typeStatus = true;
        }
        else if (Type == "Normal")
        {
            temp = Normal;
            typeStatus = true;
        }
        else if (Type == "Flying")
        {
            temp = Flying;
            typeStatus = true;
        }
        else if (Type == "Bug")
        {
            temp = Bug;
            typeStatus = true;
        }
        else if (Type == "Psychic")
        {
            temp = Psychic;
            typeStatus = true;
        }
        else if (Type == "Fighting")
        {
            temp = Fighting;
            typeStatus = true;
        }
        else if (Type == "Ghost")
        {
            temp = Ghost;
            typeStatus = true;
        }
        else
        {
            cout << "Please enter a valid Pokemon type!" << endl;
        }
    }
    Actual = temp;
    //string aux = " ";
    //Type = aux.append(Type);
    Type = " "+Type;

    if (LorH == "L")
    {
        while (temp != NULL)
        {
            if (temp->BaseAttack < Actual->BaseAttack)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
        system("cls");
        cout << " The " << Type << " type Pokemon with the Lowest ATK stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }

    else if (LorH == "H")
    {
        while (temp != NULL)
        {
            if (temp->BaseAttack > Actual->BaseAttack)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
        system("cls");
        cout << " The " << Type << " type Pokemon with the Highest ATK stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }
    cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris :: SearchDEF()
{
    //searches for the base defense of a certain Pokemon.
    system("cls");
    string LorH;
    string Type;
    PokemonInfo *Actual;
    bool heightStatus = false;
    bool typeStatus = false;
    while (heightStatus == false)
    {
        cout << "Would you like to search for the Pokemon with Highest (H) or Lowest (L) DEF Stat?\n";
        cin >> LorH;
        if (LorH != "H" && LorH != "L")
        {
            cout << "Please enter a valid option for searching!" << endl;
        }
        else
            heightStatus = true;
    }
    PokemonInfo *temp = new PokemonInfo;
    while (typeStatus != true)
    {
        cout << "What Pokemon type would you like to search by? (i.e. Fire, Grass, etc.)\n";
        cin >> Type;
        if (Type == "Fire")
        {
            temp = Fire;
            typeStatus = true;
        }
        else if (Type == "Grass")
        {
            temp = Grass;
            typeStatus = true;
        }
        else if (Type == "Water")
        {
            temp = Water;
            typeStatus = true;
        }
        else if (Type == "Dragon")
        {
            temp = Dragon;
            typeStatus = true;
        }
        else if (Type == "Rock")
        {
            temp = Rock;
            typeStatus = true;
        }
        else if (Type == "Ground")
        {
            temp = Ground;
            typeStatus = true;
        }
        else if (Type == "Electric")
        {
            temp = Electric;
            typeStatus = true;
        }
        else if (Type == "Poison")
        {
            temp = Poison;
            typeStatus = true;
        }
        else if (Type == "Ice")
        {
            temp = Ice;
            typeStatus = true;
        }
        else if (Type == "Normal")
        {
            temp = Normal;
            typeStatus = true;
        }
        else if (Type == "Flying")
        {
            temp = Flying;
            typeStatus = true;
        }
        else if (Type == "Bug")
        {
            temp = Bug;
            typeStatus = true;
        }
        else if (Type == "Psychic")
        {
            temp = Psychic;
            typeStatus = true;
        }
        else if (Type == "Fighting")
        {
            temp = Fighting;
            typeStatus = true;
        }
        else if (Type == "Ghost")
        {
            temp = Ghost;
            typeStatus = true;
        }
        else
        {
            cout << "Please enter a valid Pokemon type!" << endl;
        }
    }
    Actual = temp;
    //string aux = " ";
    //Type = aux.append(Type);
    Type = " "+Type;

    if (LorH == "L")
    {
        while (temp != NULL)
        {
            if (temp->BaseDef < Actual->BaseDef)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
        system("cls");
        cout << " The " << Type << " type Pokemon with the Lowest DEF stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }

    else if (LorH == "H")
    {
        while (temp != NULL)
        {
            if (temp->BaseDef > Actual->BaseDef)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
        system("cls");
        cout << " The " << Type << " type Pokemon with the Highest DEF stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }
    cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris :: SearchSpA()
{
    //searches for the base special attack of a certain Pokemon.
    system("cls");
    string LorH;
    string Type;
    PokemonInfo *Actual;
    bool heightStatus = false;
    bool typeStatus = false;
    while (heightStatus == false)
    {
        cout << "Would you like to search for the Pokemon with Highest (H) or Lowest (L) SpA Stat?\n";
        cin >> LorH;
        if (LorH != "H" && LorH != "L")
        {
            cout << "Please enter a valid option for searching!" << endl;
        }
        else
            heightStatus = true;
    }
    PokemonInfo *temp = new PokemonInfo;
    while (typeStatus != true)
    {
        cout << "What Pokemon type would you like to search by? (i.e. Fire, Grass, etc.)\n";
        cin >> Type;
        if (Type == "Fire")
        {
            temp = Fire;
            typeStatus = true;
        }
        else if (Type == "Grass")
        {
            temp = Grass;
            typeStatus = true;
        }
        else if (Type == "Water")
        {
            temp = Water;
            typeStatus = true;
        }
        else if (Type == "Dragon")
        {
            temp = Dragon;
            typeStatus = true;
        }
        else if (Type == "Rock")
        {
            temp = Rock;
            typeStatus = true;
        }
        else if (Type == "Ground")
        {
            temp = Ground;
            typeStatus = true;
        }
        else if (Type == "Electric")
        {
            temp = Electric;
            typeStatus = true;
        }
        else if (Type == "Poison")
        {
            temp = Poison;
            typeStatus = true;
        }
        else if (Type == "Ice")
        {
            temp = Ice;
            typeStatus = true;
        }
        else if (Type == "Normal")
        {
            temp = Normal;
            typeStatus = true;
        }
        else if (Type == "Flying")
        {
            temp = Flying;
            typeStatus = true;
        }
        else if (Type == "Bug")
        {
            temp = Bug;
            typeStatus = true;
        }
        else if (Type == "Psychic")
        {
            temp = Psychic;
            typeStatus = true;
        }
        else if (Type == "Fighting")
        {
            temp = Fighting;
            typeStatus = true;
        }
        else if (Type == "Ghost")
        {
            temp = Ghost;
            typeStatus = true;
        }
        else
        {
            cout << "Please enter a valid Pokemon type!" << endl;
        }
    }
    Actual = temp;
    //string aux = " ";
    //Type = aux.append(Type);
    Type = " "+Type;

    if (LorH == "L")
    {
        while (temp != NULL)
        {
            if (temp->BaseSpAttack < Actual->BaseSpAttack)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
        system("cls");
        cout << " The " << Type << " type Pokemon with the Lowest SpA stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }

    else if (LorH == "H")
    {
        while (temp != NULL)
        {
            if (temp->BaseSpAttack > Actual->BaseSpAttack)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
        system("cls");
        cout << " The " << Type << " type Pokemon with the Highest SpA stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }
    cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris :: SearchSpD()
{
    //searches for the base special defense of a certain Pokemon.
    system("cls");
    string LorH;
    string Type;
    PokemonInfo *Actual;
    bool heightStatus = false;
    bool typeStatus = false;
    while (heightStatus == false)
    {
        cout << "Would you like to search for the Pokemon with Highest (H) or Lowest (L) SpD Stat?\n";
        cin >> LorH;
        if (LorH != "H" && LorH != "L")
        {
            cout << "Please enter a valid option for searching!" << endl;
        }
        else
            heightStatus = true;
    }
	PokemonInfo *temp = new PokemonInfo;
    while (typeStatus != true)
    {
        cout << "What Pokemon type would you like to search by? (i.e. Fire, Grass, etc.)\n";
        cin >> Type;
        if (Type == "Fire")
        {
            temp = Fire;
            typeStatus = true;
        }
        else if (Type == "Grass")
        {
            temp = Grass;
            typeStatus = true;
        }
        else if (Type == "Water")
        {
            temp = Water;
            typeStatus = true;
        }
        else if (Type == "Dragon")
        {
            temp = Dragon;
            typeStatus = true;
        }
        else if (Type == "Rock")
        {
            temp = Rock;
            typeStatus = true;
        }
        else if (Type == "Ground")
        {
            temp = Ground;
            typeStatus = true;
        }
        else if (Type == "Electric")
        {
            temp = Electric;
            typeStatus = true;
        }
        else if (Type == "Poison")
        {
            temp = Poison;
            typeStatus = true;
        }
        else if (Type == "Ice")
        {
            temp = Ice;
            typeStatus = true;
        }
        else if (Type == "Normal")
        {
            temp = Normal;
            typeStatus = true;
        }
        else if (Type == "Flying")
        {
            temp = Flying;
            typeStatus = true;
        }
        else if (Type == "Bug")
        {
            temp = Bug;
            typeStatus = true;
        }
        else if (Type == "Psychic")
        {
            temp = Psychic;
            typeStatus = true;
        }
        else if (Type == "Fighting")
        {
            temp = Fighting;
            typeStatus = true;
        }
        else if (Type == "Ghost")
        {
            temp = Ghost;
            typeStatus = true;
        }
        else
        {
            cout << "Please enter a valid Pokemon type!" << endl;
        }
    }
    Actual = temp;
    //string aux = " ";
    //Type = aux.append(Type);
    Type = " "+Type;

    if (LorH == "L")
    {
        while (temp != NULL)
        {
            if (temp->BaseSpDef < Actual->BaseSpDef)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
        system("cls");
        cout << " The " << Type << " type Pokemon with the Lowest SpD stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }

    else if (LorH == "H")
    {
        while (temp != NULL)
        {
            if (temp->BaseSpDef > Actual->BaseSpDef)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
        system("cls");
        cout << " The " << Type << " type Pokemon with the Highest SpD stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }
    cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris :: SearchSPD()
{
    //searches for the base speed of a certain Pokemon.
    system("cls");
    string LorH;
    string Type;
    PokemonInfo *Actual;
    bool heightStatus = false;
    bool typeStatus = false;
    while (heightStatus == false)
    {
        cout << "Would you like to search for the Pokemon with Highest (H) or Lowest (L) SPD Stat?\n";
        cin >> LorH;
        if (LorH != "H" && LorH != "L")
        {
            cout << "Please enter a valid option for searching!" << endl;
        }
        else
            heightStatus = true;
    }
	PokemonInfo *temp = new PokemonInfo;
    while (typeStatus != true)
    {
        cout << "What Pokemon type would you like to search by? (i.e. Fire, Grass, etc.)\n";
        cin >> Type;
        if (Type == "Fire")
        {
            temp = Fire;
            typeStatus = true;
        }
        else if (Type == "Grass")
        {
            temp = Grass;
            typeStatus = true;
        }
        else if (Type == "Water")
        {
            temp = Water;
            typeStatus = true;
        }
        else if (Type == "Dragon")
        {
            temp = Dragon;
            typeStatus = true;
        }
        else if (Type == "Rock")
        {
            temp = Rock;
            typeStatus = true;
        }
        else if (Type == "Ground")
        {
            temp = Ground;
            typeStatus = true;
        }
        else if (Type == "Electric")
        {
            temp = Electric;
            typeStatus = true;
        }
        else if (Type == "Poison")
        {
            temp = Poison;
            typeStatus = true;
        }
        else if (Type == "Ice")
        {
            temp = Ice;
            typeStatus = true;
        }
        else if (Type == "Normal")
        {
            temp = Normal;
            typeStatus = true;
        }
        else if (Type == "Flying")
        {
            temp = Flying;
            typeStatus = true;
        }
        else if (Type == "Bug")
        {
            temp = Bug;
            typeStatus = true;
        }
        else if (Type == "Psychic")
        {
            temp = Psychic;
            typeStatus = true;
        }
        else if (Type == "Fighting")
        {
            temp = Fighting;
            typeStatus = true;
        }
        else if (Type == "Ghost")
        {
            temp = Ghost;
            typeStatus = true;
        }
        else
        {
            cout << "Please enter a valid Pokemon type!" << endl;
        }
    }
    Actual = temp;
    //string aux = " ";
    //Type = aux.append(Type);
    Type = " "+Type;

    if (LorH == "L")
    {
        while (temp != NULL)
        {
            if (temp->BaseSpeed < Actual->BaseSpeed)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
        system("cls");
        cout << " The " << Type << " type Pokemon with the Lowest SPD stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }

    else if (LorH == "H")
    {
        while (temp != NULL)
        {
            if (temp->BaseSpeed > Actual->BaseSpeed)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
        system("cls");
        cout << " The " << Type << " type Pokemon with the Highest SPD stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }
    cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris::Breedable()
{
    //Checks whether two Pokemon can breed based off of their egg group.
    const char *inpute;
    string input;
    int inputN;
    PokemonInfo *Actual = NULL;
	system("cls");
	while (Actual == NULL) {
		cout << "Please enter the name or the ID of the first Pokemon you would like to verify for breed-ability:\n";
		getline(cin, input);
		inpute = input.c_str();
		stringstream ss(input);
		if (!((ss >> inputN).fail()))
		{
			inputN = atoi(inpute) - 1;
			if (inputN <= 150 && inputN >= 0)
			{
				Actual = &pokedex[inputN];
			}
		}
		else
		{
			for (int i = 0; i < 151; i++)
			{
				if (pokedex[i].Name == input)
				{
					Actual = &pokedex[i];
					break;
				}
			}
		}
		if (Actual == NULL)
		{
			system("cls");
			cout << "Please enter a valid Pokemon name or ID!\n\n";
		}
	}
    
    
    PokemonInfo *Actual2 = NULL;
	while (Actual2 == NULL) {
		cout << "Please enter the name or the ID of the second Pokemon you would like to verify for breed-ability:\n";
		getline(cin, input);
		inpute = input.c_str();
		stringstream ss(input);
		if (!((ss >> inputN).fail()))
		{
			inputN = atoi(inpute) - 1;
			if (inputN >= 0 && inputN <= 150)
			{
				Actual2 = &pokedex[inputN];
			}
		}
		else
		{
			for (int i = 0; i < 151; i++)
			{
				if (pokedex[i].Name == input)
				{
					Actual2 = &pokedex[i];
					break;
				}
			}
		}
		if (Actual2 == NULL)
		{
			system("cls");
			cout << "Please enter a valid Pokemon name!\n\n";
		}
	}
    
    system("cls");
    if (Actual -> Name == "니드리나" || Actual -> Name == "니드퀸" ||
        Actual2 -> Name == "니드리나" || Actual2 -> Name == "니드퀸")
    {
        if (Actual -> Name == "니드런 남" || Actual2 -> Name == "니드런 남" ||
            Actual -> Name == "니드리노" || Actual2 -> Name == "니드리노" ||
            Actual -> Name == "니드킹" || Actual2 -> Name == "니드킹" ||
            Actual -> Name == "메타몽" || Actual2 -> Name == "메타몽")
        {
            cout << Actual -> Name << " can breed with " << Actual2 -> Name << "." << endl;
        }
        else
        {
            cout << Actual -> Name << " cannot breed with " << Actual2 -> Name << "." << endl;
        }
    }
    else if (Actual -> eggGroup1 == " Undiscovered" || Actual -> eggGroup2 == " Undiscovered" ||
        Actual2 -> eggGroup1 == " Undiscovered" || Actual2 -> eggGroup2 == " Undiscovered")
    {
        cout << Actual -> Name << " cannot breed with " << Actual2 -> Name << "." << endl;
    }
    else if (Actual -> eggGroup1 == " Ditto" || Actual -> eggGroup2 == " Ditto" ||
        Actual2 -> eggGroup1 == " Ditto" || Actual2 -> eggGroup2 == " Ditto")
    {
        cout << Actual -> Name << " can breed with " << Actual2 -> Name << "." << endl;
    }
    else
    {
        if(Actual -> eggGroup1 == Actual2 -> eggGroup1 || Actual -> eggGroup1 == Actual2 -> eggGroup2 ||
                Actual -> eggGroup2 == Actual2 -> eggGroup1 || Actual -> eggGroup2 == Actual2 -> eggGroup2)
        {
            cout << Actual -> Name << " can breed with " << Actual2 -> Name << "." << endl;
        }
        else
            cout << Actual -> Name << " cannot breed with " << Actual2 -> Name << "." << endl;
    }
    //cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris :: SearchByHeight()
{
    //Searches for the tallest or shortest Pokemon based on their type.
    system("cls");
    string LorH;
    string Type;
    PokemonInfo *Actual;
    bool heightStatus = false;
    bool typeStatus = false;
    while (heightStatus == false)
    {
        cout << "Would you like to search for the tallest (H) or shortest (L) Pokemon?\n";
        cin >> LorH;
        if (LorH != "H" && LorH != "L")
        {
            cout << "Please enter a valid option for searching!" << endl;
        }
        else
            heightStatus = true;
    }
	PokemonInfo *temp = new PokemonInfo;
    while (typeStatus != true)
    {
        cout << "What Pokemon type would you like to search by? (i.e. Fire, Grass, etc.)\n";
        cin >> Type;
        if (Type == "Fire")
        {
            temp = Fire;
            typeStatus = true;
        }
        else if (Type == "Grass")
        {
            temp = Grass;
            typeStatus = true;
        }
        else if (Type == "Water")
        {
            temp = Water;
            typeStatus = true;
        }
        else if (Type == "Dragon")
        {
            temp = Dragon;
            typeStatus = true;
        }
        else if (Type == "Rock")
        {
            temp = Rock;
            typeStatus = true;
        }
        else if (Type == "Ground")
        {
            temp = Ground;
            typeStatus = true;
        }
        else if (Type == "Electric")
        {
            temp = Electric;
            typeStatus = true;
        }
        else if (Type == "Poison")
        {
            temp = Poison;
            typeStatus = true;
        }
        else if (Type == "Ice")
        {
            temp = Ice;
            typeStatus = true;
        }
        else if (Type == "Normal")
        {
            temp = Normal;
            typeStatus = true;
        }
        else if (Type == "Flying")
        {
            temp = Flying;
            typeStatus = true;
        }
        else if (Type == "Bug")
        {
            temp = Bug;
            typeStatus = true;
        }
        else if (Type == "Psychic")
        {
            temp = Psychic;
            typeStatus = true;
        }
        else if (Type == "Fighting")
        {
            temp = Fighting;
            typeStatus = true;
        }
        else if (Type == "Ghost")
        {
            temp = Ghost;
            typeStatus = true;
        }
        else
        {
            cout << "Please enter a valid Pokemon type!" << endl;
        }
    }
    Actual = temp;
    //string aux = " ";
    //Type = aux.append(Type);
    Type = " "+Type;

    if (LorH == "L")
    {
        while (temp != NULL)
        {
            if (temp->height < Actual->height)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
        system("cls");
        cout << " The Shortest" << Type << " type Pokemon is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << " Egg Group: " << Actual->eggGroup1 << "    ";
        if (Actual->eggGroup1 != Actual->eggGroup2)
            cout << "and    " << Actual->eggGroup2 << endl;
        else
            cout << endl;

        cout << " Avg Height: " << Actual->height << "m    " << "Avg Weight: " << Actual->weight << "kg"<< endl;

        cout << " Gender: " << Actual->malePercent << "% Male    and    " << Actual->femalePercent << "% Female\n";
        cout << Actual->DescriptionText << endl;
    }

    else if (LorH == "H")
    {
        while (temp != NULL)
        {
            if (temp->height > Actual->height)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
        system("cls");
        cout << " The Tallest" << Type << " type Pokemon is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "        Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << " Egg Group: " << Actual->eggGroup1 << "    ";
        if (Actual->eggGroup1 != Actual->eggGroup2)
            cout << "and    " << Actual->eggGroup2 << endl;
        else
            cout << endl;

        cout << " Avg Height: " << Actual->height << "m    " << "Avg Weight: " << Actual->weight << "kg"<< endl;

        cout << " Gender: " << Actual->malePercent << "% Male    and    " << Actual->femalePercent << "% Female\n";
        cout << Actual->DescriptionText << endl;
    }
    cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris :: SearchByWeight()
{
    //Searches for the heaviest or lightest Pokemon based on their type.
    system("cls");
    string LorH;
    string Type;
    PokemonInfo *Actual;
    bool weightStatus = false;
    bool typeStatus = false;
    while (weightStatus == false)
    {
        cout << "Would you like to search for the heaviest (H) or lightest (L) Pokemon?\n";
        cin >> LorH;
        if (LorH != "H" && LorH != "L")
        {
            cout << "Please enter a valid option for searching!" << endl;
        }
        else
            weightStatus = true;
    }
	PokemonInfo *temp = new PokemonInfo;
    while (typeStatus != true)
    {
        cout << "What Pokemon type would you like to search by? (i.e. Fire, Grass, etc.)\n";
        cin >> Type;
        if (Type == "Fire")
        {
            temp = Fire;
            typeStatus = true;
        }
        else if (Type == "Grass")
        {
            temp = Grass;
            typeStatus = true;
        }
        else if (Type == "Water")
        {
            temp = Water;
            typeStatus = true;
        }
        else if (Type == "Dragon")
        {
            temp = Dragon;
            typeStatus = true;
        }
        else if (Type == "Rock")
        {
            temp = Rock;
            typeStatus = true;
        }
        else if (Type == "Ground")
        {
            temp = Ground;
            typeStatus = true;
        }
        else if (Type == "Electric")
        {
            temp = Electric;
            typeStatus = true;
        }
        else if (Type == "Poison")
        {
            temp = Poison;
            typeStatus = true;
        }
        else if (Type == "Ice")
        {
            temp = Ice;
            typeStatus = true;
        }
        else if (Type == "Normal")
        {
            temp = Normal;
            typeStatus = true;
        }
        else if (Type == "Flying")
        {
            temp = Flying;
            typeStatus = true;
        }
        else if (Type == "Bug")
        {
            temp = Bug;
            typeStatus = true;
        }
        else if (Type == "Psychic")
        {
            temp = Psychic;
            typeStatus = true;
        }
        else if (Type == "Fighting")
        {
            temp = Fighting;
            typeStatus = true;
        }
        else if (Type == "Ghost")
        {
            temp = Ghost;
            typeStatus = true;
        }
        else
        {
            cout << "Please enter a valid Pokemon type!" << endl;
        }
    }
    Actual = temp;
    //string aux = " ";
    //Type = aux.append(Type);
    Type = " "+Type;

    if (LorH == "L")
    {
        while (temp != NULL)
        {
            if (temp->weight < Actual->weight)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
        system("cls");
        cout << " The Lightest" << Type << " type Pokemon is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "        Growth Rate: " << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << " Egg Group: " << Actual->eggGroup1 << "    ";
        if (Actual->eggGroup1 != Actual->eggGroup2)
            cout << "and    " << Actual->eggGroup2 << endl;
        else
            cout << endl;

        cout << " Avg Height: " << Actual->height << "m    " << "Avg Weight: " << Actual->weight << "kg"<< endl;

        cout << " Gender: " << Actual->malePercent << "% Male    and    " << Actual->femalePercent << "% Female\n";
        cout << Actual->DescriptionText << endl;
    }

    else if (LorH == "H")
    {
        while (temp != NULL)
        {
            if (temp->weight > Actual->weight)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
        system("cls");
        cout << " The Heaviest" << Type << " type Pokemon is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "        Growth Rate: " << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << " Egg Group: " << Actual->eggGroup1 << "    ";
        if (Actual->eggGroup1 != Actual->eggGroup2)
            cout << "and    " << Actual->eggGroup2 << endl;
        else
            cout << endl;

        cout << " Avg Height: " << Actual->height << "m    " << "Avg Weight: " << Actual->weight << "kg"<< endl;

        cout << " Gender: " << Actual->malePercent << "% Male    and    " << Actual->femalePercent << "% Female\n";
        cout << Actual->DescriptionText << endl;
    }
    cin.get();
    while (cin.get() != '\n')
    {
    }

}

void PokemonEntris::SearchByNNGeneral()
{
    //Allows you to find general info about a certain Pokemon by entering their name or ID number.
    system("cls");
    const char *inpute;
    string input;
    int inputN;
    PokemonInfo *Actual = NULL;
	while (Actual == NULL) {
		cout << "Please enter the name or the ID of the Pokemon you would like to search for:\n";
		getline(cin, input);
		inpute = input.c_str();
		stringstream ss(input);
		if (!((ss >> inputN).fail()))
		{
			inputN = atoi(inpute) - 1;
			if (inputN <= 150 && inputN >= 0)
			{
				Actual = &pokedex[inputN];
			}
			
		}
		else
		{
			for (int i = 0; i < 151; i++)
			{
				if (pokedex[i].Name == input)
				{
					Actual = &pokedex[i];
					break;
				}
			}
		}
		if (Actual == NULL)
		{
			system("cls");
			cout << "Please enter a valid Pokemon name or ID!\n\n";
		}
	}
    

    system("cls");
    cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
    cout << " No: ";
    if (Actual->PokedexNumber < 10)
        cout << "00" << Actual->PokedexNumber;
    else if (Actual->PokedexNumber < 100)
        cout << "0" << Actual->PokedexNumber;
    else
        cout << Actual->PokedexNumber;

    cout << "        Growth Rate: " << Actual->GrowthRate << endl;

    cout << " Type: " << Actual->type1 << "    ";
    if (Actual->type1 != Actual->type2)
        cout << "and    " << Actual->type2 << endl;
    else
        cout << endl;

    cout << " Egg Group: " << Actual->eggGroup1 << "    ";
    if (Actual->eggGroup1 != Actual->eggGroup2)
        cout << "and    " << Actual->eggGroup2 << endl;
    else
        cout << endl;

    cout << " Avg Height: " << Actual->height << "m    " << "Avg Weight: " << Actual->weight << "kg"<< endl;

    cout << " Gender: " << Actual->malePercent << "% Male    and    " << Actual->femalePercent << "% Female\n";
    cout << Actual->DescriptionText << endl;
    //cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris ::SearchByNNBattle()
{
    //Allows you to find battle info about a certain Pokemon by entering their name or ID number.
    system("cls");
    const char *inpute;
    string input;
    int inputN;
    PokemonInfo *Actual = NULL;
	while (Actual == NULL) {
		cout << "Please enter the name or the ID of the Pokemon you would like to search for:\n";
		getline(cin, input);
		inpute = input.c_str();
		stringstream ss(input);
		if (!((ss >> inputN).fail()))
		{
			inputN = atoi(inpute) - 1;
			if (inputN >= 0 && inputN <= 150)
			{
				Actual = &pokedex[inputN];
			}
		}
		else
		{
			for (int i = 0; i < 151; i++)
			{
				if (pokedex[i].Name == input)
				{
					Actual = &pokedex[i];
					break;
				}
			}
		}
		if (Actual == NULL)
		{
			system("cls");
			cout << "Please enter a valid Pokemon name or ID!\n\n";
		}
	}
    
    system("cls");
    cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
    cout << " No: ";
    if (Actual->PokedexNumber < 10)
        cout << "00" << Actual->PokedexNumber;
    else if (Actual->PokedexNumber < 100)
        cout << "0" << Actual->PokedexNumber;
    else
        cout << Actual->PokedexNumber;

    cout << "         Growth Rate:" << Actual->GrowthRate << endl;

    cout << " Type: " << Actual->type1 << "    ";
    if (Actual->type1 != Actual->type2)
        cout << "and    " << Actual->type2 << endl;
    else
        cout << endl;

    cout << "  HP: " << Actual->BaseHp;
    if (Actual->BaseHp <100)
        cout << " ";
    cout << "    ATK: " << Actual->BaseAttack;
    if (Actual->BaseAttack <100)
        cout << " ";
    cout << "    DEF: " << Actual->BaseDef<<endl;

    cout << " SpA: " << Actual->BaseSpAttack ;
    if (Actual->BaseSpAttack <100)
        cout << " ";
    cout << "    SpD: " << Actual->BaseSpDef ;
    if (Actual->BaseSpDef <100)
        cout << " ";
    cout << "    SPD: " << Actual->BaseSpeed << endl;

    //cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris::SearchAmount() {
	system("cls");
	bool typeStatus = false;
	string type;
	
	while (!typeStatus) {
		cout << "개체 수를 보고 싶은 타입은 무엇인가요?" << endl <<
			"- Grass, Fire, Water, Dragon, Rock, Ground, " << endl <<
			"Electric, Poison, Ice, Normal, Flying," << endl <<
			"Psychic, Fighting, Ghost, Bug." << endl <<
			"=======================================" << endl;
		cin >> type;
		if (type == "Grass")
			typeStatus = true;
		else if (type == "Fire")
			typeStatus = true;
		else if (type == "Water")
			typeStatus = true;
		else if (type == "Dragon")
			typeStatus = true;
		else if (type == "Rock")
			typeStatus = true;
		else if (type == "Ground")
			typeStatus = true;
		else if (type == "Electric")
			typeStatus = true;
		else if (type == "Poison")
			typeStatus = true;
		else if (type == "Ice")
			typeStatus = true;
		else if (type == "Normal")
			typeStatus = true;
		else if (type == "Flying")
			typeStatus = true;
		else if (type == "Psychic")
			typeStatus = true;
		else if (type == "Fighting")
			typeStatus = true;
		else if (type == "Ghost")
			typeStatus = true;
		else if (type == "Bug")
			typeStatus = true;
		else {
			system("cls");
			cout << "타입을 정확히 입력해 주세요.\n\n" << endl;
		}
		
	}
	system("cls");
	cout << type << "타입을 가진 포켓몬은 " << distribution[type].size() << "마리가 있습니다." << endl;
	cin.get();
	while (cin.get() != '\n') {}
}

void PokemonEntris::SeeAllPokemon() {
	system("cls");
	bool typeStatus = false;
	string type;

	while (!typeStatus) {
		cout << "보고 싶은 타입은 무엇인가요?" << endl <<
			"- Grass, Fire, Water, Dragon, Rock, Ground, " << endl <<
			"Electric, Poison, Ice, Normal, Flying," << endl <<
			"Psychic, Fighting, Ghost, Bug." << endl <<
			"=======================================" << endl;
		cin >> type;
		if (type == "Grass")
			typeStatus = true;
		else if (type == "Fire")
			typeStatus = true;
		else if (type == "Water")
			typeStatus = true;
		else if (type == "Dragon")
			typeStatus = true;
		else if (type == "Rock")
			typeStatus = true;
		else if (type == "Ground")
			typeStatus = true;
		else if (type == "Electric")
			typeStatus = true;
		else if (type == "Poison")
			typeStatus = true;
		else if (type == "Ice")
			typeStatus = true;
		else if (type == "Normal")
			typeStatus = true;
		else if (type == "Flying")
			typeStatus = true;
		else if (type == "Psychic")
			typeStatus = true;
		else if (type == "Fighting")
			typeStatus = true;
		else if (type == "Ghost")
			typeStatus = true;
		else if (type == "Bug")
			typeStatus = true;
		else {
			system("cls");
			cout << "타입을 정확히 입력해 주세요.\n\n" << endl;
		}

	}
	system("cls");
	cout << type << " 타입을 가진 포켓몬 : " << endl;
	for (int i = 0; i < distribution[type].size(); i++) {
		cout << "- " << i + 1 << ". " << distribution[type][i] << endl;
	}
	cin.get();
	while (cin.get() != '\n') {}
}