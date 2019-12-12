#ifndef MACRO_FOR_EACH_IMPL
#define MACRO_FOR_EACH_IMPL

// clang-format off
#define ARG_OP_1(op, sep, arg     )  op(arg)
#define ARG_OP_2(op, sep, arg, ...)  op(arg) sep  EXPAND_(ARG_OP_1(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_3(op, sep, arg, ...)  op(arg) sep  EXPAND_(ARG_OP_2(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_4(op, sep, arg, ...)  op(arg) sep  EXPAND_(ARG_OP_3(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_5(op, sep, arg, ...)  op(arg) sep  EXPAND_(ARG_OP_4(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_6(op, sep, arg, ...)  op(arg) sep  EXPAND_(ARG_OP_5(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_7(op, sep, arg, ...)  op(arg) sep  EXPAND_(ARG_OP_6(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_8(op, sep, arg, ...)  op(arg) sep  EXPAND_(ARG_OP_7(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_9(op, sep, arg, ...)  op(arg) sep  EXPAND_(ARG_OP_8(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_10(op, sep, arg, ...) op(arg) sep  EXPAND_(ARG_OP_9(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_11(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_10(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_12(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_11(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_13(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_12(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_14(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_13(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_15(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_14(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_16(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_15(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_16(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_15(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_17(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_16(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_18(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_17(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_19(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_18(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_20(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_19(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_21(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_20(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_22(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_21(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_23(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_22(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_24(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_23(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_25(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_24(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_26(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_25(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_27(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_26(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_28(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_27(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_29(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_28(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_30(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_29(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_31(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_30(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_32(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_31(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_33(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_32(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_34(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_33(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_35(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_34(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_36(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_35(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_37(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_36(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_38(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_37(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_39(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_38(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_40(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_39(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_41(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_40(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_42(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_41(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_43(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_42(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_44(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_43(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_45(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_44(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_46(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_45(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_47(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_46(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_48(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_47(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_49(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_48(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_50(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_49(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_51(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_50(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_52(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_51(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_53(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_52(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_54(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_53(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_55(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_54(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_56(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_55(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_57(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_56(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_58(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_57(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_59(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_58(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_60(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_59(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_61(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_60(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_62(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_61(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_63(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_62(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_64(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_63(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_65(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_64(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_66(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_65(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_67(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_66(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_68(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_67(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_69(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_68(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_70(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_69(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_71(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_70(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_72(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_71(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_73(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_72(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_74(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_73(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_75(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_74(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_76(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_75(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_77(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_76(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_78(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_77(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_79(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_78(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_80(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_79(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_81(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_80(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_82(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_81(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_83(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_82(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_84(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_83(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_85(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_84(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_86(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_85(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_87(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_86(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_88(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_87(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_89(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_88(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_90(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_89(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_91(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_90(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_92(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_91(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_93(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_92(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_94(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_93(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_95(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_94(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_96(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_95(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_97(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_96(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_98(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_97(op, EXPAND_(sep), ##__VA_ARGS__))
#define ARG_OP_99(op, sep, arg, ...) op(arg) sep EXPAND_(ARG_OP_98(op, EXPAND_(sep), ##__VA_ARGS__))
 
#define ARG_SEQ() \
         99,98,97,96,95,94,93,92,91,90, \
         89,88,87,86,85,84,83,82,81,80, \
         79,78,77,76,75,74,73,72,71,70, \
         69,68,67,66,65,64,63,62,61,60, \
         59,58,57,56,55,54,53,52,51,50, \
         49,48,47,46,45,44,43,42,41,40, \
         39,38,37,36,35,34,33,32,31,30, \
         29,28,27,26,25,24,23,22,21,20, \
         19,18,17,16,15,14,13,12,11,10, \
          9, 8, 7, 6, 5, 4, 3, 2, 1, 0
 
#define ARG_N( \
         _1, _2, _3, _4, _5, _6, _7, _8, _9,_10, \
        _11,_12,_13,_14,_15,_16,_17,_18,_19,_20, \
        _21,_22,_23,_24,_25,_26,_27,_28,_29,_30, \
        _31,_32,_33,_34,_35,_36,_37,_38,_39,_40, \
        _41,_42,_43,_44,_45,_46,_47,_48,_49,_50, \
        _51,_52,_53,_54,_55,_56,_57,_58,_59,_60, \
        _61,_62,_63,_64,_65,_66,_67,_68,_69,_70, \
        _71,_72,_73,_74,_75,_76,_77,_78,_79,_80, \
        _81,_82,_83,_84,_85,_86,_87,_88,_89,_90, \
        _91,_92,_93,_94,_95,_96,_97,_98,_99, N, ...) N
 
#define MACRO_CONCAT_(A, B) A##B
#define MACRO_CONCAT(A, B) MACRO_CONCAT_(A, B)
#define EXPAND_(...) __VA_ARGS__
 
#define ARG_COUNT_(...) EXPAND_(ARG_N(__VA_ARGS__))
#define ARG_COUNT(...) ARG_COUNT_(__VA_ARGS__, ARG_SEQ())
#define ARG_OP(...) MACRO_CONCAT(ARG_OP_, ARG_COUNT(__VA_ARGS__))
 
#define FOR_EACH(op, sep, ...) ARG_OP(EXPAND_(__VA_ARGS__))(op, sep, ##__VA_ARGS__)
 
#define ARG_COMMA ,
#define FOR_EACH_COMMA(op, ...) ARG_OP(EXPAND_(__VA_ARGS__))(op, ARG_COMMA, ##__VA_ARGS__)
// FOR_EACH_COMMA(MACRO, 1, 2, 3, 4)
// -->
// MICRO(1),MICRO(2),MICRO(3),MICRO(4)
 
#define WRAP_CALL(call, op, ...) call(FOR_EACH_COMMA(op, ##__VA_ARGS__))
// WRAP_CALL(call, MACRO, 1, 2, 3, 4)
// -->
// call(MACRO(1), MACRO(2), MACRO(3), MACRO(4))
 
// cannot use FOR_EACH on gcc and clang, why?
#define WRAP_CALL1(call, op, ...) ARG_OP(EXPAND_(__VA_ARGS__))(op, ARG_COMMA, ##__VA_ARGS__)

 
#define SEPERATOR_ARGS(sep, ...) FOR_EACH(EXPAND_, sep, ##__VA_ARGS__)
// std::cout <<  SEPERATOR_ARGS(<<, 1, 2, 3, std::endl)
//           -->
// std::cout <<  1 << 2 << 3 << std::endl
 
#define FOR_EACH_CALL(call, ...) FOR_EACH(call, ;, ##__VA_ARGS__)
// ARG_OP_CALL(MACRO, 1, 2, 3, 4)
// -->
// MACRO(1); MACRO(2); MACRO(3); MACRO(4)
 
#define CHAIN_CALL(call,...) FOR_EACH(call, ., ##__VA_ARGS__)
// CHAIN_CALL(MACRO, 1, 2, 3, 4)
// -->
// MACRO(1).MACRO(2).MACRO(3).MACRO(4)
// clang-format on

#endif
#if 0
#include <iostream>
template<typename T>
T print(const char* name, const T& t) {
    std::cout << name << "=" << t << std::endl;
    return t;
}
#define PRINT(a) print(#a, a)
template<typename T>
T same(T t) {
    return t;
}
int sum() {
    return 0;
}
template<typename T, typename... Args>
T sum(T t, Args... args) {
    return t + sum(args...);
}
#define TO_STRING_(a) #a
#define TO_STRING(a) TO_STRING_(a)
#define SUM(...) print(TO_STRING(SEPERATOR_ARGS(+,__VA_ARGS__)), sum(__VA_ARGS__))
int main() {
    std::cout << SEPERATOR_ARGS(<<, 1, 2, 3, 4, std::endl);

    std::cout << FOR_EACH(same, +, 1) << std::endl;

    std::cout << WRAP_CALL(sum, PRINT, 1, 2, 3, 4) << std::endl;

    std::cout << WRAP_CALL(SUM, PRINT, 1, 2, 3, 4);

    return 0;
}

/*
-->

int main() {
    std::cout << 1 << 2 << 3 << 4 << std::endl;
   
    std::cout << same(1) << std::endl;

    std::cout << sum(print("1", 1) , print("2", 2) , print("3", 3) , print("4", 4)) << std::endl;

    std::cout << print("print(\"1\", 1) + print(\"2\", 2) + print(\"3\", 3) + print(\"4\", 4)", sum(print("1", 1) , print("2", 2) , print("3", 3) , print("4", 4)));

    return 0;
}
*/
#endif
