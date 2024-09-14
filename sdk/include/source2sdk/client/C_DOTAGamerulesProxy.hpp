#pragma once
#include "source2sdk/client/C_GameRulesProxy.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_DOTAGamerules;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x540
    // Has VTable
    // Construct allowed
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "C_DOTAGamerules * m_pGameRules"
    #pragma pack(push, 1)
    class C_DOTAGamerulesProxy : public client::C_GameRulesProxy
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkTypeAlias "CDOTAGameRules*"
        // metadata: MNetworkPriority "32"
        client::C_DOTAGamerules* m_pGameRules; // 0x538        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTAGamerulesProxy because it is not a standard-layout class
    static_assert(sizeof(C_DOTAGamerulesProxy) == 0x540);
};
