#include <iostream>
#include <string>
#include <vector>

class Player {
    public:
        Player(std::string name, int scoreone, int scoretwo, int scorethree, int scorefour,int scorefive);
        void moyenneScore();
        void scoreTotal();
        void pireChanson();
        void meilleurChanson();

    private:
        std::string pseudo;
        int score1;
        int score2;
        int score3;
        int score4;
        int score5;

};