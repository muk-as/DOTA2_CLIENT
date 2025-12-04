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
        class CDOTA_Modifier_PhantomLancer_Juxtapose : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t proc_chance_pct; // 0x_            
            std::int32_t illusion_proc_chance_pct; // 0x_            
            std::int32_t max_illusions; // 0x_            
            float illusion_duration; // 0x_            
            std::int32_t illusion_damage_out_pct; // 0x_            
            std::int32_t illusion_damage_in_pct; // 0x_            
            std::int32_t shard_bonus_illusions; // 0x_            
            std::int32_t uncontrollable_illusions; // 0x_            
            std::int32_t new_target_radius; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecAttackedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecAttackedEntities;
            char m_vecAttackedEntities[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PhantomLancer_Juxtapose because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_PhantomLancer_Juxtapose) == 0x_);
    };
};
