#pragma once


class Box
{
private:
	float width;
	float height;
	float depth;
public:
	float GetSurface();
	float GetVolume();
	Box(float width, float height, float depth);//コンストラクタ
};