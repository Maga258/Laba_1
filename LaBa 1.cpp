#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[]) {
    setlocale(LC_CTYPE, "rus");

    bool isHuman = false;
    float x = 1.0, y = 1.0;
    float const1 = -4.0, const2 = 3.0, const3 = 4.0;

    if (argc <= 1 || strcmp(argv[1], "false") != 0) {
        isHuman = true;
    }

    while (x != 0 || y != 0) {
        if (isHuman) cout << "Введи координату x: ";
        cin >> x;
        if (isHuman) cout << "Введи координату y: ";
        cin >> y;

        if (x == 0 && y == 0) break;

        if (x >= 0 && x <= 3) {
            float y1 = (const1 / const2) * x + const3;

            if (y >= 0 && y <= y1) {
                if (isHuman) {
                    cout << "Координаты: " << x << ", " << y << " входят в треугольник!" << endl;
                }
                else {
                    cout << "YES" << endl;
                }
            }
            else {
                if (isHuman) {
                    cout << "Координаты: " << x << ", " << y << " не входят в треугольник!" << endl;
                }
                else {
                    cout << "NO" << endl;
                }
            }
        }
        else {
            if (isHuman) {
                cout << "Координаты: " << x << ", " << y << " не входят в треугольник!" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
