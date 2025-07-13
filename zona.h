// zona.h

// Estructura Zona
struct Zona {
    char nombre[50];
    float *historico;
    int numDiasHistorico;
    float actual;
    float temperatura;
    float viento;
    float humedad;
    float limite;
};

// Declaración de funciones
void inicializarZonas(struct Zona *zonas);
void liberarMemoria(struct Zona *zonas);
void mostrarTablaHistoricoActualPrediccion(struct Zona *zonas);
void mostrarDatosClimaticos(struct Zona *zonas);
float prediccionSiguienteDia(float *hist, int n, float actual);
void emitirAlertas(struct Zona *zonas);
void generarRecomendaciones(struct Zona *zonas);
void exportarDatos(struct Zona *zonas, const char *archivo);
void leerDatos(struct Zona *zonas, const char *archivo);
void ingresarDatosActuales(struct Zona *zonas);
void actualizarArchivo(struct Zona *zonas, const char *archivo);
