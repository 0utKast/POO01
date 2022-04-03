
#if 0
#include <iostream>

std::string jugador;
std::string destino;

void conducirA(std::string jugador, std::string destino) {

    //hacer algo

}

int main()
{
    
    std::string jugador {"Marc"};
    std::string destino{ "Meta" };

    conducirA(jugador, destino);

    
}


#include <iostream>
class Conducir {       // la clase
public:               // especificador de Acceso
    std::string jugador;  // Atributo (variable miembro)
    std::string destino;  // Atributo (variable miembro)

    void conducirA(std::string jugador, std::string destino) //Acción (función miembro)
    {
        //hacer algo
    }
};

int main()
{
    Conducir conducir; //Creamos objeto del tipo Conducir

    conducir.conducirA(conducir.jugador, conducir.destino);
}
#endif



struct StructFecha
{
    int dia{};
    int mes{};
    int anho{};
};

StructFecha hoy { 02, 04, 2022 }; // usa inicialización uniforme





#include <iostream>

struct StructFecha
{
    int dia{};
    int mes{};
    int anho{};
};



class ClaseFecha
{
public:
    int m_dia{};
    int m_mes{};
    int m_anho{};
};


StructFecha hoy{ 02, 04, 2022 }; // declara una variable de tipo structFecha


ClaseFecha hoy{ 02, 04, 2022 }; // declara una variable de tipo claseFecha




#include <iostream>
class ClaseFecha
{
public:
    int m_dia{};
    int m_mes{};
    int m_anho{};
};

void imprimir (const ClaseFecha& fecha)
{
    std::cout << fecha.m_dia << '/' << fecha.m_mes << '/' << fecha.m_anho;
}

int main()
{
    ClaseFecha hoy{ 01, 04, 2022 }; // usa inicialización uniforme
    

    hoy.m_dia = 02; // usa el operador de selección de miembro (el punto) 
                  //para seleccionar un miembro de la struct
    imprimir(hoy);

    return 0;
}





#include <iostream>
class ClaseFecha
{
public:
    int m_dia{};
    int m_mes{};
    int m_anho{};

    void imprimir() // define una función miembro llamada imprimir()
    {
        std::cout << m_dia << '/' << m_mes << '/' << m_anho;
    }
};



int main()
{
    ClaseFecha hoy{ 02, 04, 2022 };

    hoy.m_dia = 03; // usamos el operador de selección de miembro 
                    //para seleccionar una variable miembro de la clase
	
    hoy.imprimir(); // usamos el operador de selección de miembro
                    //para llamar a una función miembro de la clase

    return 0;
}






