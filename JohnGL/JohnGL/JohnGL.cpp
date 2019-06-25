// JohnGL.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <GL\glew.h>
#include "Display.h"
#include "Shader.h"
#include "Mesh.h"


int main(int argc, char* argv[])
{
	Display display(1280, 1280, "Hello world!");

	Vertex vertices[] = {	Vertex(glm::vec3(-0.5, -0.5,0)),
							Vertex(glm::vec3(0, 0.5,0)),
							Vertex(glm::vec3(0.5, -0.5,0)) };

	Mesh mesh(vertices, sizeof(vertices) / sizeof(vertices[0]));

	Shader shader(".\\res\\basicShader");

	while (!display.IsClosed()) 
	{
		display.Clear(1.0f, 0.15f, 0.3f, 0.5f);
		shader.Bind();
		mesh.Draw();

		display.Update();
	}

    return 0;
}

