#include "lib.cc"
#include <iostream>

int main() {
  int valor;
  Nodo *primero = nullptr;
  Nodo *ultimo = nullptr;
  Nodo *nuevo;
  int opc = 0;

  do {
    std::cout << '\n'
              << "Trabajando con colas" << '\n'
              << '\n';
    std::cout << "1.- Insertar elemento en cola" << '\n';
    std::cout << "2.- Sacar primer elemento de cola" << '\n';
    std::cout << "3.- Mostrar primer elemento de la cola" << '\n';
    std::cout << "4.- Mostrar ultimo elemento de la cola" << '\n';
    std::cout << "5.- Cola vacia?" << '\n';
    std::cout << "6.- Imprimir cola" << '\n';
    std::cout << "7.- Contar elementos de la cola" << '\n';
    std::cout << "15.- Salir" << '\n';

    std::cin >> opc;

    switch (opc) {

    case 1:
      std::cout << "Escribe un valor: ";
      std::cin >> valor;

      nuevo = nuevoNodo(valor);
      insertartAlFinal(primero, ultimo, nuevo);

      std::cout << '\n'
                << "Dato insertado" << '\n';
      break;
    case 2:
      valor = sacarPrimerElemento(primero);

      std::cout << '\n'
                << "Elemento retirado: " << valor;
      imprimirCola(primero);
      break;
    case 3:
      imprimirPrimerElemento(primero);
      break;
    case 4:
      imprimirUltimoElemento(ultimo);
      break;
    case 5:
      colaVacia(primero);
      break;
    case 6:
      imprimirCola(primero);
      break;
    case 7:
      valor = contarElementosLista(primero);
      valor != 0 ? (std::cout << "Los numeros de elementos son: " << valor << '\n') : std::cout << "La lista esta vacia" << '\n';
      break;

    default:
      std::cout << "Ingreso una opcion incorrecta";
      break;
    }
  } while (opc != 15);

  return 0;
}