#include "Karaoke.h"

using namespace std;

Karaoke::Karaoke(){
    nombreChansons = 5;
    nombreJoueurs = 5;
}

void Karaoke::addJoueur(){
    int aAjouter;
    cout << "Combien de joueurs voulez-vous ajouter ?" << endl;
    cin >> aAjouter;
    nombreJoueurs += aAjouter;
}

void Karaoke::deleteJoueur(){
    int aEnlever;
    cout << "Combien de joueurs voulez-vous enlever ?" << endl;
    cin >> aEnlever;
    nombreJoueurs -= aEnlever;
    if (nombreJoueurs <= 0){
        nombreJoueurs = 1;
    }
}

void Karaoke::meilleurScoreTot(){}

void Karaoke::meilleurScoreUneChanson(){}

void Karaoke::meilleurMoy(){}