# balls_game_cpp_fun_hehe

## Build Setup 1.

### Specs.

- CPU: Snapdragon X Elite X1E80100
- RAM: 16GB
- GPU: Qualcomm Adreno X1-85

### Build Steps.

- Using clang 20.1.3 arm64
- Using ninja winarm64
- In `third_party/JoltPhysics/Jolt/Core/Core.h:540`, line is changed to:
  ```cpp
  #define JPH_STACK_ALLOC(n)		_alloca(n)
  ```


## Build Setup 2.

### Specs.

- CPU: Intel Core i9-7980XE
- RAM: 32GB
- GPU: NVIDIA RTX 2080 Ti

### Build Steps.

- @TODO: UNSURE
