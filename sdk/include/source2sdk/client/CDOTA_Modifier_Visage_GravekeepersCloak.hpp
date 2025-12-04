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
        struct CDOTA_Modifier_Visage_GravekeepersCloak_Stack;
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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Visage_GravekeepersCloak : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage_reduction; // 0x_            
            std::int32_t max_layers; // 0x_            
            float minimum_damage; // 0x_            
            std::int32_t recovery_time; // 0x_            
            float radius; // 0x_            
            std::int32_t max_damage_reduction; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex[4]; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // vStacks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTA_Modifier_Visage_GravekeepersCloak_Stack*> vStacks;
            char vStacks[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_GravekeepersCloak because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Visage_GravekeepersCloak) == 0x_);
    };
};
