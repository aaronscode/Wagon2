/**
 *
 *
 *
 */

// standard libraries

// external libraries
#include <SFML/Graphics.hpp> // openGL wrapper library like SDL

// local headers
#include <SpankWagon.h>

int main(int argc, char** argv) {

  // TODO variable declarations
  SpankWagon sw;
  
  // TODO setup sw::init
  sw.init();
  
  // create the main window
  sf::RenderWindow window(sf::VideoMode(800,600), "Hello, world!");

  // TODO set the fps
  
  // Main game loop
  // TODO make this a boolean - sw::isRunning()
  while(window.isOpen()) {

    // TODO sw::update()

    // check all of the window's events that were triggered
    // since the last iteration
    sf::Event event;
    while(window.pollEvent(event)) {
      if(event.type == sf::Event::Closed)
	window.close();
    }

    // TODO sw::render()
    // clear the window with black color
    window.clear(sf::Color::Black);


    // TODO move into sw::render()
    window.display();
  }

  // TODO insert cleanup code after the window is closed
  // sw:cleanup()

  return 0;
}
