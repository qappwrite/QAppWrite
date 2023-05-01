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

#ifndef AWAVATARSAPI_H
#define AWAVATARSAPI_H

#include "src/AWHelpers.h"
#include "src/AWHttpRequest.h"
#include "src/AWServerConfiguration.h"
#include "src/AWOauth.h"

#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

#include "src/AWGlobalExport.h"

namespace OpenAPI {

class APPWRITE_EXPORT AWAvatarsApi : public QObject {
    Q_OBJECT

public:
    AWAvatarsApi(const int timeOut = 0);
    ~AWAvatarsApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, AWServerVariable> &variables = QMap<QString, AWServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, AWServerVariable> &variables =  QMap<QString, AWServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, AWServerVariable> &variables =  QMap<QString, AWServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  code QString [required]
    * @param[in]  width qint32 [optional]
    * @param[in]  height qint32 [optional]
    * @param[in]  quality qint32 [optional]
    */
    void avatarsGetBrowser(const QString &code, const ::OpenAPI::OptionalParam<qint32> &width = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &height = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &quality = ::OpenAPI::OptionalParam<qint32>());

    /**
    * @param[in]  code QString [required]
    * @param[in]  width qint32 [optional]
    * @param[in]  height qint32 [optional]
    * @param[in]  quality qint32 [optional]
    */
    void avatarsGetCreditCard(const QString &code, const ::OpenAPI::OptionalParam<qint32> &width = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &height = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &quality = ::OpenAPI::OptionalParam<qint32>());

    /**
    * @param[in]  url QString [required]
    */
    void avatarsGetFavicon(const QString &url);

    /**
    * @param[in]  code QString [required]
    * @param[in]  width qint32 [optional]
    * @param[in]  height qint32 [optional]
    * @param[in]  quality qint32 [optional]
    */
    void avatarsGetFlag(const QString &code, const ::OpenAPI::OptionalParam<qint32> &width = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &height = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &quality = ::OpenAPI::OptionalParam<qint32>());

    /**
    * @param[in]  url QString [required]
    * @param[in]  width qint32 [optional]
    * @param[in]  height qint32 [optional]
    */
    void avatarsGetImage(const QString &url, const ::OpenAPI::OptionalParam<qint32> &width = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &height = ::OpenAPI::OptionalParam<qint32>());

    /**
    * @param[in]  name QString [optional]
    * @param[in]  width qint32 [optional]
    * @param[in]  height qint32 [optional]
    * @param[in]  background QString [optional]
    */
    void avatarsGetInitials(const ::OpenAPI::OptionalParam<QString> &name = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &width = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &height = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<QString> &background = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  text QString [required]
    * @param[in]  size qint32 [optional]
    * @param[in]  margin qint32 [optional]
    * @param[in]  download bool [optional]
    */
    void avatarsGetQR(const QString &text, const ::OpenAPI::OptionalParam<qint32> &size = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &margin = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<bool> &download = ::OpenAPI::OptionalParam<bool>());


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<AWServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    AWHttpRequestInput _latestInput;
    AWHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void avatarsGetBrowserCallback(AWHttpRequestWorker *worker);
    void avatarsGetCreditCardCallback(AWHttpRequestWorker *worker);
    void avatarsGetFaviconCallback(AWHttpRequestWorker *worker);
    void avatarsGetFlagCallback(AWHttpRequestWorker *worker);
    void avatarsGetImageCallback(AWHttpRequestWorker *worker);
    void avatarsGetInitialsCallback(AWHttpRequestWorker *worker);
    void avatarsGetQRCallback(AWHttpRequestWorker *worker);

signals:

    void avatarsGetBrowserSignal();
    void avatarsGetCreditCardSignal();
    void avatarsGetFaviconSignal();
    void avatarsGetFlagSignal();
    void avatarsGetImageSignal();
    void avatarsGetInitialsSignal();
    void avatarsGetQRSignal();

    void avatarsGetBrowserSignalFull(AWHttpRequestWorker *worker);
    void avatarsGetCreditCardSignalFull(AWHttpRequestWorker *worker);
    void avatarsGetFaviconSignalFull(AWHttpRequestWorker *worker);
    void avatarsGetFlagSignalFull(AWHttpRequestWorker *worker);
    void avatarsGetImageSignalFull(AWHttpRequestWorker *worker);
    void avatarsGetInitialsSignalFull(AWHttpRequestWorker *worker);
    void avatarsGetQRSignalFull(AWHttpRequestWorker *worker);

    void avatarsGetBrowserSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void avatarsGetCreditCardSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void avatarsGetFaviconSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void avatarsGetFlagSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void avatarsGetImageSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void avatarsGetInitialsSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void avatarsGetQRSignalE(QNetworkReply::NetworkError error_type, QString error_str);

    void avatarsGetBrowserSignalEFull(AWHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void avatarsGetCreditCardSignalEFull(AWHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void avatarsGetFaviconSignalEFull(AWHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void avatarsGetFlagSignalEFull(AWHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void avatarsGetImageSignalEFull(AWHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void avatarsGetInitialsSignalEFull(AWHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void avatarsGetQRSignalEFull(AWHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif // AWAVATARSAPI_H