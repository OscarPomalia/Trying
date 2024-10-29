# Introducción a Git y GitHub
Git es una herramienta de control de versiones que permite a los
desarrolladores gestionar el historial de cambios de su código de forma
eficiente. 

Con Git, puedes rastrear el progreso de tus proyectos, revertir 
cambios cuando sea necesario, y colaborar de manera efectiva con otros 
programadores. 

GitHub, por otro lado, es una plataforma basada en la web que utiliza Git y
facilita la colaboración en proyectos a través de repositorios remotos.

En el contexto del laboratorio del Curso de **Fundamentos de Programación**
utilizaremos Git GitHub para:
- Colaborar con otros compañeros en la resolución de ejercicios.
- Mantener un historial claro de tus avances y correcciones.
- Enviar y revisar aportes para la corrección de errores o mejoras en ejercicios y tareas asignadas.
- Desarrollar una práctica común en la industria del software, donde Git y GitHub son estándares.

## Instalación de Git

### En Windows

1. Descarga Git desde la página oficial: [https://git-scm.com/downloads](https://git-scm.com/downloads)
2. Ejecuta el instalador y sigue las instrucciones.
   - Asegúrate de seleccionar la opción **"Git from the command line and also from 3rd-party software"**.
3. Verifica la instalación abriendo **Git Bash** (lo encuentras en el menú de inicio) y escribiendo el siguiente comando:
   ```bash 
   git --version
   ```

### En Ubuntu

1. Abre una terminal y ejecuta

    ```bash
    sudo apt update
    sudo apt install git
    ```

2. Verifica la instalación con: 

    ```bash
    git --version
    ```

## Configuración Inicial de Git
Antes de empezar a usar Git, es importante 
configurarlo con tu nombre y correo 
electrónico. Esta información se asociará a 
tus commits.

1. Abre la terminal (Git Bash en Windows o 
Terminal en Ubuntu).

2. Configura tu nombre:
    ```bash
    git config --global user.name "Tu Nombre"
    ```

3. Configura tu correo electrónico

    ```bash
    git config --global user.email "tuemail@example.com"
    ```

## Crear una Cuenta en GitHub
1. Ingrese a https://github.com y crea una 
cuenta gratuita.

2. Una vez creada, asegúrate de verificar tu correo electrónico.

## Contribuyendo al Repositorio del Laboratorio

### Paso 1. Clonar el repositorio

1. Abre Git Bash o Terminal

2. Clona el repositorio del Laboratorio

    ```bash
    git clone git@github.com:usuario/FPCC112-Parte2.git
    ```

### Paso 2: Hacer Cambios Locales

1. Cambia de directorio al repositorio clonado

    ```bash
    cd FPCC112-Parte2
    ```
2. Haz cambios en los archivos por ejemplo resuelve un ejercicio/tarea

### Paso 3: Agregar cambios a Git

a. Añade los cambios que has hecho al "staging area";

    ```bash
    git add .
    ```
    El punto indica que quieres agregar todos los cambios.

### Paso 4: Hacer un Commit
1. Haz un commit describiendo todos  los cambios.
    ```bash
    git commit -m "Resolucion del ejercicio Z"
    ```

### Paso 6: Subir tus cambios a GitHub

1. Sube los cambios a tu repositorio remoto (peviamente debió **forkear** el repositorio del curso)

    ```bash
    git push origin main
    ``` 
    Si estás trabajando en una nueva rama, reemplaza main con el nombre de la rama.

### Paso 6. Crear un Pull Request
1. Ve al repositorio en Github.

2. Haz clic en el botón **"Compare & pull request"**

3. Añade una descripcción y envía el pull request.

### Otros comandos útiles
* Ver el estado de los cambios
    ```bash
    git status
    ```
* Ver el historial de commits
    ```bash
    git log
    ```

* Actualizar tu copia local desde GitHub (si estás en main)

    ```bash
    git pull origin main
    ```
    Si estas en otra rama: Puedes traer los cambios del repositorio remoto sin cambiar de rama (Esto traerá todos los cambios del repositorio remoto, incluyendo los de main, pero no los aplicará a tu rama.) con:
    ```bash
    git fetch origin
    ```
    Si quieres combinar los cambios de la rama main en tu rama actual para asegurarte de que estás trabajando con la versión más reciente, ejecuta:
    ```bash
    git merge origin/main
    ```
    Esto aplicará los cambios más recientes de la rama main en tu rama actual.

* Creación de una nueva rama
    ```bash
    git checkout -b nombreApellido
    ```

* Verificar la rama actual de trabajo
    ```bash
    git branch
    ```

* Cambiar de rama de trabajo
    ```bash
    git checkout main
    ```
    Este comando cambiará a la rama principal

* Cambia a tu rama de trabajo y fusiona los cambios de la rama main en tu rama.
    ```bash
    git checkout nombreApellido
    git merge main
    ```

* **Pasos para actualizar un fork en Git** Si hay cambios en el repositorio original ("Your branch is behind upstream/main" by x commits) del curso debemos:

    1. Cambia a la rama correcta que deseas actualizar (generalmente main o master)
        ```cpp
        git checkout main
        ```
    2. Trae los cambios del repositorio original
        ```cpp
        git fetch upstream
        ```
        Esto asumiendo que haz configurado upstream para apuntar al repositorio original. De lo contrario **debes configurarlo así**:
        
        * Verifica qué remotos ya está  congifurados ejecutando el siguiente comando:
            ```bash
            git remote -v
            ```
            Esto te mostrará los remotos configurados, como origin, que generalmente apunta a tu fork.

        * Agregar el repositorio original como upstream (solo la primera vez)
            ```bash
            git remote add upstream URL_DEL_REPOSITORIO_ORIGINAL
            ```
            Ejemplo:
            ```bash
            git remote add upstream https://github.com/CC112uni/FPCC112-Parte2.git
            ``` 
        * Verifica que se haya agregado correctamente volviendo ejecutar
            ```bash
            git remote -v
            ```
            Deberias ver ahora dos remotos: origin (tu fork) y usptream (el repositorio original)
            ```perl
            origin  https://github.com/AmericoCh/FPCC112-Parte2.git (fetch)
            origin  https://github.com/AmericoCh/FPCC112-Parte2.git (push)
            upstream  https://github.com/CC112uni/FPCC112-Parte2.git (fetch)
            upstream  https://github.com/CC112uni/FPCC112-Parte2.git (push)
            ```
    3. Cambia a la rama main de tu fork (o la rama que quieras actualizar):
        ```bash
        git checkout main
        ```
    4. Fusiona los cambios del upstream/main en tu fork/local:
        ```bash
        git merge upstream/main
        ```
    5. Después de fusionar los cambios del repositorio original, debes subirlos a tu repositorio de GitHub (el fork).
        ```bash
        git push origin main
        ```


