#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>

using namespace sf;

class Inocent {
public:
    Inocent() {
        texturaInocent.loadFromFile("inocenteWasap.png");
        spriteInocent.setTexture(texturaInocent);
        spriteInocent.setOrigin(spriteInocent.getGlobalBounds().width / 2, spriteInocent.getGlobalBounds().height / 2);
        spriteInocent.setScale(1.5, 1.5);

    }

    void setSpritePosition(float x, float y) {
        spriteInocent.setPosition(x, y);
    }

    FloatRect getGlobalBounds() {
        return spriteInocent.getGlobalBounds();
    }

    Sprite getSprite() {
        return spriteInocent;
    }

private:
    Texture texturaInocent;
    Sprite spriteInocent;
};