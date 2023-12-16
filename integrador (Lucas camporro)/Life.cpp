#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>

using namespace sf;

class Life {
public:
    Life() {
        texturaLife.loadFromFile("heart.png");
        spriteLife1.setTexture(texturaLife);
        spriteLife1.setOrigin(spriteLife1.getGlobalBounds().width / 2, spriteLife1.getGlobalBounds().height / 2);
        spriteLife1.setPosition(50,760);
        spriteLife1.setScale(4, 4);

        spriteLife2.setTexture(texturaLife);
        spriteLife2.setOrigin(spriteLife2.getGlobalBounds().width / 2, spriteLife2.getGlobalBounds().height / 2);
        spriteLife2.setPosition(150, 760);
        spriteLife2.setScale(4, 4);

        spriteLife3.setTexture(texturaLife);
        spriteLife3.setOrigin(spriteLife3.getGlobalBounds().width / 2, spriteLife3.getGlobalBounds().height / 2);
        spriteLife3.setPosition(250, 760);
        spriteLife3.setScale(4, 4);
    }

    void setSpritePositionLife1(float x, float y) {
        spriteLife1.setPosition(x, y);
    }
    void setSpritePositionLife2(float x, float y) {
        spriteLife2.setPosition(x, y);
    }
    void setSpritePositionLife3(float x, float y) {
        spriteLife3.setPosition(x, y);
    }

    Sprite getSpriteLife1() {
        return spriteLife1;
    }

    Sprite getSpriteLife2() {
        return spriteLife2;
    }

    Sprite getSpriteLife3() {
        return spriteLife3;
    }

private:
    Texture texturaLife;
    Sprite spriteLife1;
    Sprite spriteLife2;
    Sprite spriteLife3;
};