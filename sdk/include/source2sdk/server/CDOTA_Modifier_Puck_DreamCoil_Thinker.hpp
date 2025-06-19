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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Puck_DreamCoil_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hLinkedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hLinkedEntities;
            char m_hLinkedEntities[0x18]; // 0x1878            
            float coil_radius; // 0x1890            
            float coil_break_radius; // 0x1894            
            float coil_initial_damage; // 0x1898            
            float coil_stun_duration; // 0x189c            
            float coil_duration; // 0x18a0            
            float coil_break_damage; // 0x18a4            
            bool pierces_debuff_immunity; // 0x18a8            
            uint8_t _pad18a9[0x7]; // 0x18a9
            // m_FXIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_FXIndex;
            char m_FXIndex[0x18]; // 0x18b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Puck_DreamCoil_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Puck_DreamCoil_Thinker) == 0x18c8);
    };
};
