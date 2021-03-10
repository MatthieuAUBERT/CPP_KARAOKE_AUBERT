#include <iostream>
#include <string>
#include <vector>

class Karaoke {
    public:
        Karaoke();
        void meilleurScoreTot();
        void meilleurMoy();
        void meilleurScoreUneChanson();
        void addJoueur();
        void deleteJoueur();

    private:
        int nombreChansons;
        int nombreJoueurs;

};

class Chanson{
    public:
        void meilleurScore();
    private:
        std::string name;
};