#include "include/gateway.hpp"

#include <cgicc/Cgicc.h>
#include <cgicc/FormEntry.h>

#include <QtCore/QMap>

using namespace cgicc;

namespace gateway {
    GateWay::GateWay()
    {
    }

    GateWay::~GateWay()
    {}

    QMap<QString, QString> GateWay::getPostParameters() const throw()
    {
        Cgicc cgi;
        std::vector<FormEntry> formElements = cgi.getElements();
        QMap<QString, QString> postParamenterMap;
        for(FormEntry element : formElements) {
            postParamenterMap.insert(QString::fromStdString(element.getName()), QString::fromStdString(element.getValue()));
        }
        return postParamenterMap;
    }
}
