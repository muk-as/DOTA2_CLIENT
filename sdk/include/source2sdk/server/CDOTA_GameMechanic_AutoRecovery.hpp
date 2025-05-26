#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CServerOnlyEntity.hpp"

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
        // Size: 0x538
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_GameMechanic_AutoRecovery : public source2sdk::server::CServerOnlyEntity
        {
        public:
            uint8_t _pad04e0[0x10]; // 0x4e0
            float m_flRecoveryDelay; // 0x4f0            
            float m_flHealthRegenPerSecond; // 0x4f4            
            float m_flManaRegenPerSecond; // 0x4f8            
            float m_flTickInterval; // 0x4fc            
            uint8_t _pad0500[0x38];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_GameMechanic_AutoRecovery because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_GameMechanic_AutoRecovery) == 0x538);
    };
};
