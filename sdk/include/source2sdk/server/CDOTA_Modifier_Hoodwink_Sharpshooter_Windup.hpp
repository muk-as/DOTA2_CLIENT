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
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Hoodwink_Sharpshooter_Windup : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bReachedMax; // 0x17f8            
            uint8_t _pad17f9[0x3]; // 0x17f9
            float m_flLastOverheadTime; // 0x17fc            
            float m_flFacingTarget; // 0x1800            
            Vector m_vAimTarget; // 0x1804            
            source2sdk::client::ParticleIndex_t m_nCrosshairFX; // 0x1810            
            uint8_t _pad1814[0x4]; // 0x1814
            // m_vecVisionThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecVisionThinkers;
            char m_vecVisionThinkers[0x18]; // 0x1818            
            float arrow_vision; // 0x1830            
            float max_charge_time; // 0x1834            
            float turn_rate; // 0x1838            
            float base_power; // 0x183c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Sharpshooter_Windup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Hoodwink_Sharpshooter_Windup) == 0x1840);
    };
};
