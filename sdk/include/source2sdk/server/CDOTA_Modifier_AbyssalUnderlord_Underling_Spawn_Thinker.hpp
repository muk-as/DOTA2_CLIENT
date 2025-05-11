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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float underling_search_radius; // 0x17f8            
            std::int32_t warrior_health; // 0x17fc            
            std::int32_t warrior_damage; // 0x1800            
            std::int32_t archer_health; // 0x1804            
            std::int32_t archer_damage; // 0x1808            
            std::int32_t hull_radius; // 0x180c            
            std::int32_t gold_bounty; // 0x1810            
            std::int32_t xp_bounty; // 0x1814            
            // m_vecAttackedEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecAttackedEnemies;
            char m_vecAttackedEnemies[0x18]; // 0x1818            
            bool m_bSpawnsStarted; // 0x1830            
            uint8_t _pad1831[0x3]; // 0x1831
            std::int32_t nSpawnsCompleted; // 0x1834            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker) == 0x1838);
    };
};
