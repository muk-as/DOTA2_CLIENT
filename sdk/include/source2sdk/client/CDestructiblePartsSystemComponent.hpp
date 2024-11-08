#pragma once
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseModelEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x88
    #pragma pack(push, 1)
    class CDestructiblePartsSystemComponent
    {
    public:
        // metadata: MNetworkChangeAccessorFieldPathIndex
        entity2::CNetworkVarChainer __m_pChainEntity; // 0x0        
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseModelEntity> m_hOwner;
        char m_hOwner[0x4]; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x54]; // 0x2c
        int32_t m_nLastHitDestructiblePartIndex; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0x84[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDestructiblePartsSystemComponent, __m_pChainEntity) == 0x0);
    static_assert(offsetof(CDestructiblePartsSystemComponent, m_hOwner) == 0x28);
    static_assert(offsetof(CDestructiblePartsSystemComponent, m_nLastHitDestructiblePartIndex) == 0x80);
    
    static_assert(sizeof(CDestructiblePartsSystemComponent) == 0x88);
};
