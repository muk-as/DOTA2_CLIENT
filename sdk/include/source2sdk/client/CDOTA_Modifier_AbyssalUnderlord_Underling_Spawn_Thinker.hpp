#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float underling_search_radius; // 0x1888            
            std::int32_t warrior_health; // 0x188c            
            std::int32_t warrior_damage; // 0x1890            
            std::int32_t archer_health; // 0x1894            
            std::int32_t archer_damage; // 0x1898            
            std::int32_t hull_radius; // 0x189c            
            std::int32_t gold_bounty; // 0x18a0            
            std::int32_t xp_bounty; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker) == 0x18a8);
    };
};
