#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Standard-layout class: false
        // Size: 0x690
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hBear"
        #pragma pack(push, 1)
        class C_DOTA_Ability_LoneDruid_SpiritBear : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            bool m_bLevelChanged; // 0x680            
            uint8_t _pad0681[0x3]; // 0x681
            // metadata: MNetworkEnable
            // m_hBear has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBear;
            char m_hBear[0x4]; // 0x684            
            // m_hPreBear has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPreBear;
            char m_hPreBear[0x4]; // 0x688            
            uint8_t _pad068c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_LoneDruid_SpiritBear because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_LoneDruid_SpiritBear) == 0x690);
    };
};
