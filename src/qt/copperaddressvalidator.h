// Copyright (c) 2011-2014 The Bitcoin Core developers
// Copyright (c) 2017 The Copper Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COPPER_QT_COPPERADDRESSVALIDATOR_H
#define COPPER_QT_COPPERADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class CopperAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CopperAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Copper address widget validator, checks for a valid copper address.
 */
class CopperAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CopperAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // COPPER_QT_COPPERADDRESSVALIDATOR_H
