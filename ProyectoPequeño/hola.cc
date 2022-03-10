#include <iostream>
#include <fstream>
#include <vector>
#include <string.h>
#include <stdlib.h>

using namespace std;
struct TStats{
    int dañoF;
    int dañoM;
    int hp;
    int velocidad;
    int defF;
    int defM;
};

struct THeroe{
    string name;
    TStats st;
};

struct TEnemigo{
    string name;
    TStats st;
};

enum TipoEnemigo{
    //ENEMIGOS ZONA 1 (Bosque Frondoso)
    SLIME,
    RENACIDO,
    ARBOL_VIVIENTE,
    BOLO_DE_BARRO,
    //ENEMIGOS ZONA 2 (Catacumbas)
    CADAVER,
    //ENEMIGOS ZONA 3 (CriptaRunica)
    PIROMANTICOS,
    MAGO_APRENDIZ, 
    //ENEMIGOS ZONA 4 (Monte Infestado)
    HOMBRE_TOPOS,
    //ENEMIGOS ZONA 5 (Antigua Ciudad bajo la Niebla)
    //ENEMIGOS ZONA 6 (Palacio Negro)
    //ENEMIGOS ZONA 7 (Pozo estrellado)
    //ENEMIGOS ZONA 8 (Lago Hundido)
    //ENEMIGOS ZONA 9 (Templo Olvidado)
    //ENEMIGOS ZONA 10 (Hogar de Dioses)
};


int main(){
    cout << "Hello" << endl;
    system("pause");
}