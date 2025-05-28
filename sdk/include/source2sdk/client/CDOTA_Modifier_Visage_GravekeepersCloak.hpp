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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Visage_GravekeepersCloak : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage_reduction; // 0x1888            
            std::int32_t max_layers; // 0x188c            
            float minimum_damage; // 0x1890            
            std::int32_t recovery_time; // 0x1894            
            float radius; // 0x1898            
            std::int32_t max_damage_reduction; // 0x189c            
            source2sdk::client::ParticleIndex_t m_nFXIndex[4]; // 0x18a0            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x18b0            
            uint8_t _pad18b4[0x4]; // 0x18b4
            // vStacks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTA_Modifier_Visage_GravekeepersCloak_Stack*> vStacks;
            char vStacks[0x18]; // 0x18b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_GravekeepersCloak because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Visage_GravekeepersCloak) == 0x18d0);
    };
};
