#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_LoneDruid_SpiritBear_Fetch_Self : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t self_slow; // 0x1888            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x188c            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1890            
            bool m_bFetchingRune; // 0x1894            
            uint8_t _pad1895[0x3]; // 0x1895
            Vector m_vPreviousLoc; // 0x1898            
            std::int32_t drag_distance; // 0x18a4            
            std::int32_t break_distance; // 0x18a8            
            uint8_t _pad18ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_LoneDruid_SpiritBear_Fetch_Self because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_LoneDruid_SpiritBear_Fetch_Self) == 0x18b0);
    };
};
