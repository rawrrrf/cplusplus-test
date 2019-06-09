# Compiling

```
mkdir out/
mkdir lib/
g++ -c src/Calculator.cpp -o out/Calculator.o
g++ -c src/Modulator.cpp -o out/Modulator.o
ar rvs lib/libCalc.a out/Calculator.o out/Modulator.o
g++ -L./lib -lCalc main.cpp -o main
```