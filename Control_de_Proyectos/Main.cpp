# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
# include "TDA.h"


using namespace std;


class Main {

public:
    string usuario, password;

    void menu_login() {

        cout << "                                            " << endl;
        cout << "                                            " << endl;
        cout << "*************  EDD  ProjectUp  *************" << endl;
        cout << "                                            " << endl;
        cout << " --> Usuario: ";
        cin >> usuario;
        cout << " --> Password: ";
        cin >> password;

        if (usuario == "PM-201602987" && password == "clave") {

            cout << "                " << endl;
            cout << "Usuario correcto" << endl;
            menu_administrador();
        }
        else {

            cout << "                  " << endl;
            cout << "Usuario incorrecto" << endl;
            menu_login();
        }
    }

    int menu_administrador() {

        int opcion;

        while (true) {
            
            cout << "                                            " << endl;
            cout << "                                            " << endl;
            cout << "*************  EDD  ProjectUp  *************" << endl;
            cout << "                                            " << endl;
            cout << "+-------- Bienvenido  " << usuario << " --------+" << endl;
            cout << "|                                          |" << endl;
            cout << "|   1) Cargar Empleados                    |" << endl;
            cout << "|   2) Crear Proyecto                      |" << endl;
            cout << "|   3) Crear Tareas                        |" << endl;
            cout << "|   4) Asignar Tareas                      |" << endl;
            cout << "|   5) Finalizar Programa                  |" << endl;
            cout << "|                                          |" << endl;
            cout << "+------------------------------------------+" << endl;
            cout << "                                            " << endl;

            cout << " --> Ingrese una opcion: ";
            cin >> opcion;

            switch (opcion) {

                case 1:
                    cargar_empleados();
                    break;
                case 2:
                    crear_proyecto();
                    break;
                case 3:
                    crear_tareas();
                    break;
                case 4:
                    asignar_tareas();
                    break;
                case 5:
                    cout << "                        " << endl;
                    cout << " --> Programa finalizado" << endl;
                    cout << "                        " << endl;
                    return 0;
                default:
                    cout << "                     " << endl;
                    cout << " --> Opcion no valida" << endl;
                    cout << "                     " << endl;
                    break;
            }
        }
    }

    void cargar_empleados() {

        int opcion;

        while (true) {
            
            cout << "                                            " << endl;
            cout << "                                            " << endl;
            cout << "*************  EDD  ProjectUp  *************" << endl;
            cout << "                                            " << endl;
            cout << "+--------  Menu  Carga  Empleados  --------+" << endl;
            cout << "|                                          |" << endl;
            cout << "|   1) Carga Manual                        |" << endl;
            cout << "|   2) Carga Masiva                        |" << endl;
            cout << "|   3) Finalizar                           |" << endl;
            cout << "|                                          |" << endl;
            cout << "+------------------------------------------+" << endl;
            cout << "                                            " << endl;

            cout << " --> Ingrese una opcion: ";
            cin >> opcion;

            switch (opcion) {

                case 1:
                    carga_manual();
                    break;
                case 2:
                    carga_masiva();
                    break;
                case 3:
                    menu_administrador();
                    break;
                default:
                    cout << "                     " << endl;
                    cout << " --> Opcion no valida" << endl;
                    cout << "                     " << endl;
                    break;
            }
        }
    }

    void crear_proyecto() {

    }

    void crear_tareas() {

    }

    void asignar_tareas() {

    }

    void carga_manual() {

        string nombre, contraseña, puesto;

        cout << "                        " << endl;
        cout << " --> Ingrese un nombre: ";
        cin.ignore();
        getline(cin, nombre);
        cout << " --> Ingrese una contraseña: ";
        cin >> contraseña;
        cout << "                                          " << endl;
        cout << "+--------  Puestos  Disponibles  --------+" << endl;
        cout << "|                                        |" << endl;
        cout << "|   1) Developer Frontend                |" << endl;
        cout << "|   2) Developer Backend                 |" << endl;
        cout << "|   3) Quality Assutance                 |" << endl;
        cout << "|                                        |" << endl;
        cout << "+----------------------------------------+" << endl;
        cout << "                                          " << endl;
        cout << " --> Ingrese una opcion: ";
        cin >> puesto;
        cout << "                               " << endl;
        cout << "Empleado ingresado exitosamente" << endl;
        cargar_empleados();
    }

    void carga_masiva() {

        ifstream file("entrada.csv");
        string line;

        while (getline(file, line)) {

            stringstream ss{line};
            string data;

            while (getline(ss, data, ',')) {

                cout << data << "\n";
            }
        }
    }
};


int main() {

    Main app;
    app.menu_login();

    return 0;
}
