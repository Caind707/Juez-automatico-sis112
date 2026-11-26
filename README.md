# Juez Automático Local en C++ (SIS-112)
**Universidad Católica Boliviana "San Pablo"**  
**Carrera:** Ingeniería de Sistemas
**Materia:** Programación I (SIS-112)  
**Estudiantes:** Camila Indira Flores Condori  
                 Gabriel Alberto Cruz Nogales
**Docente:** M.Sc. Orlando Rivera J.  

---
## Descripción del Proyecto
El **Juez Automático Local** es una aplicación en consola desarrollada en **C++11 estándar** orientada a la evaluación automática de ejercicios de programación competitiva y académica.
El sistema compila archivos de código fuente en C++ (`.cpp`) mediante el compilador `g++`, inyecta conjuntos de datos de prueba desde archivos planos (`in_*.txt`) utilizando redirección de entradas/salidas de consola (`<` y `>`) y compara minuciosamente la salida generada frente a la solución esperada (`out_*.txt`), emitiendo veredictos en tiempo real.

---
## Características Principales
* **Veredictos Evaluados:**
  * `Accepted (AC)`: La salida generada coincide exactamente con la salida esperada.
  * `Wrong Answer (WA)`: Se detecta una discrepancia en el resultado, indicando la línea exacta del fallo.
  * `Compilation Error (CE)`: El código entregado presenta errores de sintaxis al compilar con `g++`.
* **Persistencia Binaria de Datos:**
  * Los registros de ejercicios, estudiantes y envíos se conservan mediante lectura y escritura binaria en archivos `.dat` (`problemas.dat`, `estudiantes.dat`, `envios.dat`).
* **Algoritmo de Ordenamiento y Ranking:**
  * Implementación del algoritmo **Selection Sort** para ordenar la tabla general de posiciones según el puntaje total acumulado por problemas únicos aceptados.
* **Reportes Exportables:**
  * Exportación automática del boletín oficial de posiciones en formato de texto plano (`tabla_posiciones.txt`).
---
## Estructura del Repositorio
```text
juez-automatico-sis112/
├── README.md                 <-- Documentación principal del proyecto
├── .gitignore                <-- Reglas para omitir ejecutables binarios (.exe, .o)
├── src/
|   ├── estructuras.h <-- struct Problema, Estudiante, Envio 
|   ├── archivo.h / .cpp <-- [1. archivo] 
|   ├── control.h / .cpp <-- [2. control] 
|   ├── ingresar.h / .cpp <-- [3. ingresar] 
|   ├── calcular.h / .cpp <-- [4. calcular] 
|   ├── ejecutar.h / .cpp <-- [5. ejecutar] 
|   ├── decidir.h / .cpp <-- [6. decidir] 
|   ├── mostrar.h / .cpp <-- [7. mostrar] 
|   └── main.cpp <-- punto de entrada (main) 
|   
├── tests/
│   ├── in_101.txt            <-- Caso de entrada: Multiplicación de Matrices
│   ├── out_101.txt           <-- Salida esperada: Multiplicación de Matrices
│   ├── in_102.txt            <-- Caso de entrada: Verificación de Primalidad
│   ├── out_102.txt           <-- Salida esperada: Verificación de Primalidad
│   ├── in_103.txt            <-- Caso de entrada: Sombra Poligonal 3D
│   └── out_103.txt           <-- Salida esperada: Sombra Poligonal 3D
└── docs/
    └── Perfil_Proyecto_SIS_112.pdf  <-- Perfil oficial aprobado del proyecto
```
---
## Menú de Opciones del Sistema (14 Funciones)
1. **Registrar nuevo ejercicio:** Agrega un problema con sus rutas de prueba y puntaje.
2. **Listar banco de ejercicios:** Muestra los problemas disponibles por nivel de dificultad.
3. **Buscar ejercicio por código:** Consulta rápida de detalles de un problema.
4. **Modificar ejercicio:** Actualiza nivel o puntaje asignado.
5. **Eliminar ejercicio:** Retira un problema del banco.
6. **Registrar estudiante:** Alta de participante por Código Universitario único.
7. **Listar estudiantes:** Muestra la lista de alumnos registrados.
8. **Dar de baja estudiante:** Retira a un alumno del sistema.
9. **Evaluar código fuente C++ (.cpp):** Compila, ejecuta y emite veredicto (`AC`, `WA`, `CE`).
10. **Consultar historial de estudiante:** Revisa los envíos y resultados de un participante.
11. **Ver Tabla de Posiciones y Ranking:** Ordena participantes con Selection Sort.
12. **Ver Estadísticas por Nivel:** Calcula % de efectividad en Básico, Intermedio y Avanzado.
13. **Exportar Boletín de Posiciones:** Genera `tabla_posiciones.txt`.
0. **Salir y Guardar Cambios:** Guarda la información en archivos binarios `.dat`.
---
## Compilación y Ejecución Modular
Para ejecutar el proyecto localmente con MinGW / `g++`:
Al contar con una estructura dividida en 7 módulos de responsabilidad (`archivo`, `control`, `ingresar`, `calcular`, `ejecutar`, `decidir`, `mostrar`), la compilación requiere vincular todos los archivos fuentes (`.cpp`) de la carpeta `src/`.

```bash
# 1. Compilación Abre la consola en la raíz del proyecto y ejecuta:
powershell g++ -std=c++11 src/\*.cpp -o juez\_local.exe


