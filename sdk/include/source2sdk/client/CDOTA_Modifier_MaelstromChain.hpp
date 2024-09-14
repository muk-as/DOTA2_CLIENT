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
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_MaelstromChain : public client::CDOTA_Buff
    {
    public:
        int32_t chain_radius; // 0x16e8        
        int32_t chain_strikes; // 0x16ec        
        int32_t chain_damage; // 0x16f0        
        float chain_delay; // 0x16f4        
        int32_t m_iCurJumpCount; // 0x16f8        
        Vector m_vCurTargetLoc; // 0x16fc        
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x1708        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MaelstromChain because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MaelstromChain) == 0x1720);
};
