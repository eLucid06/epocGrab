epocGrab
========

récupérer des données issues du dispositif EPOC et les afficher dans la console

using https://github.com/qdot/emokit

## Compilation
g++ epocDevice.cpp main.cpp ./lib/libemokit.a -lmcrypt -lhidapi-hidraw -o test

