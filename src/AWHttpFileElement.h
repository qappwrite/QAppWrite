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

#ifndef AW_HTTP_FILE_ELEMENT_H
#define AW_HTTP_FILE_ELEMENT_H

#include <QJsonValue>
#include <QMetaType>
#include <QString>

namespace OpenAPI {

class AWHttpFileElement {

public:
    AWHttpFileElement();
    AWHttpFileElement(QString output);

    QString variable_name;
    QString local_filename;
    QString request_filename;
    QString mime_type;
    void setMimeType(const QString &mime);
    void setFileName(const QString &name);
    void setVariableName(const QString &name);
    void setRequestFileName(const QString &name);
    bool isSet() const;
    bool fromStringValue(const QString &instr);
    bool fromJsonValue(const QJsonValue &jval);
    bool fromByteArray(const QByteArray &bytes);
    bool saveToFile(const QString &variable_name, const QString &local_filename, const QString &request_filename, const QString &mime, const QByteArray &bytes);
    QString asJson() const;
    QJsonValue asJsonValue() const;
    QByteArray asByteArray() const;
    QByteArray loadFromFile(const QString &variable_name, const QString &local_filename, const QString &request_filename, const QString &mime);
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::AWHttpFileElement)

#endif // AW_HTTP_FILE_ELEMENT_H