#include <iostream>

using namespace std;

int alumno = 0;
int aprobados = 0, reprobados = 0, notaAlta = 0, notaBaja = 0;
int alta = 0, baja = 0;
double porcentajeAprobados = 0, porcentajeReprobados = 0, promedio = 0;

string alumnos[20];
int dato[20];

void notas()
{
for (int i = 0; i < 20; i++)
	{
        alumno++;
		system("cls");
		cout << endl;
		cout << "      ---------------------------------------------             " << endl;
		cout << "      CALIFICACIONES DE LOS ESTUDIANTES DE 4to GRADO            " << endl;
		cout << "                   CLASE: MATEMATICAS                           " << endl;
		cout << "      ---------------------------------------------             " << endl;
		
        cout << endl;
        cout << " Alumno No. " << alumno << endl;
		cout << " Ingrese el Nombre: ";
		cin >> alumnos[i];

        cout << " Ingrese la Nota: ";
		cin >> dato[i];

            if ( dato[i] >= 65 && dato[i] <= 100)
		    {
                aprobados++;
                notaAlta += dato[i];
                alta = dato[i];
                cout << endl;
                cout << " | APROBO LA CLASE |" << endl;
            }
			else
			{
            	if ( dato[i] >= 0 && dato[i] <= 64 )
            	{
                	reprobados++;
                	notaBaja += dato[i];
                	baja = dato[i];
                	cout << endl;
                	cout << " | REPROBO LA CLASE | " << endl;
                }
				else
				{
					cout << endl;
            		cout << " OPCION NO VALIDA " << endl;
            		break;
				}
			}

            promedio += dato[i];

            cout << endl; 
            system("pause");                  
	}
}

void resultados()
{
    system("cls");
    cout << " Tabla de Resultados:\nAlumno \tNota\n";
    cout << "------------" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << alumnos[i] << "\t" << dato[i]<< endl;
    }

    porcentajeAprobados = (notaAlta/promedio)*100;
    porcentajeReprobados = (notaBaja/promedio)*100;

    cout << endl;
    cout << endl;
    cout << "             REPORTE DE LOS ALUMNOS DE 4to GRADO " << endl;
    cout << "             -------------------------------------- " << endl;

    cout << " Porcentaje de Alumnos Aprobados:  " << porcentajeAprobados << " % " << endl;
    cout << " Porcentaje de Alumnos Reprobados: " << porcentajeReprobados << " % " << endl;
    cout << " Calificacion mas Alta:            " << alta << endl;
    cout << " Calificacion mas Baja:            " << baja << endl;
    cout << endl;
}
