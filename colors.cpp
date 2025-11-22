#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <format>
using namespace std;

int main()
{
    int w , h, r, g, b;

   /// Take user input and make a PPM File out of it!
    string file_path;
    cout << "Enter File Name: ";
    getline(cin,file_path);
    // string conceatnation!!
    string filename = file_path + ".ppm";
   // this is our file to work with!
    ofstream ppm(filename);

    cout << "Enter Width: ";
    cin >> w;
    
    cout << "Enter Height: ";
    cin >> h;

    cout << "Enter R: ";
    cin >> r;

    cout << "Enter B: ";
    cin >> b;
     cout << "Enter G: ";
    cin >> g;


    ppm << "P3\n" << w << " " << h << "\n255\n";

    for (int y = 0; y < h; y++){
      for(int x = 0 ; x < w; x++){

          ppm << r << " " << g << " " << b << " ";
      }
      ppm << "\n";
    }

  ppm.close();

  return 0;
}


