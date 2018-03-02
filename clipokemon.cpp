/*
 *ir4klis 
 * 
 * 
 * Pokemon CLI catcher 
 * 
 */



#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;




int pokepick()
{
    //pick randomly a pokemon to spawn/catch 
    
    
  srand ( time(NULL) ); //initialize the random seed
   const string pokeArray[8] = {"Bulbasaur", "Ivysaur", "Venusaur", "Charmander", "Charmeleon", "Charizard", "Squirtle", "Wartortle"}; //, 'Blastoise', 'Caterpie', 'Metapod', 'Butterfree', 'Weedle', 'Kakuna', 'Beedrill', 'Pidgey', 'Pidgeotto', 'Pidgeot', 'Rattata', 'Raticate', 'Spearow', 'Fearow', 'Ekans', 'Arbok', 'Pikachu', 'Raichu', 'Sandshrew', 'Sandslash', 'NidoranF', 'Nidorina', 'Nidoqueen', 'NidoranM', 'Nidorino', 'Nidoking', 'Clefairy', 'Clefable', 'Vulpix', 'Ninetales', 'Jigglypuff', 'Wigglytuff', 'Zubat', 'Golbat', 'Oddish', 'Gloom', 'Vileplume', 'Paras', 'Parasect', 'Venonat', 'Venomoth', 'Diglett', 'Dugtrio', 'Meowth', 'Persian', 'Psyduck', 'Golduck', 'Mankey', 'Primeape', 'Growlithe', 'Arcanine', 'Poliwag', 'Poliwhirl', 'Poliwrath', 'Abra', 'Kadabra', 'Alakazam', 'Machop', 'Machoke', 'Machamp', 'Bellsprout', 'Weepinbell', 'Victreebel', 'Tentacool', 'Tentacruel', 'Geodude', 'Graveler', 'Golem', 'Ponyta', 'Rapidash', 'Slowpoke', 'Slowbro', 'Magnemite', 'Magneton', 'Farfetchíd', 'Doduo', 'Dodrio', 'Seel', 'Dewgong', 'Grimer', 'Muk', 'Shellder', 'Cloyster', 'Gastly', 'Haunter', 'Gengar', 'Onix', 'Drowzee', 'Hypno', 'Krabby', 'Kingler', 'Voltorb', 'Electrode', 'Exeggcute', 'Exeggutor', 'Cubone', 'Marowak', 'Hitmonlee', 'Hitmonchan', 'Lickitung', 'Koffing', 'Weezing', 'Rhyhorn', 'Rhydon', ',Chansey', 'Tangela', 'Kangaskhan', 'Horsea', 'Seadra', 'Goldeen', 'Seaking', 'Staryu', 'Starmie', 'Mr. Mime', 'Scyther', 'Jynx', 'Electabuzz', 'Magmar' 'Pinsir', 'Tauros', 'Magikarp', 'Gyarados', 'Lapras', 'Ditto', 'Eevee', 'Vaporeon', 'Jolteon', 'Flareon', 'Porygon', 'Omanyte', 'Omastar', 'Kabuto', 'Kabutops', 'Aerodactyl', 'Snorlax', 'Articuno', 'Zapdos', 'Moltres', 'Dratini', 'Dragonair', 'Dragonite', 'Mewtwo', 'Mew'};
  int RandIndex = rand() % 8; //generates a random number between 0 and 3
  cout << "You catched the " << pokeArray[RandIndex] <<" and it has pokedex number of " << RandIndex << endl;
  
  return 0 ; 
  
}

void intro()
{

    cout<< "Welcome to pokemon CLI!"<<endl;

}



//direction select 


void dirselect(char userinputdir) {
    
    while (true) {
        
         cout << "From this point you can go near the pond or to the woods" << endl;
    cout << endl;
    cout << "(p)ond or (w)oods?" << endl;
    cout << "\n----------------------Pick a direction to continue----------------------" << endl;
        
        
            cin >> userinputdir;
            cout << endl;


   switch(userinputdir) {
      case 'p' :
         cout << "you go to catch pokemons by the pond..." << endl;  
         pokepick();
         cout << endl;

         break;
      case 'w' :
         cout << "you go to catch pokemons in the woods..." << endl;
         break;
      default :
         cout << "dude, pond or woods, pick" << endl;
         cout << endl;
         cout << "(p)ond or (w)oods ? " << endl;
         continue;
         
   }
   break;
    
    } 
    
}



 



int main()
{
    
    intro();
    
    
    char userinputdir;

    cout << "You decide to catch pokemons!" << endl;

    cout << endl;
    
    // generate random location here??/
    cout << "You are out, looking for pokemons in a park..." << endl;
    
    cout << "From this point you can go near the pond or to the woods" << endl;
    cout << endl;
    cout << "(p)ond or (w)oods?" << endl;
    cout << "\n----------------------Pick a direction to continue----------------------" << endl;
    
    
    dirselect(userinputdir);
    cout << endl;
    
    char ex = 't';
    for (;;) {
    
    
     dirselect(userinputdir);
    cout << endl;
    
    cout << "press x to stop" ;
        cout << endl;
        cin >> ex;
        if (ex == 'x') break;

    }
    
    
   // rain();
   


    
    return 0;
}