#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/ECrowdLevel.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5f8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int16 m_nRadiantCheers"
        // static metadata: MNetworkVarNames "int16 m_nDireCheers"
        // static metadata: MNetworkVarNames "int16 m_nRadiantPremiumCheers"
        // static metadata: MNetworkVarNames "int16 m_nDirePremiumCheers"
        // static metadata: MNetworkVarNames "ECrowdLevel m_nRadiantCrowdLevel"
        // static metadata: MNetworkVarNames "ECrowdLevel m_nDireCrowdLevel"
        #pragma pack(push, 1)
        class C_DOTACheers : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int16_t m_nRadiantCheers; // 0x5e8            
            // metadata: MNetworkEnable
            std::int16_t m_nDireCheers; // 0x5ea            
            // metadata: MNetworkEnable
            std::int16_t m_nRadiantPremiumCheers; // 0x5ec            
            // metadata: MNetworkEnable
            std::int16_t m_nDirePremiumCheers; // 0x5ee            
            // metadata: MNetworkEnable
            source2sdk::client::ECrowdLevel m_nRadiantCrowdLevel; // 0x5f0            
            // metadata: MNetworkEnable
            source2sdk::client::ECrowdLevel m_nDireCrowdLevel; // 0x5f4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTACheers because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTACheers) == 0x5f8);
    };
};
