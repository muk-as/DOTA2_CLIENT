#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTA_Modifier_Visage_GravekeepersCloak_Stack;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Visage_GravekeepersCloak : public client::CDOTA_Buff
    {
    public:
        int32_t damage_reduction; // 0x1708        
        int32_t max_layers; // 0x170c        
        float minimum_damage; // 0x1710        
        int32_t recovery_time; // 0x1714        
        float radius; // 0x1718        
        int32_t max_damage_reduction; // 0x171c        
        client::ParticleIndex_t m_nFXIndex[4]; // 0x1720        
        client::ParticleIndex_t m_nFXIndexB; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4]; // 0x1734
        // vStacks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CDOTA_Modifier_Visage_GravekeepersCloak_Stack*> vStacks;
        char vStacks[0x18]; // 0x1738        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Visage_GravekeepersCloak because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Visage_GravekeepersCloak) == 0x1750);
};
