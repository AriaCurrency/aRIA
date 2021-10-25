// Copyright (c) 2018-2019 The aRIA Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <iostream>

// aRIA includes.
#include <..\src\script\aRIAconsensus.h>
#include <..\src\primitives\transaction.h>
#include <..\src\script\script.h>
#include <..\src\streams.h>
#include <..\src\version.h>

CMutableTransaction BuildSpendingTransaction(const CScript& scriptSig, const CScriptWitness& scriptWitness, int nValue = 0)
{
    CMutableTransaction txSpend;
    txSpend.nVersion = 1;
    txSpend.nLockTime = 0;
    txSpend.vin.resize(1);
    txSpend.vout.resize(1);
    txSpend.vin[0].scriptWitness = scriptWitness;
    txSpend.vin[0].prevout.hash = uint256();
    txSpend.vin[0].prevout.n = 0;
    txSpend.vin[0].scriptSig = scriptSig;
    txSpend.vin[0].nSequence = CTxIn::SEQUENCE_FINAL;
    txSpend.vout[0].scriptPubKey = CScript();
    txSpend.vout[0].nValue = nValue;

    return txSpend;
}

int main()
{
    std::cout << "aRIAconsensus version: " << aRIAconsensus_version() << std::endl;

    CScript pubKeyScript;
    pubKeyScript << OP_1 << OP_0 << OP_1;

    int amount = 0; // 600000000;

    CScript scriptSig;
    CScriptWitness scriptWitness;
    CTransaction vanillaSpendTx = BuildSpendingTransaction(scriptSig, scriptWitness, amount);
    CDataStream stream(SER_NETWORK, PROTOCOL_VERSION);
    stream << vanillaSpendTx;

    aRIAconsensus_error err;
    auto op0Result = aRIAconsensus_verify_script_with_amount(pubKeyScript.data(), pubKeyScript.size(), amount, (const unsigned char*)&stream[0], stream.size(), 0, aRIAconsensus_SCRIPT_FLAGS_VERIFY_ALL, &err);
    std::cout << "Op0 result: " << op0Result << ", error code " << err << std::endl;

    getchar();

    return 0;
}
