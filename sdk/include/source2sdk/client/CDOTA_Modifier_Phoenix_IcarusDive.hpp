#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18e0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Phoenix_IcarusDive : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vSource; // 0x1878            
            Vector m_vTarget; // 0x1884            
            Vector m_vDirection; // 0x1890            
            QAngle m_angDirection; // 0x189c            
            float m_flCurrentTime; // 0x18a8            
            float dash_length; // 0x18ac            
            float dash_width; // 0x18b0            
            float hit_radius; // 0x18b4            
            float burn_duration; // 0x18b8            
            float dive_duration; // 0x18bc            
            float impact_damage; // 0x18c0            
            uint8_t _pad18c4[0x4]; // 0x18c4
            // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHitEntities;
            char m_vecHitEntities[0x18]; // 0x18c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Phoenix_IcarusDive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Phoenix_IcarusDive) == 0x18e0);
    };
};
