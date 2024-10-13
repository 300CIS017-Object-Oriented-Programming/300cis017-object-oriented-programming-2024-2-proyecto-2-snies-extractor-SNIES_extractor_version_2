#ifndef CONSOLIDADO_H
#define CONSOLIDADO_H

#include <string>
#include <map>

using std::string;
using std::map;

class Consolidado {
private:
    int idSexo;
    string sexo;
    int anio;
    int semestre;
    int inscritos;
    int admitidos;
    int matriculados;
    int matriculadosPrimerSemestre;
    int graduados;

    bool verificarMapaValido(const map<string, string> &) ;
public:
    Consolidado() = default;
    Consolidado(int idSexo, string sexo, int ano, int semestre);

    // Mantenimiento: Gran cantidad de métodos get y set que tal vez no son estrictamente necesarios
    // Cambio: Se quitaron algunos sets de la clase.
    int getIdSexo() const;
    string getSexo() const;
    int getAnio() const;
    int getSemestre() const;
    int getInscritos() const;
    int getAdmitidos() const;
    int getMatriculados() const;
    int getMatriculadosPrimerSemestre() const;
    int getGraduados() const;
    // Este metodo se encarga de inicializar los atributos
    // (Inscritos, Admitidos, Matriculados, MatriculadosPrimerSemestre, Graduados)
    // de la clase con los valores que se encuentran en el vector de parametrosConsolidado
    void setParametros(const map<string, string> &parametros);
};

#endif // CONSOLIDADO_H
