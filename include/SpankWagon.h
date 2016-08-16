/**
 *
 *
 *
 */
#ifndef _SPANK_WAGON_H_
#define _SPANK_WAGON_H_
// standard libraries

// external libraries
#include <SFML/Graphics.hpp> // openGL wrapper library like SDL

// local headers
// TODO include constants
// TODO include global vars

class SpankWagon {

 public:
  // constructor
  SpankWagon();
  // destructor
  ~SpankWagon();
  
  void init();

  void update();

  void render();

  void cleanup();
};
#endif // #ifndef _SPANK_WAGON_H_
