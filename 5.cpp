#include <iostream>
#include <string>
using namespace std;

class FootballPlayer {
private:
    string playerName;
    string position;
    int goalCount;

public:
    // Default constructor
    FootballPlayer() {
        playerName = "Unknown Player";
        position = "Benchwarmer";
        goalCount = 0;
    }

    // Parameterized constructor
    FootballPlayer(string name, string pos, int goals) {
        playerName = name;
        position = pos;
        goalCount = goals;
    }

    // Copy constructor
    FootballPlayer(const FootballPlayer &p) {
        playerName = p.playerName;
        position = p.position;
        goalCount = p.goalCount;
    }

    // Constructor with default arguments
    FootballPlayer(string name, string pos = "Midfielder", int goals = 10) {
        playerName = name;
        position = pos;
        goalCount = goals;
    }

    // Boost goal count
    void scoreGoals(int goals) {
        goalCount += goals;
    }

    // Display player profile
    void displayProfile() {
        cout << "Player Name : " << playerName << endl;
        cout << "Position    : " << position << endl;
        cout << "Goals       : " << goalCount << endl;
        cout << "Status      : Ballon d'Or Contender " << endl;
        cout << "-------------------------------" << endl;
    }
};

int main() {

    // Default constructor
    FootballPlayer p1;

    // Parameterized constructor
    FootballPlayer p2("Lionel Messi", "Forward", 820);

    // Copy constructor
    FootballPlayer p3(p2);

    // Constructor with default arguments
    FootballPlayer p4("Tony Kroos");

    // Boosting goals
    p1.scoreGoals(3);
    p2.scoreGoals(5);
    p3.scoreGoals(2);
    p4.scoreGoals(7);

    // Display profiles
    cout << " Football Player Profiles " << endl << endl;
    p1.displayProfile();
    p2.displayProfile();
    p3.displayProfile();
    p4.displayProfile();

    return 0;
}