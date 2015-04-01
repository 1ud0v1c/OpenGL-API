#ifndef PLAYER_H
#define PLAYER_H

#include <GL/glew.h> 
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/constants.hpp>

class Player {
     public:
	  Player();
	  ~Player();
	  int getLives();
	  void modifyLives(int value);
	  void modifyScore(double value);
	  void changePos(double x, double y, double z);
	  glm::vec3 getPos();
	  void update(float time,GLFWwindow *window, float dt);

     private:
	  int lives;
	  double score;
	  float speed;
	  glm::vec3 position;
	  glm::vec3 direction;
};
#endif
