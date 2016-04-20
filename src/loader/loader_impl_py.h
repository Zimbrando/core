#ifndef LOADER_IMPL_PY_H
#define LOADER_IMPL_PY_H 1

#include <loader/loader_handle.h>

#ifdef __cplusplus
extern "C" {
#endif

int loader_impl_py_initialize(void);

int loader_impl_py_execution_path(char * execution_path);

loader_handle loader_impl_py_load(char * path);

int loader_impl_py_clear(loader_handle handle);

int loader_impl_py_discover(loader_handle handle);

int loader_impl_py_destroy(void);

#ifdef __cplusplus
}
#endif

#endif // LOADER_IMPL_PY_H
