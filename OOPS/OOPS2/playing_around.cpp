#include <iostream>
using namespace std;

class Gun{
public:
    int ammo;
    int damage;
    int scope;
};

class Player{

    class Helmet{
        int hp;
        int level;

    public: 
        void setHp(int hp){
            this->hp = hp;
        }
        void setLevel(int level){
            this->level = level;
        }

        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };

private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

   public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int isAlive(){
        return alive;
    }
    Gun getGun(){
        return gun;
    }
    void getHelmet(){
        cout<<helmet.getHp()<<endl;
        cout<<helmet.getLevel()<<endl;
    }

    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    void setIsAlive(bool alive){
        this->alive = alive;
    }
    void setGun(Gun gun){
        this->gun = gun;
    }
    void setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);
        int health = 0;
        if(level == 1)
            health = 25;
        else if(level == 2)
            health = 50;
        else if(level == 3)
            health = 100;
        else 
            cout<<"error, invalid level!!";

        helmet->setHp(health);
        this->helmet = *helmet;
    }



};

int main(){

    Player harsh; // object creation, statically
    Player raghav; // compile time, static allocation

    Player *urvi = new Player; // run time, dynamic allocation

    Gun akm;
    akm.ammo = 100;
    akm.damage = 50;
    akm.scope = 2;
    
    harsh.setAge(21);
    harsh.setHealth(100);
    harsh.setIsAlive(true);
    harsh.setScore(70);
    harsh.setGun(akm);
    harsh.setHelmet(2);

    Gun awm;
    awm.ammo = 15;
    awm.damage = 150;
    awm.scope = 8;
    
    raghav.setAge(22);
    raghav.setHealth(20);
    raghav.setIsAlive(true);
    raghav.setScore(100);
    raghav.setGun(awm);
    raghav.setHelmet(3);
    
    // (*urvi).setHealth(20); bekar instead use
    urvi->setHealth(20);
    cout<<urvi->getHealth()<<endl;

    Gun gun123 = harsh.getGun();
    cout<<gun123.damage<<endl;
    cout<<gun123.ammo<<endl;
    cout<<gun123.scope<<endl;

    harsh.getHelmet();

    return 0;
}