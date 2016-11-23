#ifndef GATEWAY_GLOBAL_H
#define GATEWAY_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(GATEWAY_LIBRARY)
#  define GATEWAYSHARED_EXPORT Q_DECL_EXPORT
#else
#  define GATEWAYSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // GATEWAY_GLOBAL_H
