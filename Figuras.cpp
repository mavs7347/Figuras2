#include <iostream>
using namespace std;

class Cuadrado {
    private:
        int tipo;
        int alto;
        int largo;
    public:
        Cuadrado(int type) {
            tipo = type;
        }
        void setDimensiones(int height, int large) {
        	alto = height;
            largo = large;
        }
        int getAlto() {
        	if (alto >= 2)
        	{
        		return alto;
        	}
        	else
        	{
        		cout << "Numero invalido" << endl;
                return 2;
        	}
        }
        int getLargo() {
        	if (largo >= 2)
        	{
        		return largo;
        	}
        	else
        	{
        		cout << "Numero invalido" << endl;
                return 2;
        	}
        }
        void generarCuadrado ();
};
void Cuadrado::generarCuadrado() {
    for (int c = 0; c < alto; c++)
    {
        for (int i = 0; i < largo; i++)
        {
            if (tipo == 1)
            {
                cout << "* ";
            }
            else
            {
                if ((c == 0 || i == 0) || (c == (alto-1)) || (i == (largo-1)))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}


class Triangulo
{
    private:
        int tipo;
        int alto;
    public:
        Triangulo(int type) {
            tipo = type;
        }
        void setAlto(int height) {
            alto = height;
        }
        int getAlto() {
            if (alto >= 2)
            {
                return alto;
            }
            else
            {
                cout << "Numero invalido" << endl;
                return 2;
            }
        }
        void generarTriangulo();
};
void Triangulo::generarTriangulo() {
    int aux = alto - 1;
    for (int c = 1; c <= alto; c++)
    {
        for (int n = 0; n < aux; n++)
        {
            cout << " ";
        }
        aux -= 1;
        for (int i = 0; i < c; i++)
        {
            if (tipo == 1)
            {
                cout << "* ";
            }
            else
            {
                if ((i == 0) || (c == alto) || (i == (c-1)))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }       
        cout << endl;
    }
}

class Circulo
{
    private:
        int tipo;
        int diametro;
    public:
        Circulo(int type) {
            tipo = type;
        }
        void setDiametro(int diameter) {
            diametro = diameter;
        }
        int getDiametro() {
            if (diametro >= 3)
            {
                return diametro;
            }
            else
            {
                cout << "Numero invalido" << endl;
                return 7;
            }
        }
        void generarCirculo();
};
void Circulo::generarCirculo() {

    int aux = diametro;
    for (int c = 1; c < diametro; c+=2)
    {
        for (int n = 1; n < aux; n++)
        {
            cout << " ";
        }
        aux -= 2;
        for (int i = 0; i <= (c+1); i++)
        {
            if (tipo == 1)
            {
                cout << "* ";
            }
            else
            {
                if ((c == 1) || (i == 0 || i == (c+1)))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                    
                }
            }
        }
        cout << endl;
    }

    aux = 2;
    for (int c = 1; c < diametro; c+=2)
    {
        for (int n = 0; n < aux; n++)
        {
            cout << " ";
        }
        aux += 2;
        for (int i = diametro; i > (c-1); i--)
        {
            if (tipo == 1)
            {
                cout << "* ";
            }
            else
            {
                if ((i == diametro) || (i == c) || (c == (diametro-2)))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                    
                }
            }
        }
        cout << endl;
    }
}

void Clear() {
    cout << "\x1B[2J\x1B[H";
}

int main()
{
	int opc = 1;
	do {
		cout << "Elige la figura:" << endl;
		cout << "1.- Cuadrado." << endl;
		cout << "2.- Triangulo." << endl;
		cout << "3.- Circulo." << endl;
		cin >> opc;
        Clear();

        if (opc == 1)
        {
            Cuadrado c = Cuadrado(2);
            c.setDimensiones(3, 4);
            cout << "X = " << c.getAlto() << endl;
            cout << "Y = " << c.getLargo() << endl;
            c.generarCuadrado();
        }
        else if (opc == 2)
        {
            Triangulo t = Triangulo(2);
            t.setAlto(7);
            cout << "X = " << t.getAlto() << endl;
            cout << "Y = " << t.getAlto() << endl;
            t.generarTriangulo();
        }
        else if (opc == 3)
        {
            Circulo z = Circulo (2);
            z.setDiametro(7);
            cout << "Diametro = " << z.getDiametro() << endl;
            z.generarCirculo();
        }
        else
        {
            cout << "Lo sentimos, la opcion no existe" << endl;
        }
        
		cout << "\nRepetir programa:";
		cout << "\n1.- Si"
		        "\n2.- No" << endl;
        cin >> opc;
        Clear();
	} while (opc == 1);

    return 0;
}