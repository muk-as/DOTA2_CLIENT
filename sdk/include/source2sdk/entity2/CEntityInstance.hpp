#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
    class CEntityIdentity;
};

namespace source2sdk::entity2
{
    class CScriptComponent;
};

namespace source2sdk::entity2
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x38
    // Has VTable
    // Construct disallowed
    // MConstructibleClassBase
    // 
    // static metadata: MNetworkVarNames "CEntityIdentity * m_pEntity"
    // static metadata: MNetworkVarNames "CScriptComponent::Storage_t m_CScriptComponent"
    #pragma pack(push, 1)
    class CEntityInstance
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkDisable
        CUtlSymbolLarge m_iszPrivateVScripts; // 0x8        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "56"
        entity2::CEntityIdentity* m_pEntity; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x18[0x10]; // 0x18
        // metadata: MNetworkEnable
        // metadata: MNetworkDisable
        entity2::CScriptComponent* m_CScriptComponent; // 0x28        
        bool m_bVisibleinPVS; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x31[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CEntityInstance, m_iszPrivateVScripts) == 0x8);
    static_assert(offsetof(CEntityInstance, m_pEntity) == 0x10);
    static_assert(offsetof(CEntityInstance, m_CScriptComponent) == 0x28);
    static_assert(offsetof(CEntityInstance, m_bVisibleinPVS) == 0x30);
    
    static_assert(sizeof(CEntityInstance) == 0x38);
};
