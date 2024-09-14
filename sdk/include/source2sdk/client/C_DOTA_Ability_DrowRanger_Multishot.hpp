#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x6a0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_DrowRanger_Multishot : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vStartPos; // 0x5d8        
        int32_t m_iArrowProjectile; // 0x5e4        
        int32_t m_nFXIndex; // 0x5e8        
        float arrow_speed; // 0x5ec        
        int32_t arrow_spread; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5f4[0x4]; // 0x5f4
        // m_vHitTargets0 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vHitTargets0;
        char m_vHitTargets0[0x18]; // 0x5f8        
        // m_vHitTargets1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vHitTargets1;
        char m_vHitTargets1[0x18]; // 0x610        
        // m_vHitTargets2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vHitTargets2;
        char m_vHitTargets2[0x18]; // 0x628        
        // m_vHitTargets3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vHitTargets3;
        char m_vHitTargets3[0x18]; // 0x640        
        // m_vHitTargets4 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vHitTargets4;
        char m_vHitTargets4[0x18]; // 0x658        
        // m_vHitTargets5 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vHitTargets5;
        char m_vHitTargets5[0x18]; // 0x670        
        // m_vHitTargets6 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vHitTargets6;
        char m_vHitTargets6[0x18]; // 0x688        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_DrowRanger_Multishot because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_DrowRanger_Multishot) == 0x6a0);
};
