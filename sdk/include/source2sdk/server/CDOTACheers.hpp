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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            std::int16_t m_nRadiantCheers; // 0x_            
            // metadata: MNetworkEnable
            std::int16_t m_nDireCheers; // 0x_            
            // metadata: MNetworkEnable
            std::int16_t m_nRadiantPremiumCheers; // 0x_            
            // metadata: MNetworkEnable
            std::int16_t m_nDirePremiumCheers; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::ECrowdLevel m_nRadiantCrowdLevel; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::ECrowdLevel m_nDireCrowdLevel; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTACheers because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTACheers) == 0x_);
    };
};
