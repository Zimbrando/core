/*
 *	Configuration Library by Parra Studios
 *	Copyright (C) 2016 - 2017 Vicente Eduardo Ferrer Garcia <vic798@gmail.com>
 *
 *	A cross-platform library for managing multiple configuration formats.
 *
 */

#ifndef CONFIGURATION_IMPL_H
#define CONFIGURATION_IMPL_H 1

/* -- Headers -- */

#include <configuration/configuration_api.h>

#include <configuration/configuration_object.h>
#include <configuration/configuration_interface.h>

#ifdef __cplusplus
extern "C" {
#endif

/* -- Methods -- */

/**
*  @brief
*    Initialize configuration object implementation
*
*  @param[in] iface
*    Dependency to be injected
*
*  @return
*    Returns zero on correct initialization, distinct from zero otherwise
*
*/
CONFIGURATION_API int configuration_impl_initialize(configuration_interface iface);

/**
*  @brief
*    Load configuration object implementation @config
*
*  @param[in] config
*    Pointer to the config object to be loaded
*
*  @return
*    Returns zero on correct loading, distinct from zero otherwise
*
*/
CONFIGURATION_API int configuration_impl_load(configuration config);

/**
*  @brief
*    Retrieve a value from @config by @key of type @id
*
*  @param[in] config
*    Pointer to the config object to be accessed
*
*  @param[in] key
*    Key index to retrieve the value
*
*  @param[in] id
*    Type of value
*
*  @return
*    Returns pointer to value of type @id on valid @key, null otherwise
*
*/
CONFIGURATION_API value configuration_impl_value(configuration config, const char * key, type_id id);

/**
*  @brief
*    Unload configuration object implementation @config
*
*  @param[in] config
*    Pointer to the config object to be unloaded
*
*  @return
*    Returns zero on correct unloading, distinct from zero otherwise
*
*/
CONFIGURATION_API int configuration_impl_unload(configuration config);

/**
*  @brief
*    Destroy configuration object implementation
*
*  @return
*    Returns zero on correct destruction, distinct from zero otherwise
*
*/
CONFIGURATION_API int configuration_impl_destroy(void);

#ifdef __cplusplus
}
#endif

#endif /* CONFIGURATION_IMPL_H */
