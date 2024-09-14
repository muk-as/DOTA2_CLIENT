#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Size: 0x570
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle< C_BaseEntity> m_hEntAttached"
    // static metadata: MNetworkVarNames "bool m_bCheapEffect"
    #pragma pack(push, 1)
    class C_EntityFlame : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_hEntAttached has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEntAttached;
        char m_hEntAttached[0x4]; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x53c[0x24]; // 0x53c
        // m_hOldAttached has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOldAttached;
        char m_hOldAttached[0x4]; // 0x560        
        // metadata: MNetworkEnable
        bool m_bCheapEffect; // 0x564        
        [[maybe_unused]] std::uint8_t pad_0x565[0xb];
        
        // Datamap fields:
        // void m_hEffect; // 0x540
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EntityFlame because it is not a standard-layout class
    static_assert(sizeof(C_EntityFlame) == 0x570);
};
