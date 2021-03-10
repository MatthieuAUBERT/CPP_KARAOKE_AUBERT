#include "Player.h"

using namespace std;

Player::Player(){
    pseudo = "Un mec";
    score1 = 0;
    score2 = 0;
    score3 = 0;
    score4 = 0;
    score5 = 0;
}

Player::Player(std::string name, int scoreone, int scoretwo, int scorethree, int scorefour,int scorefive): pseudo(name), score1(scoreone),score2(scoretwo),score3(scorethree),score4(scorefour),score5(scorefive)
{

}

void Player::moyenneScore(){
    int moyenne;
    moyenne = (score1 + score2 + score3 + score4 + score5)/5;
    cout << "La moyenne du joueur est :" << moyenne << endl;
}


void Player::scoreTotal(){
    int total;
    total = (score1 + score2 + score3 + score4 + score5);
    cout << "La moyenne du joueur est :" << total << endl;
}


void Player::pireChanson(){
    int list[5];
    list[0] = score1;
    list[1] = score2;
    list[2] = score3;
    list[3] = score4;
    list[4] = score5;

    int pire = 0;
    for (int i(0); i<5; i++){
        if (list[i]<list[pire]){
            pire = i;
        }
    }
    cout << "La chanson numéro " << pire << "a le plus mauvais score du joueur" << endl;
}


void Player::meilleurChanson(){
    int list[5];
    list[0] = score1;
    list[1] = score2;
    list[2] = score3;
    list[3] = score4;
    list[4] = score5;

    int best = 0;
    for (int i(0); i<5; i++){
        if (list[i]>list[best]){
            best = i;
        }
    }
    cout << "La chanson numéro " << best << "a le meilleur score du joueur" << endl;

}