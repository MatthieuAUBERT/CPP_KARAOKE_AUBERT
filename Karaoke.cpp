#include <iostream>
#include <string>
#include <vector>

#include "Player.h"

using namespace std;

int main(){
    Player zero("0",55,61,88,74,92);
    Player one("1",51,53,52,60,98);
    Player two("2",64,82,94,95,91);
    Player three("3",75,75,75,74,76);
    Player four("4",69,68,67,66,65);

    cout<< "0 :" << endl;
    zero.moyenneScore();
    zero.scoreTotal();
    zero.meilleurChanson();
    zero.pireChanson();
}