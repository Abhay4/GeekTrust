#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <map>

using namespace std;

int coinToss ()
{
    int randomNumber;
    randomNumber = 1 + rand() % 2;
    return randomNumber;
}


enum eBatBowls{Bats,Bowls};
enum eTeams{Lengaburu,Enchai};


int main(int argc, char** argv)
{
    map<pair<int,string>,int> Weather;
    map<pair<int,string>,int> DayNight;
    string dispString;
    
    Weather[make_pair(Lengaburu,"Clear")] = Bats;
    Weather[make_pair(Lengaburu,"Cloudy")] = Bowls;
    Weather[make_pair(Enchai,"Clear")] = Bowls;
    Weather[make_pair(Enchai,"Cloudy")] = Bats;

    DayNight[make_pair(Lengaburu,"Day")] = Bowls;
    DayNight[make_pair(Lengaburu,"Night")] = Bats;
    DayNight[make_pair(Enchai,"Day")] = Bowls;
    DayNight[make_pair(Enchai,"Night")] = Bats;



    srand((time(0)));  
    int randomNumber=coinToss();     
    
    int Team = randomNumber ==1? Lengaburu : Enchai;
    string TeamString = randomNumber ==1 ? "Lengaburu":"Enchai";
    dispString = TeamString + " wins toss";
    if(Weather[make_pair(Team,argv[0])] != DayNight[make_pair(Team,argv[1])])
        dispString += " and bats";
    else{
        string decision = Weather[make_pair(Team,argv[0])] == 0 ? "Bats":"Bowls";
        dispString += " and "+decision;
    }

    cout << dispString << endl;
    
    return 0;
}