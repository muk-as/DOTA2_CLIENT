#pragma once
#include "source2sdk/server/CGameRulesProxy.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTAGameRules;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4c0
    // Has VTable
    // Construct allowed
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CDOTAGameRules * m_pGameRules"
    #pragma pack(push, 1)
    class CDOTAGamerulesProxy : public server::CGameRulesProxy
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkTypeAlias "CDOTAGameRules*"
        // metadata: MNetworkPriority "32"
        server::CDOTAGameRules* m_pGameRules; // 0x4b8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTAGamerulesProxy because it is not a standard-layout class
    static_assert(sizeof(CDOTAGamerulesProxy) == 0x4c0);
};
