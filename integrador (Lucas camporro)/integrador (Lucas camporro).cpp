#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "crosshair.cpp"
#include "enemy.cpp"
#include "background.cpp"
#include "inocent.cpp"
#include "Life.cpp"
#include <cstdlib>
#include <iostream>

using namespace sf;
using namespace std;

int main() {
    sf::RenderWindow window(sf::VideoMode(1000, 850, 32), "ventana");

    std::srand(time(NULL));

    window.setFramerateLimit(60);

    window.setMouseCursorVisible(false);

    Crosshair cross;
    Enemy enemigo;
    Inocent inocente;
    Background backg;
    VentanaDWL VentanaDWL;
    VentanaDWOpen VentanaDWOpen;
    VentanaDWR VentanaDWR;
    VentanaUPL VentanaUPL;
    VentanaUPLOpen VentanaUPLOpen;
    VentanaUPR VentanaUPR;
    Door Door;
    Life vidas;
    GameOver GameOver;
    Font font;
    if (!font.loadFromFile("alagard_by_pix3m-d6awiwp.ttf")) {
    }

    Text scoreText;
    scoreText.setFont(font);
    scoreText.setCharacterSize(50);
    scoreText.setFillColor(sf::Color::White);
    scoreText.setPosition(700, 740);

    int i = 0;
    int j = 0;
    int score = 0;
    int lifecont = 4;

    bool numberbool = true;
    int randomWindow = 0;
    int randomEoI = 0;

    VentanaDWL.setSpritePositionVentanaDWL(180, 463.5f);
    VentanaDWR.setSpritePositionVentanaDWR(820, 463.5f);
    VentanaUPL.setSpritePositionVentanaUPL(213, 128);
    VentanaUPR.setSpritePositionVentanaUPR(788, 128);
    VentanaDWOpen.setSpritePositionVentanaDWLopen(9999, 9999);
    VentanaUPLOpen.setSpritePositionVentanaUPL(9999, 9999);
    enemigo.setSpritePosition(9999, 9999);
    inocente.setSpritePosition(9999, 9999);

    while (window.isOpen()) {
        sf::Event evnt;
        while (window.pollEvent(evnt)) {
            if (evnt.type == sf::Event::Closed) {
                window.close();
            }
            if (evnt.type == sf::Event::MouseMoved) {
                sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
                cross.setSpritePosition(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y));
            }
        }

        i++;
        j++;

        if (i > 300) {

            if (numberbool == true) 
            {
                randomWindow = rand() % 5 +1;
                randomEoI = rand() % 2 + 1;
                numberbool = false;
            }

            switch (randomWindow)
            {
            case 1:
                VentanaDWL.setSpritePositionVentanaDWL(9999, 9999);
                VentanaDWOpen.setSpritePositionVentanaDWLopen(180, 463.5f);
                
                if (randomEoI == 1) 
                {
                    enemigo.setSpritePosition(180, 463.5f);
                }
                if(randomEoI == 2)
                {
                    inocente.setSpritePosition(180, 495);
                }
                if (j > 500) {
                    VentanaDWL.setSpritePositionVentanaDWL(180, 463.5f);
                    VentanaDWOpen.setSpritePositionVentanaDWLopen(9999, 9999);
                    enemigo.setSpritePosition(9999, 9999);
                    inocente.setSpritePosition(9999, 9999);
                    i = 0;
                    j = 0;
                    numberbool = true;
                }
                break;
            case 2:
                VentanaDWR.setSpritePositionVentanaDWR(9999, 9999);
                VentanaDWOpen.setSpritePositionVentanaDWLopen(820, 463.5f);
                if (randomEoI == 1)
                {
                    enemigo.setSpritePosition(820, 463.5f);
                }
                else
                {
                    inocente.setSpritePosition(820, 495);
                }

                if (j > 500) {
                    VentanaDWR.setSpritePositionVentanaDWR(820, 463.5f);
                    VentanaDWOpen.setSpritePositionVentanaDWLopen(9999, 9999);
                    enemigo.setSpritePosition(9999, 9999);
                    inocente.setSpritePosition(9999, 9999);
                    i = 0;
                    j = 0;
                    numberbool = true;
                }
                break;
            case 3:
                VentanaUPL.setSpritePositionVentanaUPL(9999, 9999);
                VentanaUPLOpen.setSpritePositionVentanaUPL(213, 128);
                if (randomEoI == 1)
                {
                    enemigo.setSpritePosition(213, 128);
                }
                else
                {
                    inocente.setSpritePosition(213, 160);
                }

                if (j > 500) {
                    VentanaUPL.setSpritePositionVentanaUPL(213, 128);
                    VentanaUPLOpen.setSpritePositionVentanaUPL(9999, 9999);
                    enemigo.setSpritePosition(9999, 9999);
                    inocente.setSpritePosition(9999, 9999);
                    i = 0;
                    j = 0;
                    numberbool = true;
                }
                break;
            case 4:
                VentanaUPR.setSpritePositionVentanaUPR(9999, 9999);
                VentanaUPLOpen.setSpritePositionVentanaUPL(788, 128);
                if (randomEoI == 1)
                {
                    enemigo.setSpritePosition(788, 128);
                }
                else
                {
                    inocente.setSpritePosition(788, 160);
                }

                if (j > 500) {
                    VentanaUPR.setSpritePositionVentanaUPR(788, 128);
                    VentanaUPLOpen.setSpritePositionVentanaUPL(9999, 9999);
                    enemigo.setSpritePosition(9999, 9999);
                    inocente.setSpritePosition(9999, 9999);
                    i = 0;
                    j = 0;
                    numberbool = true;
                }
                break;
            case 5:
                Door.setSpritePositionDoor(9999, 9999);
                if (randomEoI == 1)
                {
                    enemigo.setSpritePosition(500, 510);
                }
                else
                {
                    inocente.setSpritePosition(500, 515);
                }

                if (j > 500) {
                    Door.setSpritePositionDoor(500, 490);
                    enemigo.setSpritePosition(9999, 9999);
                    inocente.setSpritePosition(9999, 9999);
                    i = 0;
                    j = 0;
                    numberbool = true;
                }
                break;
            }
        }

        if (Mouse::isButtonPressed(Mouse::Left)) 
        {
            FloatRect enemigoBounds = enemigo.getGlobalBounds();
            FloatRect inocentBounds = inocente.getGlobalBounds();
            sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
                if (enemigoBounds.contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y)))
                {
                    enemigo.setSpritePosition(9999, 9999);
                    score++;
                    j = 500;
                }
                if (inocentBounds.contains(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y))) 
                {
                    inocente.setSpritePosition(9999, 9999);
                    score = score - 10;
                    lifecont = lifecont -1;
                    j = 500;
                }
        }

        if (j == 499 && randomEoI == 1)
        {
            lifecont--;
        }
            if (lifecont == 3) { vidas.setSpritePositionLife3(9999, 9999); }
            if (lifecont == 2) { vidas.setSpritePositionLife2(9999, 9999); }
            if (lifecont == 1) 
            { 
                vidas.setSpritePositionLife1(9999, 9999);
                GameOver.setSpritePositiongameover(500, 425);
                scoreText.setPosition(350, 690);
            }

        scoreText.setString("Puntaje: " + std::to_string(score));

        window.clear();
        window.draw(enemigo.getSprite());
        window.draw(inocente.getSprite());
        window.draw(VentanaDWL.getSpriteventanaDWL());
        window.draw(VentanaDWR.getSpriteventanaDWR());
        window.draw(VentanaUPR.getSpriteventanaUPR());
        window.draw(VentanaUPL.getSpriteventanaUPL());

        window.draw(backg.getSpritebackground());

        window.draw(VentanaDWOpen.getSpriteventanaDWLopen());

        window.draw(VentanaUPLOpen.getSpriteventanaUPLopen());

        window.draw(Door.getSpritedoor());

        window.draw(vidas.getSpriteLife1());
        window.draw(vidas.getSpriteLife2());
        window.draw(vidas.getSpriteLife3());


        window.draw(cross.getSprite());

        window.draw(GameOver.getSpritegameover());

        window.draw(scoreText);

        window.display();
    }
    return 0;
}