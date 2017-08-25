#ifndef ENNEMY_H
#define ENNEMY_H

#include "../headers/movableEntity.hpp"
#include "../headers/livingEntity.hpp"
#include <SFML/Graphics.hpp>

enum EnemyType {Enemy_Dragon, Enemy_Boar};

class Enemy : public MovableEntity, public LivingEntity
{
    public:
        Enemy(int hp);
        virtual ~Enemy();
        short int getAttackDamage();
        virtual void update(float elapsedTime, sf::Vector2u windowSize);
        EnemyType getEnemyType();
        bool isDead();

    protected:
        sf::Clock clock;
        short int animation_state = 0;
        short int attack_damage = 0;
        EnemyType enemy_type;
        static int const DRAGON_HP = 20;
        static int const BOAR_HP = 3;
        bool is_dead = false;

    private:
};

#endif // ENNEMY_H
