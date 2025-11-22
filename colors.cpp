#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;



void gradient(ofstream& ppm){
    
     int w , h , r1 , r2;
    
    cout << "Enter Width: ";
    cin >> w;
    
    cout << "Enter Height: ";
    cin >> h;

  /// r1 and r2 for randomeness.... will add more later!
        
    cout << "Enter value for Randomness: ";
    cin >> r1;

    cout << "Enter value for Randomness: ";
    cin >> r2;

      ppm << "P3\n" << w << " " << h << "\n255\n";
      
      for(int i = 0; i < h ; i++){
        for(int j = 0; j < w ; j++){
      
          int r = (i * r1 ) % 250;
          int g = (j * r2 ) % 250;
          int b = (i + j) % 250;
          
          ppm << r << " " << g << " " << b << " ";

        }
        ppm << "\n";
      }
      ppm.close();
}

void singleColour(ofstream& ppm){

    int w , h, r, g, b;

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

    // Single Color Only!!!
    // turn this code into a function!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1

    ppm << "P3\n" << w << " " << h << "\n255\n";

    for (int y = 0; y < h; y++){
      for(int x = 0 ; x < w; x++){

          ppm << r << " " << g << " " << b << " ";
      }
      ppm << "\n";
    }
    ppm.close();



}

int main()
{
    
  /// Take user input and make a PPM File out of it!
    string file_path;
    cout << "Enter File Name: ";
    getline(cin,file_path);
    // string conceatnation!!
    string filename = file_path + ".ppm";
   // this is our file to work with!
    ofstream ppm(filename);
  
  int choice;

    cout << "/n Make a Picture! \n";
    cout << "1.Single Color \n";
    cout << "2.Gradient \n";

    cout << "Enter Your Choice: ";
    cin >> choice;

    switch (choice) {
      
      case 1:
        singleColour(ppm);
        break;
      case 2:
        gradient(ppm);
        break;

      default:
        cout << "Are YOu DUMB!!!!!!!!!!!!!!!!!!!!!!!!!111\n";
        
        break;
    }


  return 0;
}


