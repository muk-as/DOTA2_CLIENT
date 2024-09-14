#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nian_Waterball : public client::CDOTA_Buff
    {
    public:
        int32_t trail_damage_per_second; // 0x16e8        
        int32_t trail_damage_radius; // 0x16ec        
        // m_vFXIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_vFXIndices;
        char m_vFXIndices[0x18]; // 0x16f0        
        // m_vLocations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_vLocations;
        char m_vLocations[0x18]; // 0x1708        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Waterball because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nian_Waterball) == 0x1720);
};
