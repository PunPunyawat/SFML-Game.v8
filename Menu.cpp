/*#include "Menu.h"
using namespace sf;

Menu::Menu(float width, float height)
{
	if (!font.loadFromFile("font/Jelly Crazies.ttf"))
	{
		printf("ERROR\n");
	}

	menu[0].setFont(font);
	menu[0].setFillColor(sf::Color::Red );
	menu[0].setString("PLAY");			//width อันตราส่วนความกว้าง    // ความสูง    // * 1 ให้อยุ่บนสุด
	menu[0].setPosition(sf::Vector2f(width / 3, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));

	menu[1].setFont(font);
	menu[1].setFillColor(sf::Color::White );
	menu[1].setString("OPTIONS");
	menu[1].setPosition(sf::Vector2f(width / 3, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));

	menu[2].setFont(font);
	menu[2].setFillColor(sf::Color::White);
	menu[2].setString("EXIT");
	menu[2].setPosition(sf::Vector2f(width / 3, height / (MAX_NUMBER_OF_ITEMS + 1) * 3));

	selectedItemIndex = 0;

}

Menu::~Menu()
{

}


void Menu::draw(sf::RenderWindow &window)
{
	for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++)
	{
		window.draw(menu[i]);
	}


}

void Menu::MoveUp()
{
	if (selectedItemIndex - 1 >= 0)
	{
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex--;
		menu[selectedItemIndex].setFillColor(sf::Color::Red);
	}

}

void Menu::MoveDown()
{
	if (selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS)
	{
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex++;
		menu[selectedItemIndex].setFillColor(sf::Color::Red);
	}

}
*/

#include "Menu.h"

Menu::Menu(sf::Texture* texture, sf::Vector2f scale, sf::Vector2f position)
{
	this->body.setScale(scale);
	this->body.setPosition(position);
	this->body.setTexture(*texture);
}

Menu::~Menu()
{
}

void Menu::setScale(sf::Vector2f scale)
{
	this->body.setScale(scale);
}

void Menu::Draw(sf::RenderWindow& window)
{
	window.draw(body);
}

bool Menu::getGlobalBounds(sf::RenderWindow& window)
{
	return this->body.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y);
}
