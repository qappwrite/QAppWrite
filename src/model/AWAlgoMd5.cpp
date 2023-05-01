/**
 * Appwrite
 * Appwrite backend as a service cuts up to 70% of the time and costs required for building a modern application. We abstract and simplify common development tasks behind a REST APIs, to help you develop your app in a fast and secure way. For full API documentation and tutorials go to [https://appwrite.io/docs](https://appwrite.io/docs)
 *
 * The version of the OpenAPI document: 1.3.0
 * Contact: team@appwrite.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "AWAlgoMd5.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "src/AWHelpers.h"

namespace OpenAPI {

AWAlgoMd5::AWAlgoMd5(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

AWAlgoMd5::AWAlgoMd5() {
    this->initializeModel();
}

AWAlgoMd5::~AWAlgoMd5() {}

void AWAlgoMd5::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;
}

void AWAlgoMd5::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void AWAlgoMd5::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;
}

QString AWAlgoMd5::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject AWAlgoMd5::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
    return obj;
}

QString AWAlgoMd5::getType() const {
    return type;
}
void AWAlgoMd5::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool AWAlgoMd5::is_type_Set() const{
    return m_type_isSet;
}

bool AWAlgoMd5::is_type_Valid() const{
    return m_type_isValid;
}

bool AWAlgoMd5::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool AWAlgoMd5::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && true;
}

} // namespace OpenAPI