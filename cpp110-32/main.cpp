/*
 * CPP110 - Exercise 32
 * Pointer and Reference
 */

#include <iostream>
#include <cmath>

using namespace std;

void kugelRef(double r, double &O, double &V) {
    O = 4 * M_PI * pow(r, 2.0);
    V = (4.0 / 3) * M_PI * pow(r, 3.0);
}

void kugelPtr(double r, double *O, double *V) {
    *O = 4 * M_PI * pow(r, 2.0);
    *V = (4.0 / 3) * M_PI * pow(r, 3.0);
}

int main() {
    double radius, oberflaeche, volumen;
    oberflaeche = 0.0;
    volumen = 0.0;
    double &oRef = oberflaeche;
    double &vRef = volumen;

    cout << "###########################################################" << endl;
    cout << "Kugelumfang und -volumen berechnen" << endl;
    cout << "###########################################################" << endl;
    cout << "Radius (cm): ";
    cin.sync();
    cin.clear();
    cin >> radius;
    cout << "___________________________________________________________" << endl << endl;

    kugelRef(radius, oRef, vRef);
    cout << "###########################################################" << endl;
    cout << "Berechnung via Referenzen" << endl;
    cout << "###########################################################" << endl;
    cout << "Oberfläche: " << oberflaeche << " cm²" << endl;
    cout << "Volumen: " << volumen << " cm³" << endl;
    cout << "___________________________________________________________" << endl << endl;

    kugelPtr(radius, &oberflaeche, &volumen);
    cout << "###########################################################" << endl;
    cout << "Berechnung via Pointer" << endl;
    cout << "###########################################################" << endl;
    cout << "Oberfläche: " << oberflaeche << " cm²" << endl;
    cout << "Volumen: " << volumen << " cm³" << endl;
    cout << "___________________________________________________________" << endl << endl;

    return 0;
}


