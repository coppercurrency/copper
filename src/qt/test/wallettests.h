#ifndef COPPER_QT_TEST_WALLETTESTS_H
#define COPPER_QT_TEST_WALLETTESTS_H

#include <QObject>
#include <QTest>

class WalletTests : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void walletTests();
};

#endif // COPPER_QT_TEST_WALLETTESTS_H
