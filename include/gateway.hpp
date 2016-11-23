#ifndef GATEWAY_HPP
#define GATEWAY_HPP

#include <QtCore/qglobal.h>
#include <QtCore/QScopedPointer>

#include <QtCore/QSharedPointer>

#include "src/gateway_private.hpp"

#if defined(GATEWAY_LIBRARY)
#  define GATEWAYSHARED_EXPORT Q_DECL_EXPORT
#else
#  define GATEWAYSHARED_EXPORT Q_DECL_IMPORT
#endif

namespace cgicc {
    class Cgicc;
}

namespace gateway {
    class GATEWAYSHARED_EXPORT GateWay
    {

    public:
        GateWay();
        ~GateWay();
        QMap<QString, QString> getPostParameters() const throw();

    private:
        GateWayPrivate gatewayPrivate;
        Q_DECLARE_PRIVATE(GateWay)
        QScopedPointer<GateWayPrivate> d_ptr;

    };
}

#endif // GATEWAY_HPP
