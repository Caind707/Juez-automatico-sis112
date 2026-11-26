struct Problema{
    int codigo;
    char titulo[35];
    char tema[20];
    int nivel;
    int puntos;
    char archivoIn[25];
    char archivoOut[25];
};

struct Estudiante{
    int codUniv;
    char nombre[35];
};

struct Estudiante{
    int idEnvio;
    int codUniv;
    int codigoProblema;
    char archivoCpp[40];
    char fecha[12];
    int veredicto;
};