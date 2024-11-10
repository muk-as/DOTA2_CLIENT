#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    struct ArtyLevelWeaponInstance_t
    {
    public:
        // metadata: MPropertyCustomFGDType "vdata_choice:scripts/events/crownfall/artillery_weapons.vdata"
        CUtlString m_szName; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x08[0x4]; // 0x8
        int32_t m_nReloads; // 0xc        
        int32_t m_nPointsPerShot; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ArtyLevelWeaponInstance_t, m_szName) == 0x0);
    static_assert(offsetof(ArtyLevelWeaponInstance_t, m_nReloads) == 0xc);
    static_assert(offsetof(ArtyLevelWeaponInstance_t, m_nPointsPerShot) == 0x10);
    
    static_assert(sizeof(ArtyLevelWeaponInstance_t) == 0x18);
};
