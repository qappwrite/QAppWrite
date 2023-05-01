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
 * AWToken.h
 *
 * Token
 */

#ifndef AWTOKEN_H
#define AWTOKEN_H

#include <QJsonObject>

#include <QString>

#include "src/AWEnum.h"
#include "src/AWObject.h"

#include "src/AWGlobalExport.h"

namespace OpenAPI {

class APPWRITE_EXPORT AWToken : public AWObject {
public:
    AWToken();
    AWToken(QString json);
    ~AWToken() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getCreatedAt() const;
    void setCreatedAt(const QString &created_at);
    bool is_created_at_Set() const;
    bool is_created_at_Valid() const;

    QString getUserId() const;
    void setUserId(const QString &user_id);
    bool is_user_id_Set() const;
    bool is_user_id_Valid() const;

    QString getSecret() const;
    void setSecret(const QString &secret);
    bool is_secret_Set() const;
    bool is_secret_Valid() const;

    QString getExpire() const;
    void setExpire(const QString &expire);
    bool is_expire_Set() const;
    bool is_expire_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString created_at;
    bool m_created_at_isSet;
    bool m_created_at_isValid;

    QString user_id;
    bool m_user_id_isSet;
    bool m_user_id_isValid;

    QString secret;
    bool m_secret_isSet;
    bool m_secret_isValid;

    QString expire;
    bool m_expire_isSet;
    bool m_expire_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::AWToken)

#endif // AWTOKEN_H