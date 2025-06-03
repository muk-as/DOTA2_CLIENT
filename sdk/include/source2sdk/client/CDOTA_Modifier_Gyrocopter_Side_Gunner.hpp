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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Gyrocopter_Side_Gunner : public source2sdk::client::CDOTA_Buff
        {
        public:
            float sidegunner_radius; // 0x1878            
            float sidegunner_fire_rate; // 0x187c            
            float m_flRotation; // 0x1880            
            // m_hIdealTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hIdealTarget;
            char m_hIdealTarget[0x4]; // 0x1884            
            // m_hSecondaryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSecondaryTarget;
            char m_hSecondaryTarget[0x4]; // 0x1888            
            float m_flLastFireTime; // 0x188c            
            // m_hOwnerNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwnerNPC;
            char m_hOwnerNPC[0x4]; // 0x1890            
            // m_hOwningAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwningAbility;
            char m_hOwningAbility[0x4]; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Gyrocopter_Side_Gunner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Gyrocopter_Side_Gunner) == 0x1898);
    };
};
