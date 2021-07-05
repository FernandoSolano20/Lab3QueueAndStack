#include <iostream>
#include "structures/List.h"
#include "Controller/Controller.h"

void popList(List* list){
    cout << "Valores: " << endl;
    for (int i = 0; i < list->getSize(); ++i) {
        cout << list->pop() << endl;
    }
}

int readNumber(){
    int num;
    cout << "Digite un numero" << endl;
    cin >> num;
    return num;
}

int main() {
    Controller* controller = new Controller();
    int opc = 0;
    int num = 0;
    do {
        cout << "Digite lo que desea hacer" << endl;
        cout << "1- Agregar a cola" << endl;
        cout << "2- Agregar a pila" << endl;
        cout << "3- Pasar toda la cola a la pila" << endl;
        cout << "4- Pasar toda la pila a la cola" << endl;
        cout << "5- Pasar un element de cola a pila" << endl;
        cout << "6- Pasar un element de pila a cola" << endl;
        cout << "7- Mostrar pila" << endl;
        cout << "8- Mostrar cola" << endl;
        cout << "9- Salir" << endl;
        cin >> opc;
        switch (opc) {
            case 1:
                num = readNumber();
                controller->addToQueue(num);
                break;
            case 2:
                num = readNumber();
                controller->addToStack(num);
                break;
            case 3:
                controller->QueueToStack();
                break;
            case 4:
                controller->StackToQueue();
                break;
            case 5:
                controller->oneElementQueueToStack();
                break;
            case 6:
                controller->oneElementStackToQueue();
                break;
            case 7:
                popList(controller->getStack());
                break;
            case 8:
                popList(controller->getQueue());
                break;
            case 9:
                cout << "Gracias" << endl;
                break;
        }
    } while (opc != 9);

    return 0;
}
