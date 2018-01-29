#ifndef COLORCORRECT_CUTIL_CUTIL_H_
#define COLORCORRECT_CUTIL_CUTIL_H_
#include <stdlib.h>

#ifdef _WIN32
#define DllExport   __declspec( dllexport )
#else
#define DllExport
#endif

extern "C"{
  typedef struct {
    int width;
    int height;
    unsigned char *r;
    unsigned char *g;
    unsigned char *b;
  } rgbimage_t;


  DllExport double* calc_sdwgw(rgbimage_t* img, int subwidth, int subheight);
  DllExport double* calc_sdlwgw(rgbimage_t* img, int subwidth, int subheight);
  DllExport double* calc_lwgw(rgbimage_t* img, int subwidth, int subheight);
  DllExport void calc_ace(rgbimage_t* img, int samples, double slope, double limit);
  DllExport void delete_doubleptr(double* p);
}

#endif
