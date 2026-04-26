#include<iostream>
using namespace std;

int main()
{
    long long codigo, codigo1, codigo2, codigo3, codigo4, codigo5;
    int segundos, minutos, hora;
    char letra, letra1, letra2, apellidom, apellidop, nombre;

    cout << "=====================================" << endl;
    cout << ">>> CLASSIFIED TERMINAL ACCESS <<<" << endl;
    cout << "=====================================" << endl;

    cout << "Initializing system..." << endl;
    cout << "Loading intelligence modules..." << endl;
    cout << "Connection established." << endl;

    cout << "Agent, we have intercepted a suspicious code..." << endl;
    cout << "Enter a 12-digit code for analysis: " << endl;
    cin >> codigo;

    cout << "Analyzing code structure..." << endl;
    cout << "Detected format: NN PP AA HH MM SS" << endl;
    cout << "NN/PP/AA -> Initials in ASCII code" << endl;
    cout << "HH/MM/SS -> Infiltration time" << endl;
    cout << "Accessing secret database..." << endl;

    cout << "Decrypting code..." << endl;

    segundos = codigo % 100;
    codigo1 = codigo / 100;

    minutos = codigo1 % 100;
    codigo2 = codigo1 / 100;

    hora = codigo2 % 100;
    codigo3 = codigo2 / 100;

    letra = codigo3 % 100;
    apellidom = char(letra);
    codigo4 = codigo3 / 100;

    letra1 = codigo4 % 100;
    apellidop = char(letra1);
    codigo5 = codigo4 / 100;

    letra2 = codigo5 % 100;
    nombre = char(letra2);

    cout << "Decoding initials..." << endl;
    cout << "Converting ASCII to characters..." << endl;
    cout << "Extracting access time..." << endl;

    cout << "=== DECRYPTED IDENTITY ===" << endl;
    cout << "Agent initials: " << nombre << apellidop << apellidom << endl;
    cout << "Infiltration time: " << hora << ":" << minutos << ":" << segundos << endl;

    cout << "Status: ACCESS CONFIRMED" << endl;
    cout << "Mission updated. Proceed with caution, agent." << endl;

    return 0;
}
