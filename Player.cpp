#include "Player.h"

using namespace std;

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

}


void Player::meilleurChanson(){

}