#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"
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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Weaver_Shukuchi : public source2sdk::server::CDOTA_Modifier_Invisible
        {
        public:
            float radius; // 0x1888            
            std::int32_t damage; // 0x188c            
            std::int32_t speed; // 0x1890            
            std::int32_t min_movespeed_override; // 0x1894            
            float geminate_attack_mark_duration; // 0x1898            
            float slow_duration; // 0x189c            
            // m_hEntitiesAffected has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hEntitiesAffected;
            char m_hEntitiesAffected[0x18]; // 0x18a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Weaver_Shukuchi because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Weaver_Shukuchi) == 0x18b8);
    };
};
