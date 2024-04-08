#include <iostream>
#include <string.h>

struct Nodo {
  int dato;
  Nodo *siguiente;
};

Nodo *nuevoNodo(int valor) {
  Nodo *nuevo = new Nodo;
  nuevo->dato = valor;
  nuevo->siguiente = nullptr;

  return nuevo;
}

int colaVacia(Nodo *primero) {
  std::cout << (primero != nullptr ? "La cola no esta vacia" : "La cola esta vacia") << '\n';

  return primero == nullptr ? 1 : 0;
}
void insertartAlFinal(Nodo *&primero, Nodo *&ultimo, Nodo *n) {
  if (primero == nullptr) {
    primero = n;
    ultimo = n;
    return;
  }
  ultimo->siguiente = n;
  ultimo = n;
  return;
}

void imprimirCola(Nodo *primero) {
  Nodo *aux = primero;
  if (colaVacia(primero))
    return;

  std::cout << '\n'
            << "La lista es: " << '\n';
  while (aux != nullptr) {
    std::cout << aux->dato << '\n';
    aux = aux->siguiente;
  }
}

void imprimirPrimerElemento(Nodo *primero) {
  if (colaVacia(primero)) {
    return;
  }
  std::cout << '\n'
            << "Primer elemento de la cola: " << '\n';

  std::cout << primero->dato << '\n';
}
void imprimirUltimoElemento(Nodo *ultimo) {
  if (colaVacia(ultimo)) {
    return;
  }
  std::cout << '\n'
            << "Ultimo elemento de la cola: " << '\n';

  std::cout << ultimo->dato << '\n';
}

int sacarPrimerElemento(Nodo *&inicio) {
  if (inicio == nullptr)
    return -1;

  Nodo *aux = inicio;
  int valor = aux->dato;

  inicio = inicio->siguiente;
  delete aux;

  return valor;
}
int contarElementosLista(Nodo *inicio) {
  if (inicio == nullptr)
    return 0;

  int i = 0;
  while (inicio != nullptr) {
    i++;
    inicio = inicio->siguiente;
  }

  return i;
}