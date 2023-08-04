#include <thread>
#include "SFML/Graphics.hpp"
#include "Graph.h"
#include "Display.h"

using namespace sf;

void PromptWindow(Graph& graph)
{
	unsigned int width = 800;
	unsigned int height = 600;
	RenderWindow window(VideoMode(width, height), "Prompt");

	//
	// Add prompts
	//
	// Add two input textbox and one button
	//

	bool new_path = false;
	std::string from, to;
	std::thread GraphWindow_thread([&] {GraphWindow(graph, from, to, new_path); });
	GraphWindow_thread.detach();

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{

			//
			// Add mouse press event
			//
			// When mouse.clicked on button, update from, to, new_path
			//

			if (event.type == Event::Closed)
			{
				window.close();
			}
		}

		window.clear(Color::White);
		window.display();
	}
}


void GraphWindow(Graph& graph, std::string& from, std::string& to, bool& new_path)
{
	unsigned int width = 400;
	unsigned int height = 600;
	RenderWindow window(VideoMode(width, height), "graph", Style::Titlebar);
	while (window.isOpen())
	{
		// Don't receive any events
		Event event;
		while (window.pollEvent(event)) {}

		if (new_path) {

			//
			//
			// Get the path from graph, which are airport names
			// (Be careful of duplicate intermediate stops)
			//
			//
			// Get coordinates using getCoordinates method
			//
			// 
			// Turn real coordinates into pixels on screen 
			// pair<unsigned int, unsigned int> coord2pixel(pair<double, double>& coordinates)
			//
			//
			// Create dot objects representing airports (also their names?)
			// void airportCreate(pair<unsigned int, unsigned int>& pixels)
			// 
			//
			// Draw lines between dots
			// void pathCreate(pair<unsigned int, unsigned int>& from, pair<unsigned int, unsigned int>& to);
			//
			// 
			// Use sfml::::draw method to display all widgets
			//
			//

		}

		window.clear(Color::White);
		window.display();
	}
}

std::pair<unsigned int, unsigned int> coord2pixel(std::pair<double, double>& coordinates)
{
	return std::pair<unsigned int, unsigned int>();
}

void airportCreate(std::pair<unsigned int, unsigned int>& pixels)
{
}

void pathCreate(std::pair<unsigned int, unsigned int>& from, std::pair<unsigned int, unsigned int>& to)
{
}