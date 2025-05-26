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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_speed; // 0x1878            
            float agility_duration; // 0x187c            
            bool m_bGiveAgility; // 0x1880            
            uint8_t _pad1881[0x3]; // 0x1881
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1884            
            std::int32_t bonus_agility; // 0x1888            
            float illusion_spawn_radius; // 0x188c            
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x1890            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost) == 0x18a8);
    };
};
