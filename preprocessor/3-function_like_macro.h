#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H
/*if "(x) < 0" is true -> return (-(x))*/
/*if "(x) < 0" is false -> return (x)*/
#define ABS(x) ((x) < 0 ? (-(x)) : (x))

#endif
