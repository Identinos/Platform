#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    //sf::Style::Default;
    sf::RenderWindow window(sf::VideoMode(512, 512), "Platform", sf::Style::Close | sf::Style::Titlebar);

    sf::RectangleShape rectangle(sf::Vector2f(120, 50));

    // change the size to 100x100
    rectangle.setSize(sf::Vector2f(200, 100));
    rectangle.setFillColor(sf::Color::Red);
    rectangle.setPosition(200.f, 200.f);

#pragma region game_runing

    while (window.isOpen())
    {
        sf::Event pasek_narzedzi;
        sf::Event Event;


        while (window.pollEvent(pasek_narzedzi))
        {
            if (pasek_narzedzi.type == pasek_narzedzi.Closed)
            {
                window.close();
            }
        }
        while (window.pollEvent(Event))
        {
            if (Event.type == sf::Event::EventType::Closed)
                window.close();
        }

        window.clear();
        window.draw(rectangle);
        window.display();
    }
   
#pragma endregion game_runing
    return 0;
}