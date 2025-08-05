#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0x608
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_AghsFort_BossPreview : public source2sdk::client::C_BaseEntity
        {
        public:
            CUtlSymbolLarge m_strBossUnit; // 0x5e8            
            CUtlSymbolLarge m_strModelName; // 0x5f0            
            float m_flBossModelScale; // 0x5f8            
            float m_flExtraModelScale; // 0x5fc            
            std::int32_t m_nEncounterType; // 0x600            
            uint8_t _pad0604[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_AghsFort_BossPreview because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_AghsFort_BossPreview) == 0x608);
    };
};
