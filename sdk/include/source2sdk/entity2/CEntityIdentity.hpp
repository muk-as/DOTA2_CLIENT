#pragma once
#include "source2sdk/networksystem/ChangeAccessorFieldPathIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x78
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int32 m_nameStringableIndex"
    #pragma pack(push, 1)
    class CEntityIdentity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x14]; // 0x0
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "entityIdentityNameChanged"
        int32_t m_nameStringableIndex; // 0x14        
        CUtlSymbolLarge m_name; // 0x18        
        CUtlSymbolLarge m_designerName; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x28[0x8]; // 0x28
        uint32_t m_flags; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x34[0x4]; // 0x34
        // metadata: MNetworkDisable
        WorldGroupId_t m_worldGroupId; // 0x38        
        uint32_t m_fDataObjectTypes; // 0x3c        
        // metadata: MNetworkDisable
        // metadata: MNetworkChangeAccessorFieldPathIndex
        networksystem::ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x14]; // 0x44
        entity2::CEntityIdentity* m_pPrev; // 0x58        
        entity2::CEntityIdentity* m_pNext; // 0x60        
        entity2::CEntityIdentity* m_pPrevByClass; // 0x68        
        entity2::CEntityIdentity* m_pNextByClass; // 0x70        
        
        // Datamap fields:
        // void m_pAttributes; // 0x48
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CEntityIdentity, m_nameStringableIndex) == 0x14);
    static_assert(offsetof(CEntityIdentity, m_name) == 0x18);
    static_assert(offsetof(CEntityIdentity, m_designerName) == 0x20);
    static_assert(offsetof(CEntityIdentity, m_flags) == 0x30);
    static_assert(offsetof(CEntityIdentity, m_worldGroupId) == 0x38);
    static_assert(offsetof(CEntityIdentity, m_fDataObjectTypes) == 0x3c);
    static_assert(offsetof(CEntityIdentity, m_PathIndex) == 0x40);
    static_assert(offsetof(CEntityIdentity, m_pPrev) == 0x58);
    static_assert(offsetof(CEntityIdentity, m_pNext) == 0x60);
    static_assert(offsetof(CEntityIdentity, m_pPrevByClass) == 0x68);
    static_assert(offsetof(CEntityIdentity, m_pNextByClass) == 0x70);
    
    static_assert(sizeof(CEntityIdentity) == 0x78);
};
