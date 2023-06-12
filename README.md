# MACRO_FOR_EACH

preprocess each variable with comma seperator
```
// FOR_EACH_COMMA(MACRO, 1, 2, 3, 4)
// -->
// MACRO(1),MACRO(2),MACRO(3),MACRO(4)
```
```
// FOR_EACH_COMMA(MACRO)
// -->
// 
```

wrap above with a new macro
```
// WRAP_CALL(call, MACRO, 1, 2, 3, 4)
// -->
// call(MACRO(1), MACRO(2), MACRO(3), MACRO(4))
```


seperate variable with special seperator
```
// std::cout <<  SEPERATOR_ARGS(<<, 1, 2, 3, std::endl)
//           -->
// std::cout <<  1 << 2 << 3 << std::endl
```


call each variable
```
// ARG_OP_CALL(MACRO, 1, 2, 3, 4)
// -->
// MACRO(1); MACRO(2); MACRO(3); MACRO(4)
```


chain member function calls
```
// CHAIN_CALL(MACRO, 1, 2, 3, 4)
// -->
// MACRO(1).MACRO(2).MACRO(3).MACRO(4)
```
