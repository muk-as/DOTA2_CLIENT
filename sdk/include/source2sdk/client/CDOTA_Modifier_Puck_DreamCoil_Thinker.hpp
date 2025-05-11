#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Puck_DreamCoil_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hLinkedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hLinkedEntities;
            char m_hLinkedEntities[0x18]; // 0x17f8            
            float coil_radius; // 0x1810            
            float coil_break_radius; // 0x1814            
            float coil_initial_damage; // 0x1818            
            float coil_stun_duration; // 0x181c            
            float coil_duration; // 0x1820            
            float coil_break_damage; // 0x1824            
            // m_FXIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_FXIndex;
            char m_FXIndex[0x18]; // 0x1828            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Puck_DreamCoil_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Puck_DreamCoil_Thinker) == 0x1840);
    };
};
