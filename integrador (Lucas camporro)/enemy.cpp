#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>

using namespace sf;

class Enemy {
public:
    Enemy() {
        texturaEnemy.loadFromFile("malomaloso2.png");
        spritebackground.setTexture(texturaEnemy);
        spritebackground.setOrigin(spritebackground.getGlobalBounds().width / 2, spritebackground.getGlobalBounds().height / 2);
        spritebackground.setScale(0.5, 0.5);

    }

    void setSpritePosition(float x, float y) {
        spritebackground.setPosition(x, y);
    }

    FloatRect getGlobalBounds() {
        return spritebackground.getGlobalBounds();
    }

    Sprite getSprite() {
        return spritebackground;
    }

private:
    Texture texturaEnemy;
    Sprite spritebackground;
};