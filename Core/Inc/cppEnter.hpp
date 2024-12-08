#ifndef CPPENTER_HPP_
#define CPPENTER_HPP_
 
#include <stdint.h>
#include <stdio.h>
 
void EventLoopCpp();   // Cpp function to call into main event loop
 
#ifdef __cplusplus
extern "C"
{
#endif
    void EventLoopC();  // C function to call into Cpp event loop from main
#ifdef __cplusplus
}
#endif
 
#endif /* CPPENTER_HPP_ */