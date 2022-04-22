

#include <iostream>

int main()
{
    char resp = 's';
    while (resp == 's' || resp == 'S') {
        
        int incognita, a, b, c, respuesta, flag = 0; 

        std::cout << "--Teorema de Pitagoras---\n";
        std::cout << "Seleccion una incognita A/B/C: ";
        std::cin >> incognita;        

        //DESPEJAMOS PARA A
        if (incognita == 1) {
            std::cout << "Ecuacion inicial:\n";
            std::cout << "C^2 = A^2 + B^2 \n";
            std::cout << "Despejando para A:\n";
            std::cout << "A^2 = C^2 - B^2\n";

            std::cout << "Ingrese valor para C: ";
            std::cin >> c;

            //VALIDACION C
            while (c < 4 || c >= 16) {
                std::cout << "El valor de C debe ser 4 <= c < 16: ";
                std::cin >> c;
            }
            std::cout << "Ingrese valor para B: ";
            std::cin >> b;

            //VALIDACION B
            while ((b < 4 || b >= 16) || b >= c) {
                std::cout << "El valor de B debe ser 4 <= b < 16 y menor a C: ";
                std::cin >> b;
            }

            respuesta = c * c - b * b;

            printf("Ecuacion: A^2 = %d^2 - %d^2 \n", c, b);
            printf("A^2 = %d - %d \n", c*c, b*b);
            printf("A^2 = %d \n", c * c - b * b);

            for (int i = 0; i < respuesta; i++) {
                if (i*i == respuesta) {
                    printf("A = %d\n", i);
                    flag = 1;
                }
            }
            if (flag == 0) {
                std::cout << "A no es una raiz exacta\n";
            }
        }

        //DESPEJAMOS PARA B
        else if (incognita == 2) {
            std::cout << "Ecuacion inicial:\n";
            std::cout << "C^2 = A^2 + B^2 \n";
            std::cout << "Despejando para B:\n";
            std::cout << "B^2 = C^2 - A^2\n";

            std::cout << "Ingrese valor para C: ";
            std::cin >> c;

            //VALIDACION C
            while (c < 4 || c >= 16) {
                std::cout << "El valor de C debe ser 4 <= c < 16: ";
                std::cin >> c;
            }
            std::cout << "Ingrese valor para A: ";
            std::cin >> a;

            //VALIDACION A
            while ((a < 4 || a >= 16) || a >= c) {
                std::cout << "El valor de A debe ser 4 <= a < 16 y menor a C: ";
                std::cin >> a;
            }

            respuesta = c * c - a * a;

            printf("Ecuacion: B^2 = %d^2 - %d^2 \n", c,a);
            printf("B^2 = %d - %d \n", c * c, a * a);
            printf("B^2 = %d \n", c * c - a * a);

            for (int i = 0; i < respuesta; i++) {
                if (i * i == respuesta) {
                    printf("B = %d\n", i);
                    flag = 1;
                }
            }
            if (flag == 0) {
                std::cout << "B no es una raiz exacta\n";
            }
        }

        //RESOLVEMOS PARA C
        else if (incognita == 3) {

            std::cout << "Ecuacion inicial:\n";
            std::cout << "C^2 = A^2 + B^2 \n";
            std::cout << "Ecuacion ya despejada. \n";
            std::cout << "Ingrese valor para B: ";
            std::cin >> b;

            //VALIDACION B
            while (b < 4 || b >= 16) {
                std::cout << "El valor de B debe ser 4 <= b < 16: ";
                std::cin >> b;
            }
            std::cout << "Ingrese valor para A: ";
            std::cin >> a;

            //VALIDACION A
            while (a < 4 || a >= 16) {
                std::cout << "El valor de A debe ser 4 <= a < 16: ";
                std::cin >> a;
            }

            respuesta = b * b + a * a;

            printf("Ecuacion: C^2 = %d^2 + %d^2 \n", a, b);
            printf("C^2 = %d + %d \n", a * a, b * b);
            printf("C^2 = %d \n", b* b + a * a);

            for (int i = 0; i < respuesta; i++) {
                if (i * i == respuesta) {
                    printf("C = %d\n", i);
                    flag = 1;
                }
            }
            if (flag == 0) {
                std::cout << "C no es una raiz exacta\n";
            }
        }

        //NO EXISTE ESTA OPCION
        else {
            std::cout << "No existe esa opcion\n";
        }

        printf("Desea seguir calculando (S/N): ");
        std::cin >> resp;
    }
}
