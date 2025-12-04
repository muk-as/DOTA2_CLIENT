#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Phoenix_IcarusYoink : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vSource; // 0x_            
            Vector m_vTarget; // 0x_            
            Vector m_vDirection; // 0x_            
            QAngle m_angDirection; // 0x_            
            float m_flCurrentTime; // 0x_            
            float dash_length; // 0x_            
            float dash_width; // 0x_            
            float hit_radius; // 0x_            
            float burn_duration; // 0x_            
            float dive_duration; // 0x_            
            float impact_damage; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitEntities;
            char m_vecHitEntities[0x_]; // 0x_            
            // hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> hTarget;
            char hTarget[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Phoenix_IcarusYoink because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Phoenix_IcarusYoink) == 0x_);
    };
};
