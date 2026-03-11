#include "Canvas.h"
#include <cstdio>
#include <cstdlib>

Canvas::Canvas(int width, int height) {
	this->width = width;
	this->height = height;

	matrix = new char* [height];
	for (int i = 0; i < height; ++i)
		matrix[i] = new char[width];

	Clear();
}

Canvas::~Canvas() {
	for (int i = 0; i < height; ++i)
		for (int j = 0; j < width; ++j)
			matrix[i][j] = ' ';
}

void Canvas::DrawCircle(int x, int y, int ray, char ch) {
	int cx = 0;
	int cy = ray;
	int d = 3 - 2 * ray;

	while (cy >= cx) {
		SetPoint(x + cx, y + cy, ch);
		SetPoint(x - cx, y + cy, ch);
		SetPoint(x + cx, y - cy, ch);
		SetPoint(x - cx, y - cy, ch);
		SetPoint(x + cy, y + cx, ch);
		SetPoint(x - cy, y + cx, ch);
		SetPoint(x + cy, y - cx, ch);
		SetPoint(x - cy, y - cx, ch);

		cx++;
		if (d > 0) {
			cy--;
			d = d + 4 * (cx - cy) + 10;
		}
		else
			d = d + 4 * cx + 6;
	}
}	

void Canvas::FillCircle(int x, int y, int ray, char ch) {
	for (int i = y - ray; i <= y + ray; i++)
		for (int j = x - ray; j <= x; j++)
			if ((j - x) * (j - x) + (i - y) * (i - y) <= ray * ray)
				SetPoint(j, i, ch);
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
	DrawLine(left, top, right, top, ch);
	DrawLine(left, bottom, right, bottom, ch);
	DrawLine(left, top, right, bottom, ch);
	DrawLine(left, top, right, bottom, ch);
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
	for (int y = top; y <= bottom; ++y)
		for (int x = left; x <= right; ++x)
			SetPoint(x, y, ch);
}

void Canvas::SetPoint(int x, int y, char ch) {
	if (x >= 0 && x < width && y >= 0 && y < height)
		matrix[y][x] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
	int dx = std::abs(x2 - x1);
	int sx = x1 < x2 ? 1 : -1;
	int dy = -std::abs(y2 - y1);
	int sy = y1 < y2 ? 1 : -1;
	int error = dx + dy;

	while (true) {
		SetPoint(x1, y1, ch);
		if (x1 == x2 && y1 == y2) break;
		
		if (error * 2 >= dy) {
			if (x1 == x2) break;
			error += dy;
			x1 += sx;
		}

		if (error * 2 <= dx) {
			if (y1 == y2) break;
			error += dx;
			y1 += sy;
		}
	}
}

void Canvas::Print() {
	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < width; ++j)
			printf("%c", matrix[i][j]);
		printf("\n");
	}
}

void Canvas::Clear() {
	for (int i = 0; i < height; ++i)
		for (int j = 0; j < height; j++)
			matrix[i][j] = ' ';
}