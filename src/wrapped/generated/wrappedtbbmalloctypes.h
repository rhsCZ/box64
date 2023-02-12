/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.2.0.16) *
 *******************************************************************/
#ifndef __wrappedtbbmallocTYPES_H_
#define __wrappedtbbmallocTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFp_t)(void*);
typedef uintptr_t (*LFp_t)(void*);
typedef uintptr_t (*LFpp_t)(void*, void*);
typedef void* (*pFLL_t)(uintptr_t, uintptr_t);
typedef void* (*pFpp_t)(void*, void*);
typedef void* (*pFpLL_t)(void*, uintptr_t, uintptr_t);
typedef void* (*pFpLp_t)(void*, uintptr_t, void*);
typedef void* (*pFpLLp_t)(void*, uintptr_t, uintptr_t, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(scalable_aligned_free, vFp_t) \
	GO(scalable_msize, LFp_t) \
	GO(safer_scalable_msize, LFpp_t) \
	GO(scalable_aligned_malloc, pFLL_t) \
	GO(scalable_calloc, pFLL_t) \
	GO(safer_scalable_free, pFpp_t) \
	GO(scalable_aligned_realloc, pFpLL_t) \
	GO(safer_scalable_realloc, pFpLp_t) \
	GO(safer_scalable_aligned_realloc, pFpLLp_t)

#endif // __wrappedtbbmallocTYPES_H_
