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
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Invoker_Invoke : public server::CDOTABaseAbility
    {
    public:
        int32_t max_invoked_spells; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x5a4[0x4]; // 0x5a4
        server::CDOTA_Modifier_Invoker_Instance* m_instances[3]; // 0x5a8        
        int32_t m_nCurInstanceSlot; // 0x5c0        
        bool m_bInvokedAbilitiesInitialized; // 0x5c4        
        [[maybe_unused]] std::uint8_t pad_0x5c5[0x3]; // 0x5c5
        // m_invokedAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_invokedAbilities[10];
        char m_invokedAbilities[0x28]; // 0x5c8        
        Vector m_vecCurrentColor; // 0x5f0        
        int32_t m_nQuasInstances; // 0x5fc        
        int32_t m_nExortInstances; // 0x600        
        int32_t m_nWexInstances; // 0x604        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Invoker_Invoke because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Invoker_Invoke) == 0x608);
};
