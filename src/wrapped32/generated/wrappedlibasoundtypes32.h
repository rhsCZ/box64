/*********************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.2.2) *
 *********************************************************************/
#ifndef __wrappedlibasoundTYPES32_H_
#define __wrappedlibasoundTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFp_t)(void*);
typedef int32_t (*iFipp_t)(int32_t, void*, void*);
typedef int32_t (*iFpppp_t)(void*, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(snd_device_name_free_hint, iFp_t) \
	GO(snd_device_name_hint, iFipp_t) \
	GO(snd_pcm_mmap_begin, iFpppp_t)

#endif // __wrappedlibasoundTYPES32_H_