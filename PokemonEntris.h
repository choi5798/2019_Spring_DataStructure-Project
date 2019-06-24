#ifndef POKEMONENTRIS_H
#define POKEMONENTRIS_H
#include<vector>
#include<iostream>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <map>

using namespace std;

struct PokemonInfo
{
    string Name;
    int PokedexNumber;
    string type1;
    string type2;
    string species;
    float height;
    float weight;
    string GrowthRate;
    int BaseHp;
    int BaseAttack;
    int BaseDef;
    int BaseSpAttack;
    int BaseSpDef;
    int BaseSpeed;
    int BaseTotal;
    string eggGroup1;
    string eggGroup2;
    float malePercent;
    float femalePercent;
    string DescriptionText;
    PokemonInfo *next1;
    PokemonInfo *next2;
};
class PokemonEntris
{
public:
    PokemonEntris();
    virtual ~PokemonEntris();
    void createPokedex(string txtName);
    void PokemonGeneralInformationMenu(string trainerName);
    void PokemonBattleInformationMenu(string trainerName);
	void PokemonDistribution(string trainerName);
    void RandomCuriosity(string trainerName);
    void Compare();
    void Breedable();
    void SearchHP();
    void SearchATK();
    void SearchDEF();
    void SearchSpA();
    void SearchSpD();
    void SearchSPD();
    void SearchByHeight();
    void SearchByWeight();
    void SearchByNNGeneral();
    void SearchByNNBattle();
	void SearchAmount();
	void SeeAllPokemon();
    PokemonInfo *Grass; //풀
    PokemonInfo *Fire; //불
    PokemonInfo *Water; //물
    PokemonInfo *Dragon; //드래곤
    PokemonInfo *Rock; //바위
    PokemonInfo *Ground; //땅
    PokemonInfo *Electric; //전기
    PokemonInfo *Poison; //독
    PokemonInfo *Ice; //얼음
    PokemonInfo *Normal; //노말
    PokemonInfo *Flying; //비행
    PokemonInfo *Psychic; //에스퍼
    PokemonInfo *Fighting; //격투
    PokemonInfo *Ghost; //고스트
	PokemonInfo *Bug; //벌레
    PokemonInfo pokedex[151]; //현재 도감에 151마리 존재
	map<string, vector<string>> distribution;

protected:
private:

};

#endif // POKEMONENTRIS_H
