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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_AghsFort_BossPreview : public source2sdk::client::C_BaseEntity
        {
        public:
            CUtlSymbolLarge m_strBossUnit; // 0x_            
            CUtlSymbolLarge m_strModelName; // 0x_            
            float m_flBossModelScale; // 0x_            
            float m_flExtraModelScale; // 0x_            
            std::int32_t m_nEncounterType; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_AghsFort_BossPreview because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_AghsFort_BossPreview) == 0x_);
    };
};
