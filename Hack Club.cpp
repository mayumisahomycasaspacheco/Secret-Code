#include<iostream>
using namespace std;

int main()
{
    long long codigo, codigo1, codigo2, codigo3, codigo4, codigo5;
    int segundos, minutos, hora, opcion;
    char letra, letra1, letra2, apellidom, apellidop, nombre;

    cout << "=====================================" << endl;
    cout << ">>> CLASSIFIED TERMINAL ACCESS <<<" << endl;
    cout << "=====================================" << endl;

    cout << "Initializing system..." << endl;
    cout << "Loading intelligence modules..." << endl;
    cout << "Connection established." << endl;

    cout << "Select mode: " << endl;
    cout << "1. Decode existing code" << endl;
    cout << "2. Generate new code" << endl;
    cin >> opcion;

    if (opcion == 1)
    {
        cout << "Agent, we have intercepted a suspicious code..." << endl;
        cout << "Enter a 12-digit code for analysis: " << endl;
        cin >> codigo;

        if (codigo < 100000000000 || codigo > 999999999999)
        {
            cout << "ERROR: Invalid code." << endl;
            cout << "The system requires a 12-digit code." << endl;
            cout << "Are you a agent, right?" << endl;
        }
        else
        {
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
        }
        
    }
    
    else if (opcion == 2)
    {
        int nn, pp, aa, hora, minutos, segundos;
        long long codigo;
        char nombre, apellidop, apellidom;

        cout << "Enter a munber for first initial (65-90): "; cin >> nn;
        cout << "Enter a number for last name initial (65-90): "; cin >> pp;
        cout << "Enter a number for seconde last name initial (65-90): "; cin >> aa;
        cout << "Enter hour (0-23): "; cin >> hora;
        cout << "Enter minutes (0-59): "; cin >> minutos;
        cout << "Enter seconds (0-59): "; cin >> segundos;

        codigo = nn;
        nombre = char(nn);
        codigo = codigo * 100 + pp;
        apellidop = char(pp);
        codigo = codigo * 100 + aa;
        apellidom = char(aa);
        codigo = codigo * 100 + hora;
        codigo = codigo * 100 + minutos;
        codigo = codigo * 100 + segundos;

        cout << "Generating encrypted code..." << endl;
        cout << "Generated code: " << codigo << endl;

        cout << "=== AGENT CREATED===" << endl;
        cout << "Agent initials: " << nombre << apellidop << apellidom << endl;
        cout << "Infiltration time: " << hora << ":" << minutos << ":" << segundos << endl;
        cout << "Status: READY FOR DEPLOYMENT" << endl;

    }

    else
    {
        cout << "Invalid option. Acces denied." << endl;
    }

    return 0;
}
