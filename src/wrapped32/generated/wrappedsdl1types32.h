/******************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.1.1) *
 ******************************************************************/
#ifndef __wrappedsdl1TYPES32_H_
#define __wrappedsdl1TYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFv_t)(void);
typedef void (*vFp_t)(void*);
typedef int32_t (*iFv_t)(void);
typedef int32_t (*iFp_t)(void*);
typedef void* (*pFp_t)(void*);
typedef int32_t (*iFpp_t)(void*, void*);
typedef void* (*pFpp_t)(void*, void*);
typedef void* (*pFiiiu_t)(int32_t, int32_t, int32_t, uint32_t);

#define SUPER() ADDED_FUNCTIONS() \
	GO(SDL_Quit, vFv_t) \
	GO(SDL_KillThread, vFp_t) \
	GO(SDL_UnlockSurface, vFp_t) \
	GO(SDL_Has3DNow, iFv_t) \
	GO(SDL_Has3DNowExt, iFv_t) \
	GO(SDL_HasAltiVec, iFv_t) \
	GO(SDL_HasMMX, iFv_t) \
	GO(SDL_HasMMXExt, iFv_t) \
	GO(SDL_HasRDTSC, iFv_t) \
	GO(SDL_HasSSE, iFv_t) \
	GO(SDL_HasSSE2, iFv_t) \
	GO(SDL_Flip, iFp_t) \
	GO(SDL_LockSurface, iFp_t) \
	GO(SDL_PollEvent, iFp_t) \
	GO(SDL_GL_GetProcAddress, pFp_t) \
	GO(SDL_LoadObject, pFp_t) \
	GO(SDL_OpenAudio, iFpp_t) \
	GO(SDL_CreateThread, pFpp_t) \
	GO(SDL_LoadFunction, pFpp_t) \
	GO(SDL_SetVideoMode, pFiiiu_t)

#endif // __wrappedsdl1TYPES32_H_
