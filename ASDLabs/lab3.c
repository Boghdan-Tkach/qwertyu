#include <stdio.h>
#include <windows.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc < 2 || (argv[1] == "--terminal") != 0)
    {
        system("start lab3.exe --terminal");
        return 0;
    }
    HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    int rows = 24;
    int cols = 80;

    pos.X = rows / 2;
    pos.Y = rows / 2 + 1;

    int colCoord = cols - rows + 1;
    int rowCoord = 1;

    int direction = 1; // 0 - left/down, 1 - right/up
    while (colCoord < 81 && rowCoord < 25)
    {

        if (colCoord < 81)
        {
            for (int i = 0; i < colCoord;i++)
            {
              SetConsoleCursorPosition(hout, pos);
              printf("+");
              usleep(1000);
              fflush(stdout);
              if (direction == 0)
                pos.X--; // Рух ліворуч (X зменшується)
              else
                pos.X++; // Рух праворуч (X збільшується)
            }
            colCoord++;
        }
        if (rowCoord < 24)
        {
            for (int i = 0; i < rowCoord;i++)
            {
            SetConsoleCursorPosition(hout, pos);
                printf("+");
                usleep(1000);
                fflush(stdout);
                if (direction == 0)
                    pos.Y++;
                else
                    pos.Y--;
            }
            rowCoord++;
        }
        direction = !direction;
    }
    COORD endPos = {0, rows};
    SetConsoleCursorPosition(hout, endPos);
    getchar();
    return 0;
}