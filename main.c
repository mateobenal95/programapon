#include <stdio.h>
#include "zona.h"

int main() {
    struct Zona zonas[5];
    leerDatos(zonas, "datos.bin");

    int opcion;
    do {
        printf("\n1. Ingresar datos actuales\n2. Tabla historico, actual y prediccion\n3. Mostrar datos climaticos\n4. Alertas\n5. Recomendaciones\n6. Exportar datos\n7. Salir\nOpcion: ");
        scanf("%d", &opcion);
        switch(opcion) {
            case 1: ingresarDatosActuales(zonas); break;
            case 2: mostrarTablaHistoricoActualPrediccion(zonas); break;
            case 3: mostrarDatosClimaticos(zonas); break;
            case 4: emitirAlertas(zonas); break;
            case 5: generarRecomendaciones(zonas); break;
            case 6: exportarDatos(zonas, "reporte.txt"); break;
        }
    } while(opcion != 7);

    liberarMemoria(zonas);
    return 0;
}
