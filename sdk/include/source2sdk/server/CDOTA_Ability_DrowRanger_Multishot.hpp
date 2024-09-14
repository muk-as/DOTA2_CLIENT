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
    // Size: 0x668
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_DrowRanger_Multishot : public server::CDOTABaseAbility
    {
    public:
        Vector m_vStartPos; // 0x5a0        
        int32_t m_iArrowProjectile; // 0x5ac        
        int32_t m_nFXIndex; // 0x5b0        
        float arrow_speed; // 0x5b4        
        int32_t arrow_spread; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5bc[0x4]; // 0x5bc
        // m_vHitTargets0 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vHitTargets0;
        char m_vHitTargets0[0x18]; // 0x5c0        
        // m_vHitTargets1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vHitTargets1;
        char m_vHitTargets1[0x18]; // 0x5d8        
        // m_vHitTargets2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vHitTargets2;
        char m_vHitTargets2[0x18]; // 0x5f0        
        // m_vHitTargets3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vHitTargets3;
        char m_vHitTargets3[0x18]; // 0x608        
        // m_vHitTargets4 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vHitTargets4;
        char m_vHitTargets4[0x18]; // 0x620        
        // m_vHitTargets5 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vHitTargets5;
        char m_vHitTargets5[0x18]; // 0x638        
        // m_vHitTargets6 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vHitTargets6;
        char m_vHitTargets6[0x18]; // 0x650        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_DrowRanger_Multishot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_DrowRanger_Multishot) == 0x668);
};
