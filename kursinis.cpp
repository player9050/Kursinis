#include <iostream>
#include <random>

using namespace std;

//Klase atsakinga uz pasirinkimo ivedima, tikrinima ar tas
//langelis dar neuzimtas ir UI spausdinima
class Checking
{
private:
    int pasirinkimas = 0;
public:
    int t = 1;
    char a[10];
    Checking(char lentele[10])
    {
        for (int i = 1; i < 10; i++)
        {
            a[i] = lentele[i];
        }
    }
    int input()
    {
        cout << "\n\tIveskite langelio, kuri keisite, skaiciu:" << endl;
        cin >> pasirinkimas;
        return pasirinkimas;
    }
    void inputChecking()
    {
        input();
        if (pasirinkimas == 1 && a[1] == '1')
        {
            a[1] = 'X';
        }
        else if (pasirinkimas == 2 && a[2] == '2')
            a[2] = 'X';

        else if (pasirinkimas == 3 && a[3] == '3')
            a[3] = 'X';

        else if (pasirinkimas == 4 && a[4] == '4')
            a[4] = 'X';

        else if (pasirinkimas == 5 && a[5] == '5')
            a[5] = 'X';

        else if (pasirinkimas == 6 && a[6] == '6')
            a[6] = 'X';

        else if (pasirinkimas == 7 && a[7] == '7')
            a[7] = 'X';

        else if (pasirinkimas == 8 && a[8] == '8')
            a[8] = 'X';

        else if (pasirinkimas == 9 && a[9] == '9')
            a[9] = 'X';

        else
            t = 0;
    }
    int getError()
    {
        return t;
    }
    char* getMas() 
    {
        return a;
    }
    void table() //UI
    {
        cout << "\n\n\tKryziukai Nuliukai\n\n";
        cout << endl;
        cout << "\n\tKompiuteris - O   Jus - X\n\n" << endl;
        cout << "\t     |     |     " << endl;
        cout << "\t  " << a[1] << "  |  " << a[2] << "  |  " << a[3] << endl;
        cout << "\t_____|_____|_____" << endl;
        cout << "\t     |     |     " << endl;
        cout << "\t  " << a[4] << "  |  " << a[5] << "  |  " << a[6] << endl;
        cout << "\t_____|_____|_____" << endl;
        cout << "\t     |     |     " << endl;
        cout << "\t  " << a[7] << "  |  " << a[8] << "  |  " << a[9] << endl;
        cout << "\t     |     |     \n" << endl << endl;
    }

};

//Klase, atsakinga uz kompiuterio ejima ir jo logika
class Algoritmas
{
public:
    char b[10];
    Algoritmas(char lentele[10])
    {
        for (int i = 1; i < 10; i++)
        {
            b[i] = lentele[i];
        }
    }
    ~Algoritmas()   //destruktorius, skirtas pirmam ejimui
    {
        int z = 5;
        char x = 0;
        while (z == 5)
        {
            z = rand() % 10; //jie 5-as langelis uzimtas, paimamas atsitiktinis kitas
        }
        if (z == 1)
            x = '1';
        if (z == 2) 
            x = '2';
        if (z == 3) 
            x = '3';
        if (z == 4) 
            x = '4';
        if (z == 5) 
            x = '5';
        if (z == 6) 
            x = '6';
        if (z == 7) 
            x = '7';
        if (z == 8) 
            x = '8';
        if (z == 9)
            x = '9';
        if (b[5] == '5')
            b[5] = 'O';
        else if (b[z] == x)
            b[z] = 'O';
    }
    void restMoves() //like ejimai
    {
        if (b[1] == b[3] && (b[2] != 'X') && (b[2] != 'O'))
            b[2] = 'O';
        else if (b[1] == b[7] && (b[4] != 'X') && (b[4] != 'O'))
            b[4] = 'O';
        else if (b[1] == b[9] && (b[5] != 'X') && (b[5] != 'O'))
            b[5] = 'O';
        else if (b[1] == b[2] && (b[3] != 'X') && (b[3] != 'O'))
            b[3] = 'O';
        else if (b[1] == b[4] && (b[7] != 'X') && (b[7] != 'O'))
            b[7] = 'O';
        else if (b[1] == b[5] && (b[9] != 'X') && (b[9] != 'O'))
            b[9] = 'O';
        else if (b[2] == b[3] && (b[1] != 'X') && (b[1] != 'O'))
            b[1] = 'O';
        else if (b[2] == b[5] && (b[8] != 'X') && (b[8] != 'O'))
            b[8] = 'O';
        else if (b[2] == b[8] && (b[5] != 'X') && (b[5] != 'O'))
            b[5] = 'O';
        else if (b[3] == b[6] && (b[9] != 'X') && (b[9] != 'O'))
            b[9] = 'O';
        else if (b[3] == b[9] && (b[6] != 'X') && (b[6] != 'O'))
            b[6] = 'O';
        else if (b[3] == b[7] && (b[5] != 'X') && (b[5] != 'O'))
            b[5] = 'O';
        else if (b[3] == b[5] && (b[7] != 'X') && (b[7] != 'O'))
            b[7] = 'O';
        else if (b[4] == b[5] && (b[6] != 'X') && (b[6] != 'O'))
            b[6] = 'O';
        else if (b[4] == b[6] && (b[5] != 'X') && (b[5] != 'O'))
            b[5] = 'O';
        else if (b[4] == b[7] && (b[1] != 'X') && (b[1] != 'O'))
            b[1] = 'O';
        else if (b[5] == b[6] && (b[4] != 'X') && (b[4] != 'O'))
            b[4] = 'O';
        else if (b[5] == b[8] && (b[2] != 'X') && (b[2] != 'O'))
            b[2] = 'O';
        else if (b[5] == b[9] && (b[1] != 'X') && (b[1] != 'O'))
            b[1] = 'O';
        else if (b[5] == b[4] && (b[6] != 'X') && (b[6] != 'O'))
            b[6] = 'O';
        else if (b[5] == b[2] && (b[2] != 'X') && (b[2] != 'O'))
            b[2] = 'O';
        else if (b[7] == b[8] && (b[9] != 'X') && (b[9] != 'O'))
            b[9] = '0';
        else if (b[7] == b[9] && (b[8] != 'X') && (b[8] != 'O'))
            b[8] = '0';
        else if (b[8] == b[9] && (b[7] != 'X') && (b[7] != 'O'))
            b[7] = '0';
        else
        {
            int z = 5;
            char x = 0;
            while (z == 5)
            {
                z = rand() % 10; //jei niekas netenkina salygos, imamas atsitiktinis langelis
            }
            if (z == 1)
                x = '1';
            if (z == 2)
                x = '2';
            if (z == 3)
                x = '3';
            if (z == 4)
                x = '4';
            if (z == 5)
                x = '5';
            if (z == 6)
                x = '6';
            if (z == 7)
                x = '7';
            if (z == 8)
                x = '8';
            if (z == 9)
                x = '9';
            if (b[5] == '5')
                b[5] = 'O';
            else if (b[z] == x)
                b[z] = 'O';
        }
    }
    char* getMas2()
    {
        return b; //grazinamas masyvas po viena reiksme
    }
};

//Klase, kuri tikrina, ar zaidimas turetu buti tesiamas
class checkWin
{
public:
    char a[10];
    checkWin (char lentele[10])
    {
        for (int i = 1; i < 10; i++)
        {
            a[i] = lentele[i]; //lentele[i] pervadinama i a[i]
        }
    }
    int check() //funkcija, tikrinanti ar kazkas laimejo
    {
        if (a[1] == a[2] && a[2] == a[3] && a[1] == 'X')
        return 1;

    else if (a[4] == a[5] && a[5] == a[6] && a[4] == 'X')
        return 1;

    else if (a[7] == a[8] && a[8] == a[9] && a[7] == 'X')
        return 1;

    else if (a[1] == a[4] && a[4] == a[7] && a[1] == 'X')
        return 1;

    else if (a[2] == a[5] && a[5] == a[8] && a[2] == 'X')
        return 1;

    else if (a[3] == a[6] && a[6] == a[9] && a[3] == 'X')
        return 1;

    else if (a[1] == a[5] && a[5] == a[9] && a[1] == 'X')
        return 1;

    else if (a[3] == a[5] && a[5] == a[7] && a[3] == 'X')
        return 1;

    else if (a[1] == a[2] && a[2] == a[3] && a[1] == 'O')
            return 2;

    else if (a[4] == a[5] && a[5] == a[6] && a[4] == 'O')
            return 2;

    else if (a[7] == a[8] && a[8] == a[9] && a[7] == 'O')
            return 2;

    else if (a[1] == a[4] && a[4] == a[7] && a[1] == 'O')
            return 2;

    else if (a[2] == a[5] && a[5] == a[8] && a[2] == 'O')
            return 2;

    else if (a[3] == a[6] && a[6] == a[9] && a[3] == 'O')
            return 2;

    else if (a[1] == a[5] && a[5] == a[9] && a[1] == 'O')
            return 2;

    else if (a[3] == a[5] && a[5] == a[7] && a[3] == 'O')
            return 2;

    else if (a[1] != '1' && a[2] != '2' && a[3] != '3'
                    && a[4] != '4' && a[5] != '5' && a[6] != '6'
                  && a[7] != '7' && a[8] != '8' && a[9] != '9')

        return 0;
    else
        return -1;
    }
};

int main()
{
    char lentele[10] = { 'o','1','2','3','4','5','6','7','8','9' };
    int k = 0;
    bool l = false;
    while (l == false)  //ciklas eina, kol zaidimas nera pasibaiges
    {
        Checking A(lentele);
        if (k == 0)     //pirma karta vykdant cikla lentele rodoma pradineje savo busenoje
            A.table();
        k++;    
        A.inputChecking(); //patikrinimas, ar vartotojas pasirinko galima ejimo varianta
        char* p;
        p = A.getMas();     //rodykliu pagalba susigrazinamas pakeistas masyvas (po vartotojo ivedimo)
        for (int i = 1; i < 10; i++)
        {
            lentele[i] = *(p + i);      //kadangi masyvas grazinamas po viena reiksme, tam naudoju for cikla
        }
        Algoritmas D(lentele);
        if (k == 1)
            D.~Algoritmas(); //algoritmo pirmas ejimas visada yra 5, taciau jei vartotojas sia vieta uzima pirmas, pasirenkama kita atsitiktine vieta lenteleje
        else
            D.restMoves(); //algoritmo like eijimai, surasyti su IF salygomis
        char* v;
        v = D.getMas2(); //po algoritmo ejimo duomenys vel sugrazinami su rodyklemis
        for (int i = 1; i < 10; i++)
        {
            lentele[i] = *(v + i);      //kadangi masyvas grazinamas po viena reiksme, tam naudoju for cikla
        }
        Checking F(lentele);
        if (A.getError() == 0) //jei vartotojas pasirinko neegzistuojanti arba jau uzimta langeli ismetamas pranesimas
            cout << "Klaidingas ejimas" << endl;
        else
        {
            system("cls"); //isvalomas ekranas
            F.table(); //piesiama lentele po vartotojo ir kompiuterio ejimu
            if (k > 2) //po dvieju ejimu pradedama tikrinti ar kazka laimejo
            {
                checkWin C(lentele);
                if (C.check() == 1)
                {
                    cout << "\n\n\tJus laimejote!!!\n\n";
                    l = true;
                }                                                       // 1 - laimi zaidejas
                else if (C.check() == 2)                                // 2 - laimi kompiuteris
                {                                                       // 0 - lygiosios
                    cout << "\n\n\tJus pralaimejote :(\n\n";            // -1 - tesiamas zaidimas
                    l = true;
                }
                else if (C.check() == 0)
                {
                    cout << "\n\n\tLygiosios!\n\n";
                    l = true;
                }
            }
        }
    }
	return 0;
}