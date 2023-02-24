#pragma once
#include <DirectXMath.h>
#include "GameEntity.h"

// a square room that with entities inside of it
class Exhibit
{
public:
	Exhibit(std::vector<GameEntity*>& entityList,  Mesh* cube, Material* surface, DirectX::XMFLOAT3 origin, float size, bool posXWall, bool negXWall, bool posZWall, bool negZWall);
	//~Exhibit();
	void PlaceObject(GameEntity* entity, const DirectX::XMFLOAT3& position);
	void AttachTo(Exhibit* other, const DirectX::XMFLOAT3& direction);

private:
	DirectX::XMFLOAT3 origin;
	float size;
	GameEntity* floor;
	GameEntity* posXWall;
	GameEntity* negXWall;
	GameEntity* posZWall;
	GameEntity* negZWall;

	const float THICKNESS = 1;
	const float WALL_HEIGHT = 3;

	void PlaceStructures();
};