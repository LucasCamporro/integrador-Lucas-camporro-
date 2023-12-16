#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>

using namespace sf;

class Background {
public:
    Background() {
        texturebackground.loadFromFile("background.png");
        spriteEnemy.setTexture(texturebackground);
        spriteEnemy.setOrigin(spriteEnemy.getGlobalBounds().width / 2, spriteEnemy.getGlobalBounds().height / 2);
        spriteEnemy.setPosition(500, 350);
        spriteEnemy.setScale(4, 4);
    }

    Sprite getSpritebackground() {
        return spriteEnemy;
    }

private:
    Texture texturebackground;
    Sprite spriteEnemy;
};

class VentanaDWL {
public:
    VentanaDWL() {
        textureventanaDWL.loadFromFile("ventanaDW.png");
        spriteventanaDWL.setTexture(textureventanaDWL);
        spriteventanaDWL.setOrigin(spriteventanaDWL.getGlobalBounds().width / 2, spriteventanaDWL.getGlobalBounds().height / 2);
        spriteventanaDWL.setScale(1, 1);
    }

    void setSpritePositionVentanaDWL(float x, float y) {
        spriteventanaDWL.setPosition(x, y);
    }

    Sprite getSpriteventanaDWL() {
        return spriteventanaDWL;
    }

private:
    Texture textureventanaDWL;
    Sprite spriteventanaDWL;
};

class VentanaDWR {
public:
    VentanaDWR() {
        textureventanaDWR.loadFromFile("ventanaDW.png");
        spriteventanaDWR.setTexture(textureventanaDWR);
        spriteventanaDWR.setOrigin(spriteventanaDWR.getGlobalBounds().width / 2, spriteventanaDWR.getGlobalBounds().height / 2);
        spriteventanaDWR.setScale(1, 1);
    }

    Sprite getSpriteventanaDWR() {
        return spriteventanaDWR;
    }

    void setSpritePositionVentanaDWR(float x, float y) {
        spriteventanaDWR.setPosition(x, y);
    }

private:
    Texture textureventanaDWR;
    Sprite spriteventanaDWR;
};

class VentanaDWOpen {
public:
    VentanaDWOpen() {
        textureventanaDWopen.loadFromFile("ventanaDWsinfondo.png");
        spriteventanaDWopen.setTexture(textureventanaDWopen);
        spriteventanaDWopen.setOrigin(spriteventanaDWopen.getGlobalBounds().width / 2, spriteventanaDWopen.getGlobalBounds().height / 2);
        spriteventanaDWopen.setScale(1, 1);
    }

    void setSpritePositionVentanaDWLopen(float x, float y) {
        spriteventanaDWopen.setPosition(x, y);
    }

    Sprite getSpriteventanaDWLopen() {
        return spriteventanaDWopen;
    }

private:
    Texture textureventanaDWopen;
    Sprite spriteventanaDWopen;
};


class VentanaUPL {
public:
    VentanaUPL() {
        textureventanaUPL.loadFromFile("ventanaUP.png");
        spriteventanaUPL.setTexture(textureventanaUPL);
        spriteventanaUPL.setOrigin(spriteventanaUPL.getGlobalBounds().width / 2, spriteventanaUPL.getGlobalBounds().height / 2);
        spriteventanaUPL.setScale(1, 1);
    }

    void setSpritePositionVentanaUPL(float x, float y) {
        spriteventanaUPL.setPosition(x, y);
    }

    Sprite getSpriteventanaUPL() {
        return spriteventanaUPL;
    }

private:
    Texture textureventanaUPL;
    Sprite spriteventanaUPL;
};

class VentanaUPR {
public:
    VentanaUPR() {
        textureventanaUPR.loadFromFile("ventanaUP.png");
        spriteventanaUPR.setTexture(textureventanaUPR);
        spriteventanaUPR.setOrigin(spriteventanaUPR.getGlobalBounds().width / 2, spriteventanaUPR.getGlobalBounds().height / 2);
        spriteventanaUPR.setScale(1, 1);
    }

    void setSpritePositionVentanaUPR(float x, float y) {
        spriteventanaUPR.setPosition(x, y);
    }

    Sprite getSpriteventanaUPR() {
        return spriteventanaUPR;
    }

private:
    Texture textureventanaUPR;
    Sprite spriteventanaUPR;
};
class VentanaUPLOpen {
public:
    VentanaUPLOpen() {
        textureventanaUPLopen.loadFromFile("ventanaUPsinFondo.png");
        spriteventanaUPLopen.setTexture(textureventanaUPLopen);
        spriteventanaUPLopen.setOrigin(spriteventanaUPLopen.getGlobalBounds().width / 2, spriteventanaUPLopen.getGlobalBounds().height / 2);
        spriteventanaUPLopen.setScale(1, 1);
    }

    void setSpritePositionVentanaUPL(float x, float y) {
        spriteventanaUPLopen.setPosition(x, y);
    }

    Sprite getSpriteventanaUPLopen() {
        return spriteventanaUPLopen;
    }

private:
    Texture textureventanaUPLopen;
    Sprite spriteventanaUPLopen;
};


class Door {
public:
    Door() {
        texturedoorOpen.loadFromFile("puerta.png");
        spritedoorOpen.setTexture(texturedoorOpen);
        spritedoorOpen.setOrigin(spritedoorOpen.getGlobalBounds().width / 2, spritedoorOpen.getGlobalBounds().height / 2);
        spritedoorOpen.setPosition(500, 490);
        spritedoorOpen.setScale(1, 1);
    }

    void setSpritePositionDoor(float x, float y) {
        spritedoorOpen.setPosition(x, y);
    }

    Sprite getSpritedoor() const {
        return spritedoorOpen;
    }

private:
    Texture texturedoorOpen;
    Sprite spritedoorOpen;
};

class GameOver {
public:
    GameOver() {
        texturegameover.loadFromFile("gameover.png");
        spritegameover.setTexture(texturegameover);
        spritegameover.setOrigin(spritegameover.getGlobalBounds().width / 2, spritegameover.getGlobalBounds().height / 2);
        spritegameover.setPosition(9999, 9999);
        spritegameover.setScale(1, 1);
    }

    void setSpritePositiongameover(float x, float y) {
        spritegameover.setPosition(x, y);
    }

    Sprite getSpritegameover() const {
        return spritegameover;
    }

private:
    Texture texturegameover;
    Sprite spritegameover;
};