#pragma once

/**
 * Define specific things for the onto system
 */

extern "C" {
   void  ontio_assert( unsigned int test, const char* msg  );
   void __cxa_pure_virtual() { ontio_assert(false, "[error:] pure virtual method called"); }
}
