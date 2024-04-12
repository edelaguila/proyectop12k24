[1mdiff --git a/Holi!!.txt b/Holi!!.txt[m
[1mnew file mode 100644[m
[1mindex 0000000..38461b7[m
[1m--- /dev/null[m
[1m+++ b/Holi!!.txt[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32m//codigo[m[41m[m
[1mdiff --git a/SistemaUMG/include/Curso.h b/SistemaUMG/include/Curso.h[m
[1mdeleted file mode 100644[m
[1mindex 53c92ef..0000000[m
[1m--- a/SistemaUMG/include/Curso.h[m
[1m+++ /dev/null[m
[36m@@ -1,16 +0,0 @@[m
[31m-#ifndef CURSO_H[m
[31m-#define CURSO_H[m
[31m-[m
[31m-[m
[31m-class Curso[m
[31m-{[m
[31m-    public:[m
[31m-        Curso();[m
[31m-        virtual ~Curso();[m
[31m-[m
[31m-    protected:[m
[31m-[m
[31m-    private:[m
[31m-};[m
[31m-[m
[31m-#endif // CURSO_H[m
[1mdiff --git a/SistemaUMG/include/Estudiante.h b/SistemaUMG/include/Estudiante.h[m
[1mdeleted file mode 100644[m
[1mindex dfa0a46..0000000[m
[1m--- a/SistemaUMG/include/Estudiante.h[m
[1m+++ /dev/null[m
[36m@@ -1,16 +0,0 @@[m
[31m-#ifndef ESTUDIANTE_H[m
[31m-#define ESTUDIANTE_H[m
[31m-[m
[31m-[m
[31m-class Estudiante[m
[31m-{[m
[31m-    public:[m
[31m-        Estudiante();[m
[31m-        virtual ~Estudiante();[m
[31m-[m
[31m-    protected:[m
[31m-[m
[31m-    private:[m
[31m-};[m
[31m-[m
[31m-#endif // ESTUDIANTE_H[m
[1mdiff --git a/SistemaUMG/include/Maestro.h b/SistemaUMG/include/Maestro.h[m
[1mdeleted file mode 100644[m
[1mindex b9401dc..0000000[m
[1m--- a/SistemaUMG/include/Maestro.h[m
[1m+++ /dev/null[m
[36m@@ -1,16 +0,0 @@[m
[31m-#ifndef MAESTRO_H[m
[31m-#define MAESTRO_H[m
[31m-[m
[31m-[m
[31m-class Maestro[m
[31m-{[m
[31m-    public:[m
[31m-        Maestro();[m
[31m-        virtual ~Maestro();[m
[31m-[m
[31m-    protected:[m
[31m-[m
[31m-    private:[m
[31m-};[m
[31m-[m
[31m-#endif // MAESTRO_H[m
[1mdiff --git a/SistemaUMG/main.cpp b/SistemaUMG/main.cpp[m
[1mindex eae9bcd..2a5a2b5 100644[m
[1m--- a/SistemaUMG/main.cpp[m
[1m+++ b/SistemaUMG/main.cpp[m
[36m@@ -1,12 +1,14 @@[m
[31m-//Sistema UMG[m
[31m-#include <iostream>[m
[32m+[m[32m//sistema UMG[m
[32m+[m[32m#include <iostream>//libreria para uso de strings[m
[32m+[m[32m#include<fstream>//libreria uso metodos files[m
[32m+[m[32m//implementacion de clases:[m
 [m
 [m
 [m
 using namespace std;[m
 [m
[31m-int main()[m
[32m+[m[32mint main()//inicio del main[m
 {[m
[31m-    cout << "Hello world!" << endl;[m
[32m+[m
     return 0;[m
 }[m
[1mdiff --git a/SistemaUMG/src/Curso.cpp b/SistemaUMG/src/Curso.cpp[m
[1mdeleted file mode 100644[m
[1mindex 41fa9c4..0000000[m
[1m--- a/SistemaUMG/src/Curso.cpp[m
[1m+++ /dev/null[m
[36m@@ -1,11 +0,0 @@[m
[31m-#include "Curso.h"[m
[31m-[m
[31m-Curso::Curso()[m
[31m-{[m
[31m-    //ctor[m
[31m-}[m
[31m-[m
[31m-Curso::~Curso()[m
[31m-{[m
[31m-    //dtor[m
[31m-}[m
[1mdiff --git a/SistemaUMG/src/Estudiante.cpp b/SistemaUMG/src/Estudiante.cpp[m
[1mdeleted file mode 100644[m
[1mindex fadbf8f..0000000[m
[1m--- a/SistemaUMG/src/Estudiante.cpp[m
[1m+++ /dev/null[m
[36m@@ -1,11 +0,0 @@[m
[31m-#include "Estudiante.h"[m
[31m-[m
[31m-Estudiante::Estudiante()[m
[31m-{[m
[31m-    //ctor[m
[31m-}[m
[31m-[m
[31m-Estudiante::~Estudiante()[m
[31m-{[m
[31m-    //dtor[m
[31m-}[m
[1mdiff --git a/SistemaUMG/src/Maestro.cpp b/SistemaUMG/src/Maestro.cpp[m
[1mdeleted file mode 100644[m
[1mindex e247eab..0000000[m
[1m--- a/SistemaUMG/src/Maestro.cpp[m
[1m+++ /dev/null[m
[36m@@ -1,11 +0,0 @@[m
[31m-#include "Maestro.h"[m
[31m-[m
[31m-Maestro::Maestro()[m
[31m-{[m
[31m-    //ctor[m
[31m-}[m
[31m-[m
[31m-Maestro::~Maestro()[m
[31m-{[m
[31m-    //dtor[m
[31m-}[m
