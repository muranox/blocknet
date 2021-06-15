// Copyright (c) 2017-2020 The Blocknet developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

//******************************************************************************
//******************************************************************************

#ifndef BLOCKNET_XBRIDGE_XBRIDGEWALLETCONNECTORBCD_H
#define BLOCKNET_XBRIDGE_XBRIDGEWALLETCONNECTORBCD_H

#include <xbridge/xbridgewalletconnectorbtc.h>
#include <xbridge/xbridgecryptoproviderbtc.h>

//*****************************************************************************
//*****************************************************************************
namespace xbridge
{

//******************************************************************************
//******************************************************************************
class BCDWalletConnector : public BtcWalletConnector<BtcCryptoProvider>
{
public:
    BCDWalletConnector();

public:
    bool createRefundTransaction(const std::vector<XTxIn>  & inputs,
                                 const std::vector<XTxOut> & outputs,
                                 const std::vector<unsigned char> & mpubKey,
                                 const std::vector<unsigned char> & mprivKey,
                                 const std::vector<unsigned char> & innerScript,
                                 const uint32_t lockTime,
                                 std::string & txId,
                                 std::string & rawTx) override;

    bool createPaymentTransaction(const std::vector<XTxIn>  & inputs,
                                  const std::vector<XTxOut> & outputs,
                                  const std::vector<unsigned char> & mpubKey,
                                  const std::vector<unsigned char> & mprivKey,
                                  const std::vector<unsigned char> & xpubKey,
                                  const std::vector<unsigned char> & innerScript,
                                  std::string & txId,
                                  std::string & rawTx) override;

};

} // namespace xbridge

#endif // BLOCKNET_XBRIDGE_XBRIDGEWALLETCONNECTORBCD_H
