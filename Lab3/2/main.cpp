#include "Canvas.h"
#include <cstdio>

int main() {
    Canvas canvas(80, 24);

    canvas.DrawRect(2, 2, 20, 10, '#');
    canvas.FillRect(4, 4, 18, 8, '.');
    canvas.DrawCircle(60, 11, 8, 'O');
    canvas.FillCircle(60, 11, 5, '*');
    canvas.DrawLine(10, 20, 75, 2, '-');
    canvas.SetPoint(1, 1, 'X');

    canvas.Print();

    printf("\nPress Enter to clear the canvas.\n");
    getchar();

    canvas.Clear();

    return 0;
}