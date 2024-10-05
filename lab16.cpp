// COMSC-210 | Lab 16 | Dan Pokhrel
#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
using namespace std;

const int COUNT = 5; // Number of colors to be generated
const int COLOR_MAX = 255; // Max value of a color channel

class Color {
private:
    int red;
    int green;
    int blue;
public:
    // Constructors
    Color() {red = 0; green = 0; blue = 0;} // default
    Color(int val) {red = val; green = val; blue = val;} // partial
    Color(int r, int g, int b) {red = r; green = g; blue = b;} // full parameter

    // Getters and Setters
    int getRed() const {return red;}
    void setRed(int r) {red = r;}
    int getGreen() const {return green;}
    void setGreen(int g)  {green = g;}
    int getBlue() const {return blue;}
    void setBlue(int b) {blue = b;}

    // Formatted Output
    void print() {
        cout << left;
        cout << "r:" << setw(3) << red << " | ";
        cout << "g:" << setw(3) << green << " | ";
        cout << "b:" << setw(3) << blue << "\n";
    }
};

int main(){
    vector<Color> colors;

    // Genereate Data
    for (int i = 0; i < COUNT; i++){
        Color tmp = Color(rand()%COLOR_MAX, rand()%COLOR_MAX, rand()%COLOR_MAX); // Generate random colors
        colors.push_back(tmp);
    }
    colors.push_back(Color()); // black
    colors.push_back(Color(COLOR_MAX)); // white

    // Print Data
    cout << "Outputing Color Values:\n";
    for (Color color : colors){
        color.print();
    }

    return 0;
}