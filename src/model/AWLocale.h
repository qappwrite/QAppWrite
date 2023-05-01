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

/*
 * AWLocale.h
 *
 * Locale
 */

#ifndef AWLOCALE_H
#define AWLOCALE_H

#include <QJsonObject>

#include <QString>

#include "src/AWEnum.h"
#include "src/AWObject.h"

#include "src/AWGlobalExport.h"

namespace OpenAPI {

class APPWRITE_EXPORT AWLocale : public AWObject {
public:
    AWLocale();
    AWLocale(QString json);
    ~AWLocale() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getIp() const;
    void setIp(const QString &ip);
    bool is_ip_Set() const;
    bool is_ip_Valid() const;

    QString getCountryCode() const;
    void setCountryCode(const QString &country_code);
    bool is_country_code_Set() const;
    bool is_country_code_Valid() const;

    QString getCountry() const;
    void setCountry(const QString &country);
    bool is_country_Set() const;
    bool is_country_Valid() const;

    QString getContinentCode() const;
    void setContinentCode(const QString &continent_code);
    bool is_continent_code_Set() const;
    bool is_continent_code_Valid() const;

    QString getContinent() const;
    void setContinent(const QString &continent);
    bool is_continent_Set() const;
    bool is_continent_Valid() const;

    bool isEu() const;
    void setEu(const bool &eu);
    bool is_eu_Set() const;
    bool is_eu_Valid() const;

    QString getCurrency() const;
    void setCurrency(const QString &currency);
    bool is_currency_Set() const;
    bool is_currency_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString ip;
    bool m_ip_isSet;
    bool m_ip_isValid;

    QString country_code;
    bool m_country_code_isSet;
    bool m_country_code_isValid;

    QString country;
    bool m_country_isSet;
    bool m_country_isValid;

    QString continent_code;
    bool m_continent_code_isSet;
    bool m_continent_code_isValid;

    QString continent;
    bool m_continent_isSet;
    bool m_continent_isValid;

    bool eu;
    bool m_eu_isSet;
    bool m_eu_isValid;

    QString currency;
    bool m_currency_isSet;
    bool m_currency_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::AWLocale)

#endif // AWLOCALE_H