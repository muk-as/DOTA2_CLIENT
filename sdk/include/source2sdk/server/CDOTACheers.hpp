#pragma once
#include "source2sdk/client/ECrowdLevel.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4f0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "int16 m_nRadiantCheers"
    // static metadata: MNetworkVarNames "int16 m_nDireCheers"
    // static metadata: MNetworkVarNames "int16 m_nRadiantPremiumCheers"
    // static metadata: MNetworkVarNames "int16 m_nDirePremiumCheers"
    // static metadata: MNetworkVarNames "ECrowdLevel m_nRadiantCrowdLevel"
    // static metadata: MNetworkVarNames "ECrowdLevel m_nDireCrowdLevel"
    #pragma pack(push, 1)
    class CDOTACheers : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        int16_t m_nRadiantCheers; // 0x4e0        
        // metadata: MNetworkEnable
        int16_t m_nDireCheers; // 0x4e2        
        // metadata: MNetworkEnable
        int16_t m_nRadiantPremiumCheers; // 0x4e4        
        // metadata: MNetworkEnable
        int16_t m_nDirePremiumCheers; // 0x4e6        
        // metadata: MNetworkEnable
        client::ECrowdLevel m_nRadiantCrowdLevel; // 0x4e8        
        // metadata: MNetworkEnable
        client::ECrowdLevel m_nDireCrowdLevel; // 0x4ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTACheers because it is not a standard-layout class
    static_assert(sizeof(CDOTACheers) == 0x4f0);
};
