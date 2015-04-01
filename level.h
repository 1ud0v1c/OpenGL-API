#ifndef LEVEL_H
#define LEVEL_H

#include "gameObject.h"
#include <map>
#include "gameSphere.h"
#include "player.h"
#include "camera.h"

class Level {
	public:
		Level();
		Level(std::map<std::string,GLuint> programms);
		void makeObject();
		void draw();
		void init();
		void update(float time,GLFWwindow *window, float dt);
		void addObject(GameObject *o);
		void setType(GLuint type);
		std::vector<GameObject*> getObjects();
		Camera getCamera();
		Player* getPlayer();

	private:
		std::map<std::string,GLuint> programms;
		std::vector<GameObject*> objects;
		Player* player;
		Camera camera;
		float gravity;
};

#endif
