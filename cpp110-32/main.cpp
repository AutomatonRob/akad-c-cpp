/*
 * CPP110 - Exercise 32
 * Pointer and Reference
 */

#include <iostream>
#include <cmath>
using namespace std;

void kugelRef(int r, double& O, double& V) {
    O = 4 * M_PI * r * r;
    V = (4.0 / 3) * M_PI * r * r * r;
}

void kugelPtr(int r, double *O, double *V) {
    *O = 4 * M_PI * r * r;
    *V = (4.0 / 3) * M_PI * r * r * r;
}

int main() {
    int radius;
    double oberflaeche = 0.0;
    double volumen = 0.0;
    double& oRef = oberflaeche;
    double& vRef = volumen;

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


