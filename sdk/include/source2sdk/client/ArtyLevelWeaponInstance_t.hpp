#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
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
            uint8_t _pad0008[0x4]; // 0x8
            std::int32_t m_nReloads; // 0xc            
            std::int32_t m_nPointsPerShot; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ArtyLevelWeaponInstance_t, m_szName) == 0x0);
        static_assert(offsetof(source2sdk::client::ArtyLevelWeaponInstance_t, m_nReloads) == 0xc);
        static_assert(offsetof(source2sdk::client::ArtyLevelWeaponInstance_t, m_nPointsPerShot) == 0x10);
        
        static_assert(sizeof(source2sdk::client::ArtyLevelWeaponInstance_t) == 0x18);
    };
};
