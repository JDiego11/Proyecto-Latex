#include <iostream>

using namespace std;

int main()
{
    int a, b, res=0, res2=0, start=0, end=100;
    double c, d, pi=3.1416;
    bool stop = false;
    char e;
    string f;

    cout << "Ingrese el numero del ejercicio: ";
    cin >> a;

    switch (a) {
        case 1:
        cout << "Ejercicio 1" << endl;

        cout << "Ingrese un numero a y despues un numero b:" << endl;
        cin >> a;
        cin >> b;
        cout << "El el residuo de la divison " << a << "/" << b << " es: " << a%b << endl;

        break;

        case 2:
        break;

        case 3:
        cout << "Ejercicio 3" << endl;

        cout << "Ingrese un numero a y despues un numero b:" << endl;
        cin >> a;
        cin >> b;
        if (a>b) {
            cout << "El mayor es: " << a << endl;
        }
        else if (a<b) {
            cout << "El mayor es: " << b << endl;
        }
        else {
            cout << "Los numeros son iguales '" << a << " = " << b << "'." << endl;
        }
        break;

        case 4:
        break;

        case 5:
        cout << "Ejercicio 5" << endl;

        cout << "Ingrese un numero a y despues un numero b:" << endl;
        cin >> c;
        cin >> d;

        if ((c/d - int(c/d)) >= double (0.5)){
            cout << c << "/" << d << "=" << int (c/d) + 1 << endl;
        }
        else {
            cout << c << "/" << d << "=" << int (c/d) << endl;
        }

        break;

        case 6:
        break;

        case 7:
        cout << "Ejercicio 7" << endl;

        cout << "Ingrese un numero N: ";
        cin >> a;

        for (int i = 0; i <= a; i++){
            res += i;
        }
        cout << "La sumatoria desde 0 hasta " << a << " es: " << res << endl;
        break;

        case 8:
        break;

        case 9:
        cout << "Ejercicio 9" << endl;

        cout << "Ingrese un numero N correspondiente al radio de un circulo: " << endl;
        cin >> c;

        cout << "Perimetro: " << 2.0*pi*c << endl;
        cout << "Area: " << pi*c*c << endl;
        break;

        case 10:
        break;

        case 11:
        cout << "Ejercicio 11" << endl;

        cout << "Ingrese un numero N: " << endl;
        cin >> a;

        for (int i=1; i<=10; i++){
            cout << i << "x" << a << "=" << i*a << endl;
        }
        break;

        case 12:
        break;

        case 13:
        cout << "Ejercicio 13" << endl;

        cout << "Ingrese un numero N: " << endl;
        cin >> a;

        for (int i=1; i<=a; i++){
            if (a%i==0) {
                cout << i << endl;
            }
        }
        break;

        case 14:
        break;

        case 15:
        cout << "Ejercicio 15" << endl;

        do {
            cout << "Ingrese un numero: ";
            cin >> a;
            res += a;
            if (a==0) {
                stop = true;
            }
        }
        while (stop == false);
        cout << "El resultado de la sumatoria es: " << res << endl;
        break;

        case 16:
        break;

        case 17:
        cout << "Ejercicio 17" << endl;

        do {
            cout << "Ingrese un numero: ";
            cin >> a;
            if (a > res) {
                res = a;
            }
            if (a==0) {
                stop = true;
            }
        }
        while (stop == false);
        cout << "El numero mayor fue: " << res << endl;
        break;

        case 18:
        break;

        case 19:
        cout << "Ejercicio 9" << endl;

        cout << "Ingrese un numero N: ";
        cin >> a;

        for (int i=2; i<=a; i++) {
            res = a%i;
            if (res==0 && i!=a) {
                cout << a << " NO es un numero primo." << endl;
                break;
            }
            if (i==a) {
                cout << a << " es un numero primo." << endl;
            }
        }
        break;

        case 20:
        break;

        case 21:
        cout << "Ejercicio 21" << endl;

        cout << "Ingrese una letra:" << endl;
        cin >> e;

        if (islower(e)) {
            cout << "Letra convertida: " << char (toupper(e)) << endl;
        }
        else {
            cout << "Letra convertida: " << char (tolower(e)) << endl;
        }
        break;

        case 22:
        break;

        case 23:
        cout << "Ejercicio 23" << endl;

        cout << "Ingrese un numero A y luego un numero B: " << endl;
        cin >> a;
        cin >> b;

        for (int i=1; stop==false; i++) {
            res = a*i;
            for (int j=1; res2<=res; j++) {
                res2 = b*j;
                if (res == res2) {
                    stop = true;
                }
            }
        }
        cout << "El MCM de " << a << " y " << b << " es: " << res << endl;
        break;

        case 24:
        break;

        case 25:
        cout << "Ejercicio 25" << endl;

        cout << "Ingrese un numero N: " << endl;
        cin >> f;
        cout << f.length() << endl;
        break;

        case 26:
        break;

        case 27:
        cout << "Ejercicio 27" << endl;

        cout << "Ingrese un numero: ";
        cin >> a;
        cout << "Ingrese '+' para sumar, '-' para restar, '*' para multiplicar o '/' para dividir: ";
        cin >> f;
        cout << "Ingrese otro numero: ";
        cin >> b;

        if (f=="+") {
            cout << a << "+" << b << "=" << a+b << endl;
        }
        else if (f=="-") {
            cout << a << "-" << b << "=" << a-b << endl;
        }
        else if (f=="*") {
            cout << a << "x" << b << "=" << a*b << endl;
        }
        else if (f=="/") {
            cout << a << "/" << b << "=" << a/b << endl;
        }
        break;

        case 28:
        break;

        case 29:
        cout << "Ejercicio 29" << endl;

        do {
            a = rand()%(end-start+1)+start;

            cout << "ingrese '<' si el numero pensado es menor." << endl;
            cout << "ingrese '>' si el numero pensado es mayor." << endl;
            cout << "ingrese '=' si el numero pensado es el que esta en pantalla." << endl << endl;

            cout << a << endl;
            cin >> f;

            if (f=="<") {
                end = a;
            }
            else if (f==">") {
                start = a;
            }
            else {
                stop = true;
            }
        }
        while (stop==false);
        cout << "Tu numero pensado es: " << a << endl;
        break;

        case 30:
        break;
    }
}
