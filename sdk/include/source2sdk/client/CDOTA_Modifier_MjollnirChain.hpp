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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_MjollnirChain : public client::CDOTA_Buff
    {
    public:
        int32_t chain_radius; // 0x1708        
        int32_t chain_strikes; // 0x170c        
        int32_t chain_damage; // 0x1710        
        float chain_delay; // 0x1714        
        int32_t chain_damage_per_charge; // 0x1718        
        int32_t m_iCurJumpCount; // 0x171c        
        Vector m_vCurTargetLoc; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4]; // 0x172c
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x1730        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MjollnirChain because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MjollnirChain) == 0x1748);
};
