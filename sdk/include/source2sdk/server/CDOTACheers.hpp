#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECrowdLevel.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
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
        class CDOTACheers : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int16_t m_nRadiantCheers; // 0x4e0            
            // metadata: MNetworkEnable
            std::int16_t m_nDireCheers; // 0x4e2            
            // metadata: MNetworkEnable
            std::int16_t m_nRadiantPremiumCheers; // 0x4e4            
            // metadata: MNetworkEnable
            std::int16_t m_nDirePremiumCheers; // 0x4e6            
            // metadata: MNetworkEnable
            source2sdk::client::ECrowdLevel m_nRadiantCrowdLevel; // 0x4e8            
            // metadata: MNetworkEnable
            source2sdk::client::ECrowdLevel m_nDireCrowdLevel; // 0x4ec            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTACheers because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTACheers) == 0x4f0);
    };
};
