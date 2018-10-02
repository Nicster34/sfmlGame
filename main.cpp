#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML works!");
    sf::Texture texture;
    if (!texture.loadFromFile("/home/nicster34/Pictures/640480.jpg")){
    // error...
    }
    sf::Sprite sprite;
    sprite.setTexture(texture);
    sf::CircleShape shape(10.f);
    shape.setFillColor(sf::Color::Blue);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
            std::cout<<"left";
            shape.setFillColor(sf::Color::Green);
            shape.move(sf::Vector2f(0,.1));
        }  
        window.clear();
       // window.draw(shape);
        window.draw(sprite);
        window.draw(shape);
        window.display();
    }

    return 0;
}
