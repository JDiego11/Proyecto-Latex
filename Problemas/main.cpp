#include <iostream>

using namespace std;

int main()
{
    int a, dia, mes, res1=0, res2=1, res3=0, suma=0, divi=0, cont=0;
    char letra, z;
    bool stop=false;

    cout << "Ingrese el numero del problema: ";
    cin >> a;

    switch (a) {
    case 1:
        cout << "Problema 1" << endl;

        cout << "Ingresa una letra:" << endl;
        cin >> letra;

        if (isalpha(letra)) {
            z = char (tolower(letra));
            if (z=='a' || z=='e' || z=='i' || z=='o' || z=='u') {
                cout << letra << " es una vocal" << endl;
            }
            else {
                cout << letra << " es una consonante" << endl;
            }
        }
        else {
            cout << "NO es una letra." << endl;
        }
    break;

    case 2:
    break;

    case 3:
        cout << "Problema 3" << endl;

        cout << "Ingrese mes y dia:" << endl;
        cin >> mes;
        cin >> dia;

        if (dia>=1 && dia<=31 && mes>=1 && mes <= 12) {
            if (mes==2) {
                if (dia<=28) cout << mes << "/" << dia << " es una fecha valida" << endl;
                else if (dia==29) cout << mes << "/" << dia << " es una fecha valida para bisiesto" << endl;
                else cout << mes << "/" << dia << " es una fecha invalida" << endl;
            }
            else if (mes<=7) {
                if (mes%2==1) cout << mes << "/" << dia << " es una fecha valida" << endl;
                else if (dia<=30) cout << mes << "/" << dia << " es una fecha valida" << endl;
                else cout << mes << "/" << dia << " es una fecha invalida" << endl;
            }
            else {
                if (mes%2==0) cout << mes << "/" << dia << " es una fecha valida" << endl;
                else if (dia<=30) cout << mes << "/" << dia << " es una fecha valida" << endl;
                else cout << mes << "/" << dia << " es una fecha invalida" << endl;
            }
        }
        else {
            cout << mes << "/" << dia << " es una fecha invalida" << endl;
        }
    break;

    case 4:
    break;

    case 5:
        cout << "Problema 5" << endl;

        cout << "Ingrese un numero para determinar el tama" << char(164) << "o de la figura: " << endl;
        cin >> a;

        for (int i=1; i<=a; i++) {
            for (int j=1; j<=a; j++) {
                if (j<(a+1)/2+(i-1) && j>(a+1)/2-(i-1) && i<(a+1)/2+(j-1) && i>(a+1)/2-(j-1)) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    break;

    case 6:
    break;

    case 7:
        cout << "Problema 7" << endl;

        cout << "Ingrese un numero N:" << endl;
        cin >> a;

        do {
            if (res2%2==0) {
                suma += res2;
            }
            res2 += res1;
            res1 = res2-res1;
        }
        while (res2<=a);
        cout << "El resultado de la suma es: " << suma << endl;
    break;

    case 8:
    break;

    case 9:
        cout << "Problema 9" << endl;

        cout << "Ingrese un numero N:" << endl;
        cin >> a;

        while (a>0) {
            while (stop==false) {
                res2 *= a%10;
                res1 += 1;
                if (res1 >= a%10) {
                    stop = true;
                }
            }
            suma += res2;
            a /= 10;
            res2 = 1;
            stop = false;
            res1 = 0;
        }
        cout << "El resultado de la suma es: " << suma << endl;
    break;

    case 10:
    break;

    case 11:
        cout << "Problema 11" << endl;
        res2 = 0;

        cout << "Ingrese un numero N:" << endl;
        cin >> a;

        /*******************************************************************
        Profe, despues del 16 el programa no imprime nada,
        supongo que es porque se toma demasiado tiempo en terminar :c...
        Cuando lo terminé probé sumando la cantidad de iteraciones que hace
        y me di cuenta que con el número 16 hace: 1.175'172.489 iteraciones,
        o sea, What The F***.
        *******************************************************************/

        for (int i=1; stop==false; i++) {
            res1 = a*i;
            for (int j=1; res2<res1; j++) {
                res2 = (a-cont)*j;
                if (res2==res1) {
                    res3 = res2;
                    res2 = 0;
                    j = 0;
                    cont +=1;
                }
                if (res3==res1 && a-cont==1) {
                    stop =true;
                    break;
                }
            }
            cont = 1;
        }
        cout << "El MCM de todos los numeros entre 1 y " << a << " es: " << res1 << endl;
    break;

    case 12:
    break;

    case 13:
        cout << "Problema 13" << endl;
        res2 = 0;

        cout << "Ingrese un numero N:" << endl;
        cin >> a;

        for (int i=a; i>=1; i--) {
            for (int j=2; j<=i; j++) {
                res1 = i%j;
                if (res1==0 && j!=i) {
                    break;
                }
                if (j==i) {
                    res2 += i;
                }
            }
        }
        cout << res2 << endl;
    break;

    case 14:
    break;

    case 15:
        cout << "Problema 15" << endl;
    break;

    case 16:
    break;

    case 17:
        cout << "Problema 17" << endl;

        cout << "Ingrese un numero N:" << endl;
        cin >> a;

        for (int i=1; stop==false; i++) {
            res1 = i*(i+1)/2;
            for (int j=1; j<=res1; j++) {
                res2 = res1 % j;
                if (res2==0) {
                    divi += 1;
                }
            }
            if (divi > a) {
                stop = true;
            }
            else {
                divi = 0;
            }
        }
        cout << "El numero es: " << res1 << " que tiene " << divi << " divisores." << endl;
    break;
    }
}
