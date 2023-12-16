#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>

using namespace sf;

class Crosshair {
public:
    Crosshair() {
        texturaCrosshair.loadFromFile("Crosshair.png");
        spriteCrosshair.setTexture(texturaCrosshair);
        spriteCrosshair.setScale(0.5, 0.5);
    }

    void setSpritePosition(float x, float y) {
        spriteCrosshair.setPosition(x, y);
    }

    Sprite getSprite() {
        return spriteCrosshair;
    }

private:
    Texture texturaCrosshair;
    Sprite spriteCrosshair;
};