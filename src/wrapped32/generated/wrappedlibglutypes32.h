/*********************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.2.2) *
 *********************************************************************/
#ifndef __wrappedlibgluTYPES32_H_
#define __wrappedlibgluTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFpup_t)(void*, uint32_t, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(gluNurbsCallback, vFpup_t) \
	GO(gluQuadricCallback, vFpup_t) \
	GO(gluTessCallback, vFpup_t)

#endif // __wrappedlibgluTYPES32_H_