# Compiling

```
g++ -c src/Calculator.cpp -o out/Calculator.o
ar rvs lib/libCalc.a out/Calculator.o
g++ -L./lib -lCalc main.cpp -o main
```