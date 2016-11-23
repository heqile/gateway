#ifndef GATEWAY_HPP
#define GATEWAY_HPP

#include <QtCore/qglobal.h>

#include <QtCore/QSharedPointer>

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

//    private:
//        QSharedPointer<cgicc::Cgicc> m_cgi;
    };
}

#endif // GATEWAY_HPP
