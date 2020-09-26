//Author: ...
//Data: ...
//Desc: This is a small header file used to define types that are used for GBA development
//      these types are named according to their signedness and their bit length

#ifndef __GBA_TYPES_H__
#define __GBA_TYPES_H__

#include <stdint.h>
#include <stdbool.h>

//\===========================================================================================================
//\TYPEDEF our variables to indicate clearly what level of bit precision each variable has
//\===========================================================================================================
typedef uint8_t		uint8;	    typedef int8_t		int8;
typedef uint16_t	uint16;	    typedef int16_t		int16;
typedef uint32_t	uint32;	    typedef int32_t		int32;
//\===========================================================================================================
//\ Volatile variables
//\ The volatile key word indicates to the compiler, and the programmer. That these variables may have their values
//\ altered by an external factor, this could be a hardware switch, or some external program that can access the 
//\ memory location of the variable.
//\===========================================================================================================
typedef volatile uint8_t		v_uint8;	typedef volatile int8_t			v_int8;
typedef volatile uint16_t		v_uint16;	typedef volatile int16_t		v_int16;
typedef volatile uint32_t		v_uint32;	typedef volatile int32_t		v_int32;

#endif //__GBA_TYPES_H__