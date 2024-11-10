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
    class CDOTA_Modifier_Invoker_Instance;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x630
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Invoker_Invoke : public server::CDOTABaseAbility
    {
    public:
        int32_t max_invoked_spells; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5cc[0x4]; // 0x5cc
        server::CDOTA_Modifier_Invoker_Instance* m_instances[3]; // 0x5d0        
        int32_t m_nCurInstanceSlot; // 0x5e8        
        bool m_bInvokedAbilitiesInitialized; // 0x5ec        
        [[maybe_unused]] std::uint8_t pad_0x5ed[0x3]; // 0x5ed
        // m_invokedAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_invokedAbilities[10];
        char m_invokedAbilities[0x28]; // 0x5f0        
        Vector m_vecCurrentColor; // 0x618        
        int32_t m_nQuasInstances; // 0x624        
        int32_t m_nExortInstances; // 0x628        
        int32_t m_nWexInstances; // 0x62c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Invoker_Invoke because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Invoker_Invoke) == 0x630);
};
