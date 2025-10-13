#include <iostream>
class Player{
    private:
    int score;
    int health;

    public:
    void setScore(int s){ // setter
        score = s; 
    }
    void setHealth(int h){
        health = h;
    }
    // getter
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};
using namespace std;
int main(){


    Player harsh;
    harsh.setScore(130);
    harsh.setHealth(100);
    cout<<harsh.getScore()<<endl;
    cout<<harsh.getHealth()<<endl;

    Player player[10];
    player[0] = harsh;


}