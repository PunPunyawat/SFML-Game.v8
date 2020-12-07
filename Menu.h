/*#pragma once
#include "SFML/Graphics.hpp"
#define MAX_NUMBER_OF_ITEMS 3  // max number of item ค่าเท่ากับ 3

class Menu
{
public: 
	Menu(float width, float height);
	~Menu();

	void draw(sf::RenderWindow &window);
	void MoveUp();
	void MoveDown();
	int GetPressedItem() { return selectedItemIndex; }

private:

	int selectedItemIndex;
	sf::Font font;
	sf::Text menu[MAX_NUMBER_OF_ITEMS];
	
};
*/

#pragma once
#include<SFML\Graphics.hpp>
#include<iostream>
class Menu
{

public:

	Menu(sf::Texture* texture, sf::Vector2f scale, sf::Vector2f position);
	~Menu();
	void setScale(sf::Vector2f scale);
	void Draw(sf::RenderWindow& window);
	bool getGlobalBounds(sf::RenderWindow& window);

private:

	sf::Sprite body;
	sf::RectangleShape shape;
};