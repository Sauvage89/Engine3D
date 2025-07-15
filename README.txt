ton-projet/
├── .vscode/
│   └── settings.json
├── build/
├── src/
│   └── main.cpp
├── include/
└── CMakeLists.txt

Command :
    1.0 - En étant dans le dossier "build" du projet
        1.1 - Pour compiler ↓ 
cmake .. && cmake --build .
        1.2 - Pour executer ↓ 
"Debug\Moteur3D.exe"
        1.3 - Pour compiler et executer ↓ 
cmake .. && cmake --build . && "Debug\Moteur3D.exe"



FAIRE EN SORTE QUE TOUTE LES OPERATION PUISSE CE FAIRE PAR LE GPU