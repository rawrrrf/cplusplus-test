# Compiling

```
mkdir build
cd build
cmake ..
make
```

# Tasks

1. Create an interface or super class, `Operator`, and refactor `Modulator` to implement that interface
2. Create another implementation that changes the sign of the `Calculator` do_operation method
3. Refactor the `Calculator` class so we can choose the operator on construction time.
4. Create a new folder, `test` and create a unit test for the Calculator do_operation method. 