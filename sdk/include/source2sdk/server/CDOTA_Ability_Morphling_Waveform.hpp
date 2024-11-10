#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Morphling_Waveform : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5c8[0x10]; // 0x5c8
        int32_t m_nProjectileID; // 0x5d8        
        Vector m_vProjectileLocation; // 0x5dc        
        // m_hHitHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hHitHero;
        char m_hHitHero[0x4]; // 0x5e8        
        bool m_bGrantedGem; // 0x5ec        
        [[maybe_unused]] std::uint8_t pad_0x5ed[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Morphling_Waveform because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Morphling_Waveform) == 0x5f0);
};
