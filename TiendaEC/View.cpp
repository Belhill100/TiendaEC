#include "View.h"

View::View()
{
}

void View::mostrarMenuReportes()
{
    int opcion = -1;
    do
    {

        cout << "Menu Reportes\n"
        cout << "1. Mostrar Productos por su cantidad\n";
        cout << "2. Mostrar Productos por su tipo \n";
        cout << "3. Mostrar ganacias obtenidas \n";
        cout << "4. Ver todos los productos de la tienda \n";
        cout << "5. Ver valor a pagar por IVA a la DIAN\n";
        cout << "0. Volver \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        // TODO completar
        switch (opcion){
        case 1:
            laFarra.mostrarProductCantidad();
            break;
        case 2:
            laFarra.mostrarProductTipo();
            break;
        case 3:
            break;
        case 4:
            laFarra.mostrarProductos();
            break;
        case 5:
            break;
        }

    } while (opcion != 0);
}

void View::mostrarMenu()
{
    int opcion = -1;
    do
    {

        cout << "Menu Tienda\n";
        cout << "1. Agregar Productos \n";
        cout << "2. Mostrar Productos \n";
        cout << "3. Vender \n";
        cout << "4. Mostrar Ventas \n";
        cout << "5. Reportes \n";
        cout << "0. Salir \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        switch (opcion)
        {

        case 1:
            laFarra.agregarProducto();
            break;
        case 2:
            laFarra.mostrarProductos();
            break;

        case 3:
            laFarra.vender();
            break;

        case 4:
            laFarra.mostrarFacturas();
            break;

        case 5:
            mostrarMenuReportes();
            break;
        }

    } while (opcion != 0);
}