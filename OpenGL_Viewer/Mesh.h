#pragma once
#include "Utilities.h"
#include <map>
#include <vector>

typedef size_t uid_t;
typedef glm::vec3 Point;

class Mesh
{

public:

#pragma region Vertex Implementation


	class Vertex
	{

	public:

	private:

		Mesh* M_;
		uid_t uid_;
	};

	Vertex add_vertex(const Point& p)
	{
	}

	void remove_vertex(const uid_t i)
	{

	}


#pragma endregion

#pragma region Edge Implementation
	class Edge
	{

	public:

	private:

		Mesh* M_;
		uid_t uid_;
	};
#pragma endregion

#pragma region Polygon Implementation


	class Polygon
	{

	public:

	private:

		Mesh* M_;
		uid_t uid_;
	};
#pragma endregion


private:


#pragma region Internal Data Types

	struct VertexData
	{

	};

	struct EdgeData
	{

	};

	struct PolyData
	{

	};

#pragma endregion


#pragma region Mesh Containers

	std::vector<Vertex> vertices_;
	std::map<uid_t, VertexData> vertex_data_;

	std::vector<Edge> edges_;
	std::map<uid_t, EdgeData> edge_data_;

	std::vector<Polygon> polygons_;
	std::map<uid_t, PolyData> polygon_data_;

#pragma endregion





};